#include "../test_helper.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int	exit_code = 0;

	int pipefd[2];
	pid_t pid;
	char buffer[100];
	char expected_output[] = "Hello, World!";
	int expected_length = strlen(expected_output);

	// Création du tube
	if (pipe(pipefd) == -1)
	{
		perror("pipe");
		return (1);
	}

	pid = fork(); // Création d'un nouveau processus

	if (pid == -1)
	{
		perror("fork");
		return (1);
	}

	if (pid == 0)
	{
		close(pipefd[0]); // Fermeture de l'extrémité d'écriture du tube dans le processus enfant

		// Redirection de stdout vers l'extrémité de lecture du tube
		dup2(pipefd[1], STDOUT_FILENO);

		// Écriture dans stdout
		ft_putstr_fd(expected_output, 1);
	}
	else
	{
		close(pipefd[1]); // Fermeture de l'extrémité de lecture du tube dans le processus parent

		// Lecture à partir de l'extrémité de lecture du tube
		read(pipefd[0], buffer, expected_length);

		if (strncmp(buffer, expected_output, expected_length) == 0)
			success();
		else
			failed(&exit_code);
	}

	return (exit_code);
}