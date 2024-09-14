/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:14:59 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/14 15:27:19 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, t_list *new_elem,
		int (*cmp)())
{
	t_list	*previous;
	t_list	*current;

	if (!*begin_list || cmp((*begin_list)->data, new_elem->data) > 0)
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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list	*current;
	t_list	*next;

	if (!begin_list1)
		return ;
	current = begin_list2;
	while (current)
	{
		next = current->next;
		ft_sorted_list_insert(begin_list1, current, cmp);
		current = next;
	}
}
/*int	ft_strcmp(char *s1, char *s2)
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
	t_list	*head1;
	t_list	*head2;

	head1 = ft_list_push_strs((ac - 1) / 2 + (ac - 1) % 2, av + 1);
	printf("list1_bfr: ");
	ft_print_list(head1);
	head2 = ft_list_push_strs((ac - 1) / 2, av + 1 + (ac - 1) / 2 + (ac - 1)
			% 2);
	printf("list2: ");
	ft_print_list(head2);
	ft_sorted_list_merge(&head1, head2, &ft_strcmp);
	printf("list1_aft: ");
	ft_print_list(head1);
	return (0);
}
*/