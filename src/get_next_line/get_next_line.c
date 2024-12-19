/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-26 15:50:29 by jbastard          #+#    #+#             */
/*   Updated: 2024-11-26 15:50:29 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/get_next_line.h"

static char	*set_line(char *lbuff)
{
	unsigned int	i;
	char			*line;

	i = 0;
	while (lbuff[i] != '\n' && lbuff[i] != '\0')
		i++;
	if (lbuff[i] == 0)
		return (NULL);
	line = gnl_substr(lbuff, i + 1, gnl_strlen(lbuff) - i);
	if (*line == 0)
	{
		free(line);
		line = NULL;
	}
	lbuff[i + 1] = 0;
	return (line);
}

static char	*read_line(int fd, char *prev, char *buffer)
{
	int		isread;
	char	*temp;

	isread = 1;
	while (isread > 0)
	{
		isread = read(fd, buffer, BUFFER_SIZE);
		if (isread < 0)
			return (NULL);
		else if (isread == 0)
			break ;
		buffer[isread] = 0;
		if (!prev)
			prev = gnl_strdup("");
		temp = prev;
		prev = gnl_strjoin(temp, buffer);
		free(temp);
		if (gnl_strchr(buffer, '\n'))
			break ;
	}
	return (prev);
}

char	*get_next_line(int fd)
{
	static char	*prev;
	char		*line;
	char		*buffer;

	buffer = malloc(BUFFER_SIZE + 1 * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(buffer), free(prev), NULL);
	if (!buffer)
		return (NULL);
	line = read_line(fd, prev, buffer);
	free (buffer);
	buffer = NULL;
	if (!line && prev)
	{
		free (prev);
		prev = NULL;
		return (NULL);
	}
	if (!line)
		return (NULL);
	prev = set_line(line);
	return (line);
}
