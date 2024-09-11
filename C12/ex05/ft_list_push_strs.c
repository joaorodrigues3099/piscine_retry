/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:13:48 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/11 14:32:19 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*head;
	t_list	*new_elem;
	int		i;

	head = 0;
	i = 0;
	while (i < size)
	{
		new_elem = ft_create_elem(strs[i]);
		if (!new_elem)
			return (0);
		new_elem->next = head;
		head = new_elem;
		i++;
	}
	return (head);
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
	t_list *head;

	head = ft_list_push_strs(ac - 1, av + 1);
	ft_print_node(head);
	return (0);
}
*/