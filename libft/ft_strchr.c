/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:25:44 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/05 16:05:18 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (1)
	{
		if (str[i] == (char)c || str[i] == '\0')
		{
			if (str[i] == (char)c)
				return (&str[i]);
			else
				return (NULL);
		}
		i++;
	}
}

/*int main (void)
{
	char	str[15] = "hello world";
	int		x =  'o';

	char	*result = NULL;

	result =  ft_strchr(str, x);
	printf("%s\n", result);
	printf("%s\n", strchr(str, x));

	return (0);
}
*/
