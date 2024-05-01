#include "../test_helper.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int	main()
{
	int	exit_code = 0;

	int pipefd[2];
	pid_t pid;
	char output[12] = "";

	ft_bzero(output, sizeof(output));

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

		// Test ft_putnbr_fd with positive number
		ft_putnbr_fd(2147483647, 1);
	}
	else
	{
		close(pipefd[1]); // Fermeture de l'extrémité de lecture du tube dans le processus parent

		// Lecture à partir de l'extrémité de lecture du tube
		read(pipefd[0], output, sizeof(output));
		//printf("%s", output);
		if (strcmp(output, "2147483647") == 0)
			success();
		else
			failed(&exit_code);
	}

	// Reset output buffer
	ft_bzero(output, sizeof(output) - 1);

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

		// Test ft_putnbr_fd with negative number
		ft_putnbr_fd(-2147483648, 1);
	}
	else
	{
		close(pipefd[1]); // Fermeture de l'extrémité de lecture du tube dans le processus parent

		// Lecture à partir de l'extrémité de lecture du tube
		read(pipefd[0], output, sizeof(output) - 1);
		//printf("%s", output);
		if (strcmp(output, "-2147483648") == 0)
			success();
		else
			failed(&exit_code);
	}

	return (exit_code);
}
