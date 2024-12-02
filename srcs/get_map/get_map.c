/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:14:55 by ziratya           #+#    #+#             */
/*   Updated: 2024/12/02 16:54:47 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/include.h"

int open_map_file(char *filename)
{
    int fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        perror("Error\nFailed to open map file");
        exit(EXIT_FAILURE);
    }
    return (fd);
}

char	*read_line(int fd)
{
	char	*line;
	int		i;
	int		bytes_read;

	line = malloc(1024);
	i = 0;
	while ((bytes_read = read(fd, &line[i], 1)) > 0 && line[i] != '\n')
		i++;
	if (bytes_read <= 0 && i == 0)
	{
		free(line);
		return (NULL);
	}
	line[i] = '\0';
	return (line);
}
