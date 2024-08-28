/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:05:58 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/21 13:32:03 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("dest: \"%s\"\n", av[1]);
		printf("src: \"%s\"\n", av[2]);
		printf("strcat: \"%s\"\n", ft_strcat(av[1], av[2]));
	}
	else
	{
		printf("Invalid arguments\n");
		printf("Format: ./[PROGRAM_NAME] [DEST] [SRC]\n");
	}
}
*/