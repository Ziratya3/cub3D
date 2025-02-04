/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:34:47 by gvalogne          #+#    #+#             */
/*   Updated: 2025/02/03 15:15:43 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/include.h"

int	main(int ac, char **av)
{
	int	fd;

	if (ac != 2)
		return (printf("Error args: 1 arguments requiered!\n"), 0);
	fd = open(av[1], O_RDONLY);
	if (!fd)
		return (printf("Error: %s\n", strerror(errno)), 0); // je comprends pas
	parsing_file(fd);
	return (0);
}