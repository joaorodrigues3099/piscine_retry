/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:28:15 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/19 16:19:47 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	**ft_alloc_grid(int size)
{
	int	**grid;
	int	i;

	grid = (int **)malloc(sizeof(int *) * size);
	if (!grid)
		return (NULL);
	i = 0;
	while (i < size)
	{
		grid[i] = (int *)malloc(sizeof(int) * size);
		if (!grid[i])
		{
			while (i-- > 0)
				free(grid[i]);
			return (NULL);
		}
		i++;
	}
	return (grid);
}

void	ft_set_grid(int **grid, int size)
{
	int	i;
	int	j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			grid[j][i] = 0;
			i++;
		}
		j++;
	}
}

int	**ft_grid(int size)
{
	int	**grid;

	grid = ft_alloc_grid(size);
	if (!grid)
		ft_exit_with_error();
	ft_set_grid(grid, size);
	return (grid);
}
