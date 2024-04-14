/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:02:23 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/05 18:55:00 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1);
	str = (char *)malloc(len + 1);
	if (s1 == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}
/*
int	main(void)
{
	const char	*s1;

	s1 = "sunny";
	printf("%s\n", ft_strdup(s1));
	printf("%s\n", strdup(s1));
	return (0);
}
*/
