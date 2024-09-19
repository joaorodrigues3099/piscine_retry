/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:33:03 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/18 13:05:36 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_char(int size_x, int size_y, int x, int y)
{
	if ((x == 0 && y == 0) || (x == 0 && y == size_y - 1) || (x == size_x - 1
			&& y == 0) || (x == size_x - 1 && y == size_y - 1))
		return (0);
	else if (y == 0 || y == size_y - 1)
		return (1);
	else if (x == 0 || x == size_x - 1)
		return (2);
	else
		return (3);
}

void	rush(int size_x, int size_y)
{
	char	*chars;
	int		x;
	int		y;

	if (size_x <= 0 || size_y <= 0)
		return ;
	chars = "o-| ";
	y = 0;
	while (y < size_y)
	{
		x = 0;
		while (x < size_x)
		{
			ft_putchar(*(chars + ft_char(size_x, size_y, x, y)));
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
