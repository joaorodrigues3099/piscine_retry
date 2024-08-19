/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:49:41 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/19 15:11:16 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && (*s1 == *s2) && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("s1: \"%s\"\n", av[1]);
		printf("s2: \"%s\"\n", av[2]);
		printf("n: %s\n", av[3]);
		printf("strncmp: %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	}
	else
	{
		printf("Invalid arguments\n");
		printf("Format: ./[PROGRAM_NAME] [S1] [S2] [N]\n");
		return (1);
	}
	return (0);
}
*/