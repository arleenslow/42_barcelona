/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:03:00 by atorregr          #+#    #+#             */
/*   Updated: 2024/01/24 17:29:13 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int main (void)
{
	const char *cadenaa = "kekkekeke";
	size_t deloquesea = ft_strlen(cadenaa); 
	//se refiere al tamano en bytes de la funcion de una cadena de caracteres
	printf("La longitud de la cadena es: %zu\n", deloquesea);	
	return 0;
}
*/
