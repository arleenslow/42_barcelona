/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:34:01 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/02 17:43:41 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
//tres parametros 1. un puntero hacia el bloque de memoria a rellenar
//2. c el valor a ser asignado 3. n el numero de bytes a ser asignado
{
	void	*str_ptr;

	str_ptr = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (str_ptr);
}
/*
int main (void)
{
	char name[20] = "edu chapadao";
	printf("%s mi funcion\n", ft_memset(name, 90, 6));
	printf ("%s", memset(name, 'Z', 6));
	return 0;
}
*/
