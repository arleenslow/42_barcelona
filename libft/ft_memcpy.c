/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:56:16 by atorregr          #+#    #+#             */
/*   Updated: 2024/01/30 22:33:04 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, void const *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (dest_ptr);
}
/*
int main ()
{
	char src[] = "Torregrosa\n";
	char dest[10] = "12345678\n";
	printf("Antes de la funcion SRC: %s\n", src);
	printf("Antes de la funcion DEST: %s\n", dest);
	printf("Funcion: %s\n", ft_memcpy(dest, src, 10));
	printf("Funcion Original: %s", memcpy(dest, src, 10));
}
*/
