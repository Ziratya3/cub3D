/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:34:39 by gvalogne          #+#    #+#             */
/*   Updated: 2025/02/04 14:59:30 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

#include <stdio.h>   // printf, perror
#include <stdlib.h>  // malloc, free, exit
#include <unistd.h>  // open, close, read, write
#include <fcntl.h>   // open (flags)
#include <string.h>  // strerror
#include <math.h>    // fonctions mathématiques (-lm)
#include <errno.h>
#include "structs.h"

// parsing

int	parsing_file(int fd);

// str_utils.c

int	ft_strlen(char *str);
char	**ft_split_lines(char *str);

// alloc_utils.c

char	*ft_realloc(char *str, int size_add);

#endif