/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:38:49 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/05 18:35:46 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	s_zero(void *s, size_t size)
{
	unsigned char	*p;

	p = s;
	while (size--)
		*p++ = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	if (count && size && count > (UINT_MAX / size))
		return (NULL);
	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	s_zero(memory, count * size);
	return (memory);
}
/*
int main()
{
	int *numbers = ft_calloc(5, sizeof(int));

	printf("%p\n", (void *)ft_calloc);
	free(numbers);
	return(0);
}
*/
