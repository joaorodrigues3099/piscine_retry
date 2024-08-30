/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:35:08 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/21 13:32:18 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("s1: \"%s\"\n", av[1]);
		printf("s2: \"%s\"\n", av[2]);
		printf("strcmp: %d\n", ft_strcmp(av[1], av[2]));
	}
	else
	{
		printf("Invalid arguments\n");
		printf("Format: ./[PROGRAM_NAME] [S1] [S2]\n");
	}
}
*/