/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:54:42 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/03 12:11:10 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dtemp;
	unsigned char	*stemp;

	dtemp = (unsigned char *) dst;
	stemp = (unsigned char *) src;
	if (!dst && !src)
		return (0);
	if (dst <= src)
	{
		while (len--)
			*dtemp++ = *stemp++;
	}
	else
	{
		dtemp += len - 1;
		stemp += len - 1;
		while (len--)
			*dtemp-- = *stemp--;
	}
	return (dst);
}
/*
int main ()
{
	char src[] = "Torregrosa";
	char dest[12] = "12345678";
	printf("Antes de la funcion SRC: %s\n", src);
	printf("Antes de la funcion DEST: %s\n", dest);
	printf("Funcion DEST: %s\n", ft_memmove(dest, src, 12 ));
	printf("Funcion Original: %s", memmove(dest, src, 12));
}
*/	
