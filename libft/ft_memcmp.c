/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:48:45 by atorregr          #+#    #+#             */
/*   Updated: 2024/01/24 18:58:57 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
/*
int main ()
{
	char	s1[20] = "Lalala";
	char	s2[20] = "elelele";

	printf ("%d\n", ft_memcmp(s1, s2, 20));

	char os1[20] = "Lalala";
	char os2[20] = "elelele";
	printf ("%d\n", memcmp(os1, os2, 20));
}
*/
