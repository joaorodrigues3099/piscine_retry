/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:02:40 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/18 13:49:59 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (word == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			if (ft_is_alphanumeric(str[i]) == 1)
				word = 1;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			if (ft_is_alphanumeric(str[i]) == 0)
				word = 0;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("str: \"%s\"\n", av[1]);
		printf("strcapitalize: \"%s\"\n", ft_strcapitalize(av[1]));
	}
	else
		printf("Invalid input\n");
	return (0);
}
*/