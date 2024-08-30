/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:17:46 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/21 13:31:49 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *src, char *to_find)
{
	int	i;

	i = 0;
	if (!to_find[i])
		return (src);
	while (*src)
	{
		i = 0;
		while (src[i] && to_find[i] && src[i] == to_find[i])
			i++;
		if (!to_find[i])
			return (src);
		src++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("src: \"%s\"\n", av[1]);
		printf("to_find: \"%s\"\n", av[2]);
		printf("strstr: \"%s\"\n", ft_strstr(av[1], av[2]));
	}
	else
	{
		printf("Invalid args\n");
		printf("Format: ./[PROGRAM_NAME] [STR] [TO_FIND]\n");
		return (1);
	}
	return (0);
}
*/