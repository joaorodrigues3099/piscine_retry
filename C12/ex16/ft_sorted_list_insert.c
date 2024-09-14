/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:17:13 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/14 14:13:02 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*previous;
	t_list	*current;
	t_list	*new_elem;

	if (!begin_list)
		return ;
	new_elem = ft_create_elem(data);
	if (!new_elem)
		return ;
	if (!*begin_list || cmp((*begin_list)->data, new_elem->data) >= 0)
	{
		new_elem->next = *begin_list;
		*begin_list = new_elem;
		return ;
	}
	previous = 0;
	current = *begin_list;
	while (current && cmp(current->data, new_elem->data) < 0)
	{
		previous = current;
		current = current->next;
	}
	previous->next = new_elem;
	new_elem->next = current;
}
/*
#include <stdio.h>
#include <stdlib.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
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

	head = ft_list_push_strs(ac - 2, av + 2);
	printf("list_bfr: ");
	ft_print_list(head);
	printf("new_element->data: %s\n", av[1]);
	ft_sorted_list_insert(&head, av[1], &ft_strcmp);
	printf("list_aft: ");
	ft_print_list(head);
	return (0);
}
*/