/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:34:02 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/19 14:25:02 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digits(int n, int count)
{
	long int	number;

	number = n;
	if (number < 0)
	{
		count = ft_print_char('-', count);
		if (count == -1)
			return (count);
		number *= -1;
	}
	if (number > 9)
	{
		count = ft_print_digits(number / 10, count);
		if (count == -1)
			return (-1);
	}
	count = ft_print_char(number % 10 + '0', count);
	if (count == -1)
		return (-1);
	return (count);
}
