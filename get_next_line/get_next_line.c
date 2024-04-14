/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:30:25 by atorregr          #+#    #+#             */
/*   Updated: 2024/04/04 13:01:08 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*clear_buff(char *storage)
{
	char	*new_buf;
	char	*ptr;
	int		len;

	ptr = ft_strchr(storage, '\n');
	if (!ptr)
	{
		new_buf = NULL;
		return (ft_free(&storage));
	}
	else
		len = (ptr - storage) + 1;
	if (!storage[len])
		return (ft_free(&storage));
	new_buf = ft_substr(storage, len, ft_strlen(storage) - len);
	ft_free(&storage);
	if (!new_buf)
		return (NULL);
	return (new_buf);
}

char	*new_line(char *storage)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(storage, '\n');
	len = (ptr - storage) + 1;
	line = ft_substr(storage, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*readbuf(int fd, char *storage)
{
	int		x_read;
	char	*buffer;

	x_read = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (ft_free(&storage));
	buffer[0] = '\0';
	while (x_read > 0 && !ft_strchr(buffer, '\n'))
	{
		x_read = read (fd, buffer, BUFFER_SIZE);
		if (x_read > 0)
		{
			buffer[x_read] = '\0';
			storage = ft_strjoin(storage, buffer);
		}
	}
	free(buffer);
	if (x_read == -1)
		return (ft_free(&storage));
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage = {0};
	char		*line;

	if (fd < 0)
		return (NULL);
	if ((storage && !ft_strchr(storage, '\n')) || !storage)
		storage = readbuf (fd, storage);
	if (!storage)
		return (NULL);
	line = new_line(storage);
	if (!line)
		return (ft_free(&storage));
	storage = clear_buff(storage);
	return (line);
}
/*
int	main(void)
{
	int		fd;
	char	*line;
	int		count;

	count = 0;
	fd = open("testvacio.txt", O_RDWR);
	if (fd < 0)
		return (1);
	line = get_next_line(fd);
	while (line)
	{
		count++;
		printf("[%d] : %s", count, line);
		free(line);
		line = NULL;
	}
	printf("%s\n", line);
	close(fd);
	return (0);
}
*/
