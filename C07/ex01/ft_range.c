/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:12:44 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/27 20:08:12 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*out;

	if (min >= max)
		return (NULL);
	out = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
		out[i++] = min++;
	return (out);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	min;
	int	max;
	int	i;
	int	range;
	int	*buf;

	if (ac == 3)
	{
		min = atoi(av[1]);
		max = atoi(av[2]);
		if (min >= max)
		{
			printf("Min as to be smaller than Max.\n");
			return (1);
		}
		printf("min: %d\n", min);
		printf("max: %d\n", max);
		i = 0;
		range = max - min;
		buf = (int *)malloc(sizeof(int) * range);
		buf = ft_range(min, max);
		printf("range: {");
		while (i < range)
		{
			printf("%d", buf[i]);
			if (i != range - 1)
				printf(", ");
			i++;
		}
		printf("}\n");
	}
	else
	{
		printf("Invalid arguments\n");
		printf("Format: ./[PROGRAM_NAME] [MIN] [MAX]\n");
		return (1);
	}
	return (0);
}
*/