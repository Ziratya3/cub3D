/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:56:29 by gvalogne          #+#    #+#             */
/*   Updated: 2025/02/04 15:11:12 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_axes
{
	int	x;
	int	y;
}	t_axes;

typedef struct s_img
{
	void	*img;
	char	*path;
	char	*addr;
	int		bpp;
	int		line_length;
	int		endian;
	int		width;
	int		heigth;
}			t_img;

typedef struct s_texture
{
	t_img	no_texture;
	t_img	so_texture;
	t_img	we_texture;
	t_img	ea_texture;
	int		floor;
	int		ceiling;
	char	*floor_color;
	char	*ceiling_color;
}			t_texture;

typedef struct s_map
{
	char	**map;
	//char	*map_path;
	t_axes	map_dim;
}			t_map;

#endif