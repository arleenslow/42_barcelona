/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:40:24 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/05 22:42:32 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		len;
	int		i;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
	{
		len--;
	}
	result = ft_substr(&s1[i], 0, (len - i) + 1);
	return (result);
}
/*
int main()
{
	char str[] = "Hi como fue";
	char set[] = "He";
	printf("%s\n",ft_strtrim(str, set));
}
*/
