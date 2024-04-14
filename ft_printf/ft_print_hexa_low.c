/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_low.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:46:41 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/19 11:57:12 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa_low(unsigned int hexa, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (hexa > 15)
	{
		count = ft_print_hexa_low(hexa / 16, count);
		if (count == -1)
			return (-1);
	}
	count = ft_print_char(base[hexa % 16], count);
	if (count == -1)
		return (-1);
	return (count);
}
