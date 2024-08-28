/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:56:41 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/29 00:04:37 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_base_index(char c, char *base);
int		ft_valid_base(char *base);
int		ft_valid_nbr(char *nbr, char *base_from);

long	ft_long_atoi_base(char *str, char *base)
{
	long	nb;
	int		sign;
	int		base_len;
	int		index;

	nb = 0;
	sign = 1;
	while (*str == ' ' || *str == '\r' || *str == '\t')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	base_len = ft_strlen(base);
	index = 0;
	while (index != -1)
	{
		index = ft_base_index(*str++, base);
		if (index == -1)
			break ;
		nb = nb * base_len + index;
	}
	return (nb * sign);
}

int	ft_result_len(int nb, int base_len)
{
	int	i;

	i = 1;
	if (nb == -2147483648)
	{
		nb /= base_len;
		i++;
	}
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > base_len - 1)
	{
		nb /= base_len;
		i++;
	}
	return (i);
}

void	ft_putnbr_base(char *dest, int nb, int pos, char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nb == -2147483648)
	{
		dest[0] = '-';
		ft_putnbr_base(dest, -(nb / base_len), pos - 1, base);
		dest[pos - 1] = base[-(nb % base_len)];
		return ;
	}
	if (nb < 0)
	{
		dest[0] = '-';
		ft_putnbr_base(dest, -nb, pos, base);
		return ;
	}
	if (nb > base_len - 1)
		ft_putnbr_base(dest, nb / base_len, pos - 1, base);
	dest[pos - 1] = base[nb % base_len];
	dest[pos] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	long_nb;
	int		nb;
	int		result_len;
	char	*result;

	if (!ft_valid_base(base_from) || !ft_valid_base(base_to))
		return (NULL);
	if (!ft_valid_nbr(nbr, base_from))
		return (NULL);
	long_nb = ft_long_atoi_base(nbr, base_from);
	if (long_nb < -2147483648 || long_nb > 2147483647)
		return (NULL);
	nb = (int)long_nb;
	result_len = ft_result_len(nb, ft_strlen(base_to));
	result = (char *)malloc(result_len + 1);
	if (!result)
	{
		free(result);
		result = NULL;
	}
	ft_putnbr_base(result, nb, result_len, base_to);
	return (result);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*result;

	if (ac != 4)
	{
		printf("Invalid args.\n");
		printf("Format: ./[PROGRAM] [NBR] [BASE_FROM] [BASE_TO]\n");
		return (1);
	}
	printf("nbr: %s\n", av[1]);
	printf("base_from: \"%s\"\n", av[2]);
	printf("base_to: \"%s\"\n", av[3]);
	result = ft_convert_base(av[1], av[2], av[3]);
	printf("ft_convert_base: \"%s\"\n", result);
	return (0);
}
*/