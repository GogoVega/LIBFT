/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_string.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:30:43 by gdandele          #+#    #+#             */
/*   Updated: 2024/05/05 16:00:08 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRING_H
# define LIBFT_STRING_H

# include <stdlib.h>
# include <string.h>

/**
 * @brief The atoi() function converts the initial portion of the string
 * pointed to by str to int representation.
 *
 * @param str The String to convert.
 * @return int The integer resulting.
 */
int		ft_atoi(const char *str);

/**
 * @brief The bzero() function writes n zeroed bytes to the string s.
 * If n is zero, bzero() does nothing.
 *
 * @param s The String to modify.
 * @param n The bytes number to modify.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief Allocates (with malloc) and returns a string representing the integer
 * received as an argument. Negative numbers is handled.
 *
 * @param n The integer to convert.
 * @return char* The string representing the integer.
 * NULL if the allocation fails.
 */
char	*ft_itoa(int n);

/**
 * @brief The memchr() function locates the first occurrence of c (converted to
 * an unsigned char) in string s.
 *
 * @param s The string in which to search the character.
 * @param c The character to search.
 * @param n The number of characters to check
 * @return void* A pointer to the byte located, or NULL if no such byte exist
 *  within n bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief The memcmp() function compares byte string s1 against byte string s2.
 * Both strings are assumed to be n bytes long.
 *
 * @param s1 The first String to compare
 * @param s2 The second String to compare
 * @param n The number of characters to check
 * @return int zero if the two strings are identical,
 * otherwise returns the difference between the first two differing bytes
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief The memcpy() function copies n bytes from memory area src to memory
 * area dst.  If dst and src overlap, behavior is undefined.
 *
 * @param dst The destination area.
 * @param src The source area.
 * @param n The number of bytes to copy
 * @return void* The original value of dst.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief The memmove() function copies len bytes from string src to string
 * dst. The two strings may overlap; the copy is always done in a
 * non-destructive manner.
 *
 * @param dst The destination area.
 * @param src The source area.
 * @param len The maximum string len to returns.
 * @return void* The original value of dst.
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
 * @brief The memset() function writes len bytes of value c (converted to an
 * unsigned char) to the string b.
 *
 * @param s The string to modify.
 * @param c The character to put.
 * @param n The number of character to modify.
 * @return void* The original value of dst.
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief Allocates (with malloc) and pads the start of a string with a
 * specified character. It pads the start of the string `str` with the
 * character `c` until the length of the string is equal to `len`.
 * If the length of the string is already greater than or equal to `len`,
 * the function returns the original string.
 *
 * @param str The string to be padded.
 * @param c The character used for padding.
 * @param len The desired length of the padded string.
 * @return char* The padded string or NULL if the allocation fails.
 */
char	*ft_padstart(char *str, char c, size_t len);

/**
 * @brief Allocates (with malloc) and pads the end of a string with a
 * specified character. It pads the end of the string `str` with the
 * character `c` until the length of the string is equal to `len`.
 * If the length of the string is already greater than or equal to `len`,
 * the function returns the original string.
 *
 * @param str The string to be padded.
 * @param c The character used for padding.
 * @param len The desired length of the padded string.
 * @return char* The padded string or NULL if the allocation fails.
 */
char	*ft_padend(char *str, char c, size_t len);

/**
 * @brief Allocates (with malloc) and returns an array of strings obtained by
 * splitting ’s’ using the character ’c’ as a delimiter.  The array must end
 * with a NULL pointer.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return char** The array of new strings resulting from the split.
 * NULL if the allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief The strchr() function locates the first occurrence of c (converted to
 * a char) in the string pointed to by s.  The terminating null character is
 * considered to be part of the string; therefore if c is ‘\0’, the
 * functions locate the terminating ‘\0’.
 *
 * @param s The String in which the character should be searched
 * @param c The Character to search
 * @return char* a pointer to the located character, or NULL if the character
 * does not appear in the string.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief The strdup() function allocates sufficient memory for a copy of the
 * string s1, does the copy, and returns a pointer to it.
 *
 * @param s1 The string to copy.
 * @return char* A pointer to the allocated memory.
 * NULL if the allocation fails.
 */
char	*ft_strdup(const char *s1);

/**
 * @brief Applies the function ’f’ on each character of the string passed as
 * argument, passing its index as first argument.  Each character is passed by
 * address to ’f’ to be modified if necessary.
 *
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief Allocates (with malloc) and returns a new string, which is the result
 * of the concatenation of ’s1’ and ’s2’.
 *
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return char* The new string or NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief strlcat() appends string src to the end of dst.
 * strlcat() take the full size of the destination buffer and guarantee
 * NUL-termination if there is room.  Note that room for the NUL should be 
 * included in dstsize.
 *
 * @param dst The destination String.
 * @param src The source String.
 * @param dstsize The maximum destination lenght.
 * @return size_t The total length of the string created.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * Copies a string from source to destination, up to a given size.
 *
 * @param dst The destination string where the copied string will be stored.
 * @param src The source string to be copied.
 * @param dstsize The size of the destination buffer.
 * @return The total length of the string that was attempted to be copied.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * Calculates the length of a null-terminated string.
 *
 * This function calculates the length of the string pointed to by `str`,
 * excluding the terminating null character.
 *
 * @param str The null-terminated string to calculate the length of.
 * @return The length of the string.
 */
size_t	ft_strlen(const char *str);

/**
 * @brief Applies the function ’f’ to each character of the string ’s’, and
 * passing its index as first argumentto create a new string (with malloc)
 * resulting from successive applications of ’f’.
 *
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return char* The string created from the successive applications of ’f’.
 * NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * Lexicographically compare the null-terminated strings s1 and s2.
 *
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n The maximum number of characters to compare.
 * @return An integer greater than, equal to, or less than 0, depending on
 * the comparison result.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief The strdnup() function allocates sufficient memory for a copy of the
 * string s1, does the copy, and returns a pointer to it.
 *
 * @param s1 The string to copy.
 * @param n The maximum number of characters to copy.
 * @return char* A pointer to the allocated memory.
 * NULL if the allocation fails.
 */
char	*ft_strndup(const char *s1, size_t n);

/**
 * Locates the first occurrence of the null-terminated string needle in the
 * string haystack, where not more than len characters are searched.
 * Characters that appear after a ‘\0’ character are not searched.
 *
 * @param haystack The string to search in.
 * @param needle The substring to search for.
 * @param len The maximum number of characters to consider in 'haystack'.
 * @return A pointer to the first occurrence of 'needle' in 'haystack' if found,
 * or NULL if 'needle' is not found.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * Locates for the last occurrence of a character in a string.
 *
 * The strrchr() function searches for the last occurrence of the character 'c'
 * in the string 's'. The search includes the terminating null character.
 *
 * @param s The string to be searched.
 * @param c The character to be located.
 * @return A pointer to the last occurrence of the character 'c' in the
 * string 's', or NULL if the character is not found.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Allocates (with malloc) and returns a copy of ’s1’ with the
 * characters specified in ’set’ removed from the beginning and the end
 * of the string.
 *
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return char* The trimmed string or NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Allocates (with malloc) and returns a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.
 *
 * @param s The String from which to create the substring.
 * @param start The start index of the substring in the string ’s’.
 * @param len The maximum length of the substring.
 * @return char* The substring or NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
