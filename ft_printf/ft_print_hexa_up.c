/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_up.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:49:41 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/19 14:22:09 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa_up(unsigned int hexa, int count)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (hexa > 15)
	{
		count = ft_print_hexa_up(hexa / 16, count);
		if (count == -1)
			return (-1);
	}
	count = ft_print_char(base[hexa % 16], count);
	if (count == -1)
		return (-1);
	return (count);
}
