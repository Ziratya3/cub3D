/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:34:35 by gvalogne          #+#    #+#             */
/*   Updated: 2025/02/04 14:42:22 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/include.h"

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

int	lines_count(char *str)
{
	int	i;
	int	lines;

	i = 0;
	lines = 0;
	while (str[i] == '\n')
		i++;
	while (str[i])
	{
		if (str[i] == '\n')
			lines++;
		while (str[i] == '\n')
			i++;
		i++;
	}
	lines++;
	return (lines);
}

char	**ft_split_lines(char *str)
{
	char	**array;
	int		lines;
	int		i;
	int		line;
	int		line_size;

	line = 0;
	lines = lines_count(str);
	array = (char **)malloc(sizeof(char *) * (lines + 1));
	while (line <= lines)
	{
		i = 0;
		line_size = 0;
		while (str[i] != '\n' && str[i++])
			line_size++;
		i = 0;
		array[line] = (char *)malloc(sizeof(char) * (line_size + 1));
		while (str[0] != '\n' && str[0])
		{
			array[line][i++] = str[0];
			str++;
		}
		if (str[0])
			array[line][i++] = '\n';
		while (str[0] == '\n')
			str++;
		array[line][i] = '\0';
		line++;
	}
	array[lines] = NULL;

	// Just display for test, delete all later
	i=0;
	while (array[i++])
		printf("%s", array[i]);
	// until here
	return (array);
}
