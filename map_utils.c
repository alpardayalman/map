#include "cub.h"

int	map_fill_name(char *file, char map_file[96])
{
	int	i;
	int	file_name_size;

	i = 0;
	file_name_size = ft_strlen(file);
	while (i < 96)
	{
		if (i < file_name_size)
			map_file[i] = file[i];
		else
			map_file[i] = '\0';
		i++;
	}
	return (0);
}

//get floor color.
int	map_floor_color(t_map *map, char *buffer)
{
	int	i;
	int	j;
	int	rgb_color[3];

	i = 0;
	j = 0;
	while (buffer[i])
	{
		rgb_color[j++] = ft_atoi(&buffer[i]);
		while (buffer[i] != ',' && buffer[i])
			i++;
		if (!buffer[i])
			break ;
		i++;
	}
	map->f_color = rgb(0, rgb_color[0], rgb_color[1], rgb_color[2]);
	return (0);
}

//get ceiling color.
int	map_ceiling_color(t_map *map, char *buffer)
{
	int	i;
	int	j;
	int	rgb_color[3];

	i = 0;
	j = 0;
	while (buffer[i])
	{
		rgb_color[j++] = ft_atoi(&buffer[i]);
		while (buffer[i] != ',' && buffer[i])
			i++;
		if (!buffer[i])
			break ;
		i++;
	}
	map->c_color = rgb(0, rgb_color[0], rgb_color[1], rgb_color[2]);
	return (0);
}

void	map_display_structure(t_map *map)
{
	ft_println(map->map_file);
}
