/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:26:18 by atorregr          #+#    #+#             */
/*   Updated: 2024/01/30 19:28:05 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	while (*(src + i))
		i++;
	if (!n)
		return (i);
	while (--n && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (i);
}
/*
int main (void)
{
	char src[] = "Hello";
	char dest[6];
	ft_strlcpy(dest, src, sizeof(dest));
	strlcpy (dest, src, sizeof(dest));
	printf("mi funcion %s\n", dest);
	printf("funcion original:%s\n", dest);
	return 0;
}
*/
