/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_char.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:30:43 by gdandele          #+#    #+#             */
/*   Updated: 2024/05/01 10:16:23 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CHAR_H
# define LIBFT_CHAR_H

# include <string.h>

/**
 * @brief The isalnum() function tests for any character for which isalpha or
 * isdigit is true. The value of the argument must be representable as an
 * unsigned char or the value of EOF.
 *
 * @param c The character to test.
 * @return int zero if the character tests false and returns 1 if the character
 * tests true.
 */
int	ft_isalnum(int c);

/**
 * @brief The isalpha() function tests for any character for which isupper or
 * islower is true. The value of the argument must be representable as an
 * unsigned char or the value of EOF.
 *
 * @param c The character to test.
 * @return int zero if the character tests false and returns 1 if the character
 * tests true.
 */
int	ft_isalpha(int c);

/**
 * @brief The isascii() function tests for an ASCII character, which is any
 * character between 0 and octal 0177 inclusive.
 *
 * @param c The character to test.
 * @return int zero if the character tests false and returns 1 if the character
 * tests true.
 */
int	ft_isascii(int c);

/**
 * @brief The isdigit() function tests for a decimal digit character. The value
 * of the argument must be representable as an unsigned char or
 * the value of EOF.
 *
 * @param c The character to test.
 * @return int zero if the character tests false and returns 1 if the character
 * tests true.
 */
int	ft_isdigit(int c);

/**
 * @brief The islower() function tests for any lowercase letter. The value of
 * the argument must be representable as an unsigned char or the value of EOF.
 *
 * @param c The character to test.
 * @return int zero if the character tests false and returns 1 if the character
 * tests true.
 */
int	ft_islower(int c);

/**
 * @brief The isprint() function tests for any printing character, including
 * space (‘ ’). The value of the argument must be representable as an
 * unsigned char or the value of EOF.
 *
 * @param c The character to test.
 * @return int zero if the character tests false and returns 1 if the character
 * tests true.
 */
int	ft_isprint(int c);

/**
 * @brief The isspace() function tests for the white-space characters. For any
 * locale, this includes the following standard characters:
 * `\\t` `\\n` `\\v` `\\f` `\\r` ` `.
 *
 * @param c The character to test.
 * @return int zero if the character tests false and returns 1 if the character
 * tests true.
 */
int	ft_isupper(int c);

/**
 * Converts the given character to lowercase if it is an uppercase letter.
 *
 * @param c The character to be converted.
 * @return int The lowercase equivalent of the character if it is an uppercase
 * letter, otherwise the character itself.
 */
int	ft_tolower(int c);

/**
 * Converts the given character to uppercase if it is an lowercase letter.
 *
 * @param c The character to be converted.
 * @return int The uppercase equivalent of the character if it is a lowercase
 * letter, otherwise the character itself.
 */
int	ft_toupper(int c);

#endif
