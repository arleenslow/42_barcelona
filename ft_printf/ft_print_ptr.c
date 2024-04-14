/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:36:47 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/15 14:39:11 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa_lower(unsigned long long hexa, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (hexa > 15)
	{
		count = ft_print_hexa_lower(hexa / 16, count);
		if (count == -1)
			return (-1);
	}
	count = ft_print_char(base[hexa % 16], count);
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_print_ptr(void *ptr, int count)
{
	count = ft_print_str("0x", count);
	if (count == -1)
		return (-1);
	count = ft_print_hexa_lower((unsigned long long)ptr, count);
	if (count == -1)
		return (-1);
	return (count);
}
