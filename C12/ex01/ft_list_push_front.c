/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:02:48 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/11 14:32:37 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_element;

	new_element = ft_create_elem(data);
	if (!new_element)
		return ;
	new_element->next = *begin_list;
	*begin_list = new_element;
}
/*
#include <stdio.h>

void	ft_print_node(t_list *header)
{
	t_list	*current;

	current = header;
	while (current)
	{
		printf("%s -> ", (char *)current->data);
		current = current->next;
	}
	printf("NULL\n");
}

int	main(int ac, char **av)
{
	t_list	*header;
	int		i;

	header = NULL;
	i = 1;
	while (i < ac)
	{
		ft_list_push_front(&header, av[i]);
		i++;
	}
	ft_print_node(header);
	return (0);
}
*/