/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:27:50 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/21 12:55:42 by joao-alm         ###   ########.fr       */
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

int	ft_base_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_skip_atoi(char *src, int *nb_len, int *sign, char *base)
{
	int	i;

	while (*src == ' ' || *src == '\r' || *src == '\t')
		src++;
	while (*src == '-' || *src == '+')
	{
		if (*src == '-')
			*sign *= -1;
		src++;
	}
	i = 0;
	while (ft_base_index(base, src[i]) != -1)
		i++;
	*nb_len = i;
	return (src);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb_len;
	int	nb;
	int	sign;
	int	b_len;

	nb_len = 0;
	sign = 1;
	str = ft_skip_atoi(str, &nb_len, &sign, base);
	if (nb_len == 0)
		return (0);
	nb = 0;
	b_len = ft_strlen(base);
	while (nb_len > 0)
	{
		nb *= b_len;
		nb += ft_base_index(base, *str);
		str++;
		nb_len--;
	}
	return (nb * sign);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("str: \"%s\"\n", av[1]);
		printf("base: \"%s\"\n", av[2]);
		printf("ft_atoi_base: %d\n", ft_atoi_base(av[1], av[2]));
	}
	else
	{
		printf("Invalid args.\n");
		printf("Format: ./[PROGRAM] [STR] [BASE]\n");
		return (1);
	}
	return (0);
}
*/