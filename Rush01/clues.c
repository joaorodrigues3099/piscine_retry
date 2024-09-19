/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:15:16 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/19 16:19:50 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	**ft_alloc_clues(int size)
{
	int	**clues;
	int	i;

	clues = (int **)malloc(sizeof(int *) * 4);
	if (!clues)
		return (NULL);
	i = 0;
	while (i < size)
	{
		clues[i] = (int *)malloc(sizeof(int) * size);
		if (!clues[i])
		{
			while (i-- > 0)
				free(clues[i]);
			return (NULL);
		}
		i++;
	}
	return (clues);
}

int	ft_set_clues(int **clues, char *input, int size)
{
	int	i;
	int	n_clue;

	i = 0;
	n_clue = 0;
	while (input[i])
	{
		if (input[i] >= '0' && input[i] <= '9')
		{
			clues[(i - n_clue) / size][(i - n_clue) % size] = input[i] - '0';
			n_clue++;
			i++;
			if (!input[i] || input[i] == ' ')
			{
				if (input[i])
					i++;
			}
			else
				return (0);
		}
		else
			return (0);
	}
	return (1);
}

void	ft_free_clues(int **clues, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(clues[i]);
	free(clues);
}

int	**ft_clues(char *input, int size)
{
	int	**clues;

	clues = ft_alloc_clues(size);
	if (!clues)
		ft_exit_with_error();
	if (!ft_set_clues(clues, input, size))
	{
		ft_free_clues(clues, size);
		ft_exit_with_error();
	}
	return (clues);
}
