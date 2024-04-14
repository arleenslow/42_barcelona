/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:21:16 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/03 13:52:42 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	src;
	int		i;

	i = 0;
	src = (char) c;
	while (s[i] != '\0')
		i++;
	if (c == '\0')
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == src)
			return ((char *) &s[i]);
		i--;
	}
	return (0);
}
/*
int main(void)
{
    printf("my function: %s\n", ft_strrchr("hello world", 'o'));
	printf("std function: %s", strrchr("hello world", 'o'));
    return(0);
}
*/
