/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:12:26 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/21 13:30:28 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	int				rem;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (size + s_len);
	dest += d_len;
	rem = size - d_len - 1;
	while (*src && rem > 0)
	{
		*dest++ = *src++;
		rem--;
	}
	*dest = '\0';
	return (d_len + s_len);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	char	*dest;

	if (ac == 4)
	{
		dest = (char *)malloc(atoi(av[3] + 1));
		dest = av[1];
		printf("dest_bfr: \"%s\"\n", dest);
		printf("src: \"%s\"\n", av[2]);
		printf("n: %d\n", atoi(av[3]));
		printf("strlcat: %u\n", ft_strlcat(dest, av[2], atoi(av[3])));
		printf("dest_aft: \"%s\"\n", dest);
	}
	else
	{
		printf("Invalid args.\n");
		printf("Format: ./[PROGRAM_NAME] [DEST] [SRC] [N]\n");
		return (1);
	}
	return (0);
}
*/