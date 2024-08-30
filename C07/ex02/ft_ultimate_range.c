/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:09:15 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/29 00:06:12 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buf;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	buf = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
		buf[i++] = min++;
	*range = buf;
	return (i);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	min;
	int	max;
	int	*buf;
	int	i;
	int	range;

	if (ac != 3)
	{
		printf("Invalid arguments\n");
		printf("Format: ./[PROGRAM_NAME] [MIN] [MAX]\n");
		return (1);
	}
	min = atoi(av[1]);
	max = atoi(av[2]);
	if (min >= max)
	{
		printf("Min need to be smaller than Max.\n");
		return (1);
	}
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	printf("ft_ultimate_range: %d\n", ft_ultimate_range(&buf, min, max));
	i = 0;
	range = max - min;
	printf("range: {");
	while (i < range)
	{
		printf("%d", buf[i]);
		if (i != range - 1)
			printf(", ");
		i++;
	}
	printf("}\n");
	return (0);
}
*/