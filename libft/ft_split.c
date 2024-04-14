/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:47:37 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/06 12:31:38 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**free_all(char **strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (NULL);
}

char	**allocate_memory(char const *s, char c)
{
	size_t	word_count;

	word_count = count_words(s, c);
	return (ft_calloc(word_count + 1, sizeof(char *)));
}

char	**copy_word(char **strings, const char *s, char c)
{
	int		i;
	size_t	word_len;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			strings[i] = ft_substr(s, 0, word_len);
			if (!strings[i])
				return (free_all(strings));
			s += word_len;
			i++;
		}
	}
	return (strings);
}

char	**ft_split(const char *s, char c)
{
	char	**strings;

	strings = allocate_memory(s, c);
	if (!strings || !s)
		return (NULL);
	strings = copy_word (strings, s, c);
	return (strings);
}
/*
int main()
{
    const char *str = "to be, or not to be";
    char **result = ft_split(str, ' ');
	
	size_t i = 0;
    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        i++;
    }
 
    while (result[i] != NULL)
    {
        free(result[i]);
        i++;
    }
    free(result);

    return (0);
}
*/
