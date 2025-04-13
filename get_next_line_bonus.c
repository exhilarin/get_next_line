/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas-guney <ilyas-guney@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:28:38 by iguney            #+#    #+#             */
/*   Updated: 2025/04/13 09:11:57 by ilyas-guney      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_update(char *putline)
{
	char	*buffer;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (putline[i] != '\0' && putline[i] != '\n')
		i++;
	if (!putline[i])
	{
		free(putline);
		return (NULL);
	}
	buffer = malloc(sizeof(char) * (ft_strlen_gnl(putline) - i));
	if (!buffer)
		return (NULL);
	i++;
	while (putline[i + j] != '\0')
	{
		buffer[j] = putline[i + j];
		j++;
	}
	buffer[j] = '\0';
	free (putline);
	return (buffer);
}

char	*get_mainline(char *putline)
{
	char	*buffer;
	int		i;

	i = 0;
	if (!putline[i])
		return (NULL);
	while (putline[i] != '\0' && putline[i] != '\n')
		i++;
	buffer = malloc(sizeof(char) * i + 2);
	if (!buffer)
		return (NULL);
	i = 0;
	while (putline[i] != '\0' && putline[i] != '\n')
	{
		buffer[i] = putline[i];
		i++;
	}
	if (putline[i] == '\n')
	{
		buffer[i] = putline[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

char	*get_read(int fd, char *putline)
{
	char	*buffer;
	int		rd_bytes;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	rd_bytes = 1;
	while (!ft_strchr(putline, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buffer, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buffer);
			free(putline);
			return (NULL);
		}
		buffer[rd_bytes] = '\0';
		putline = ft_strjoin(putline, buffer);
	}
	free (buffer);
	return (putline);
}

char	*get_next_line(int fd)
{
	static char	*putline[MAX_FD];
	char		*mainline;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	putline[fd] = get_read(fd, putline[fd]);
	if (!putline[fd])
		return (NULL);
	mainline = get_mainline(putline[fd]);
	putline[fd] = get_update(putline[fd]);
	return (mainline);
}
