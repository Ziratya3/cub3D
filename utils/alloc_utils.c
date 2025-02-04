/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:32:03 by gvalogne          #+#    #+#             */
/*   Updated: 2025/02/03 15:48:30 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/include.h"

char	*ft_realloc(char *str, int size_add)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(str) + size_add + 1));
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	new[i + 1] = '\0';
	free(str);
	return (new);
}