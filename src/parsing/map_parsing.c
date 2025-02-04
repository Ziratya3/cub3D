/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:32:11 by gvalogne          #+#    #+#             */
/*   Updated: 2025/02/04 15:03:19 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/include.h"

char	**file_to_array(int fd)
{
	int		bytes_readed;
	char	*buffer;
	char 	*file;

	buffer = (char *)malloc(sizeof(char));
	file = (char *)malloc(sizeof(char));
	buffer[0] = 0;
	bytes_readed = read(fd, buffer, 1);
	while (bytes_readed > 0)
	{
		file = (char *)ft_realloc(file, 1);
		file[ft_strlen(file)] = buffer[0];
		buffer[0] = 0;
		bytes_readed = read(fd, buffer, 1);
	}
	return (ft_split_lines(file));
}

int	parsing_file(int fd)
{
	t_map	map;
	
	map.map = file_to_array(fd);
	return (0);
}