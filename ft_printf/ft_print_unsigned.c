/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:59:28 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/15 14:35:46 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n, int count)
{
	if (n < 0)
		n *= -1;
	if (n > 9)
	{
		count = ft_print_unsigned(n / 10, count);
		if (count == -1)
			return (-1);
	}
	count = ft_print_char(n % 10 + '0', count);
	if (count == -1)
		return (-1);
	return (count);
}
