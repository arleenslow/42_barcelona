/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 00:20:14 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/02 16:08:28 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
/*
#include <stdio.h>

void mifuncion(unsigned int i, char *c)
{
	printf("int %d, char %s\n", i, c);
}

int main ()
{
	ft_striteri("hola Mundo", mifuncion);
	return (0);
}
*/
