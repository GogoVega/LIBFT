/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_print.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:30:43 by gdandele          #+#    #+#             */
/*   Updated: 2024/05/09 22:29:00 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINT_H
# define LIBFT_PRINT_H

# include <unistd.h>
# include <stdarg.h>

/**
 * @brief The Standard Output (terminal)
 */
# define STDOUT 1

/**
 * @brief Prints formatted output to the standard output.
 *
 * This function takes a format string `str` and optional arguments, similar to
 * the standard `printf` function in C. It formats the output according to the
 * format string and writes it to the standard output stream.
 *
 * @param str The format string specifying the output format
 * @param ... Optional arguments to be formatted and printed
 * @return int The number of characters printed, or `-1` if an error occurs
 */
int		ft_printf(const char *str, ...);

/**
 * @brief Prints a single character to the standard output.
 *
 * @param c The character to be printed.
 * @return int The number of characters printed (always 1).
 */
int		ft_printchar(char c);

/**
 * @brief Prints the Hexadecimal representation of an unsigned long integer.
 *
 * This function takes an unsigned long integer 'n' and a character array 'base'
 * representing the base of the Hexadecimal number system. It converts the given
 * number 'n' into its Hexadecimal representation using the specified base and
 * prints it to the standard output.
 *
 * @param n The unsigned long integer to be converted and printed.
 * @param base The character array representing the base of the Hexadecimal
 * number system.
 * @return int The number of characters printed.
 */
int		ft_printhex_base(unsigned long int n, char *base);

/**
 * @brief Prints an integer to the standard output.
 *
 * @note If ft_itoa() fails, printnbr() prints nothing but the length
 * will be returned.
 *
 * @param n The integer to be printed.
 * @return int The number of characters printed, or -1 if an error occurred.
 */
int		ft_printnbr(int n);

/**
 * @brief Prints the Hexadecimal representation of a pointer.
 *
 * This function takes an unsigned long integer `n` representing a pointer and
 * prints its Hexadecimal representation to the standard output.
 *
 * @param n The pointer value to be printed.
 * @return int The number of characters printed.
 */
int		ft_printptr(unsigned long int n);

/**
 * @brief Prints a string to the standard output.
 *
 * This function takes a null-terminated string as input and prints it to the
 * standard output.
 *
 * @param str The string to be printed.
 * @return int The number of characters printed.
 */
int		ft_printstr(const char *str);

/**
 * @brief Prints an unsigned integer to the standard output.
 * 
 * @param n The unsigned integer to be printed.
 * @return int The number of characters printed.
 */
int		ft_printunbr(unsigned int n);

/**
 * @brief Outputs the character ’c’ to the given file descriptor.
 *
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor.
 *
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor followed by
 * a newline.
 *
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer ’n’ to the given file descriptor.
 *
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd);

#endif
