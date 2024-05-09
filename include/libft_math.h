/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_math.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:30:43 by gdandele          #+#    #+#             */
/*   Updated: 2024/05/07 22:24:57 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATH_H
# define LIBFT_MATH_H

/**
 * @brief The abs() function computes the absolute value of the integer `nb`.
 *
 * @param nbr The integer to compute
 * @return int The absolute value of `nb`
 */
int	ft_abs(int nbr);

/**
 * @brief Checks if the number is prime.
 * 
 * @param nb  The number to check.
 * @return int `1` if the number is prime, `0` otherwise.
 */
int	ft_isprime(int nb);

/**
 * @brief The sqrt() function compute the non-negative square root of `nb`.
 *
 * @param nb The integer to compute
 * @return int The square root of `nb`
 */
int	ft_sqrt(int nb);

#endif
