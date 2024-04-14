/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:57:35 by atorregr          #+#    #+#             */
/*   Updated: 2024/01/30 22:34:46 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
/*
int main() 
{
    char buffer[] = "un mapuchi";
	char search_char = 'm';

    size_t buffer_size = sizeof(buffer);
    void *result = ft_memchr(buffer, search_char, buffer_size);
    if (result != NULL) 
	{
	printf("'%c' fue encontrado %ld\n", search_char, (char *)result - buffer);
    }
   		else 
		{
		printf("carácter '%c' no fue encontrado\n", search_char);
   		 }	
    return (0);
}
*/
