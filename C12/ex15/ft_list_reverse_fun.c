/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:47:38 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/14 13:16:06 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*previous;
	t_list	*current;
	t_list	*next;

	if (!begin_list || !begin_list->next)
		return ;
	previous = 0;
	current = begin_list;
	while (current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	begin_list = previous;
}
/*
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (!new_elem)
		return (NULL);
	new_elem->data = data;
	new_elem->next = NULL;
	return (new_elem);
}

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

void	ft_print_list(t_list *head)
{
	t_list	*current;

	current = head;
	while (current)
	{
		printf("%s -> ", (char *)current->data);
		current = current->next;
	}
	printf("NULL\n");
}

int	main(int ac, char **av)
{
	t_list	*head;

	head = ft_list_push_strs(ac - 1, av + 1);
	printf("list: ");
	ft_print_list(head);
	ft_list_reverse_fun(head);
	printf("list_reverse: ");
	ft_print_list(head);
	return (0);
}
*/