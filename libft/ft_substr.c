/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:09:10 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/05 22:44:37 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (i < start)
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, (len + 1));
	return (substr);
}
/*
int main()
{
	const char s[10] = "1234567";
	char *result = ft_substr(s, 2, 4);
	printf("%s\n", result);
	return (0);
}
*/
