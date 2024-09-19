/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:13:25 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/18 12:18:22 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	ft_level_count(t_btree *root)
{
	int	count_left;
	int	count_right;

	if (!root)
		return (0);
	count_left = ft_level_count(root->left);
	count_right = ft_level_count(root->right);
	if (count_left > count_right)
		return (count_left + 1);
	else
		return (count_right + 1);
}

void	ft_apply_current_level(t_btree *root, int *level, void (*applyf)(void *,
			int, int), int first)
{
	if (!root)
		return ;
	if (level[1] == level[0])
		applyf(root->item, level[0], first);
	else
	{
		level[1]++;
		ft_apply_current_level(root->left, level, applyf, first);
		ft_apply_current_level(root->right, level, applyf, 0);
		level[1]--;
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first))
{
	int	tree_size;
	int	i;
	int	level[2];

	tree_size = ft_level_count(root);
	i = 0;
	while (i < tree_size)
	{
		level[0] = i;
		level[1] = 0;
		ft_apply_current_level(root, level, applyf, 1);
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

void	ft_print_level(void *item, int current_level, int is_first)
{
	if (current_level && is_first)
		printf("\n");
	if (is_first)
		printf("Level %d: ", current_level);
	printf("%s ", (char *)item);
}

int	main(int ac, char **av)
{
	t_btree	node1;
	t_btree	node2;
	t_btree	node3;
	t_btree	node4;
	t_btree	node5;
	t_btree	node6;
	t_btree	node7;

	if (ac != 8)
		return (1);
	node1 = {NULL, NULL, av[1]};
	node2 = {NULL, NULL, av[2]};
	node3 = {NULL, NULL, av[3]};
	node4 = {NULL, NULL, av[4]};
	node5 = {NULL, NULL, av[5]};
	node6 = {NULL, NULL, av[6]};
	node7 = {NULL, NULL, av[7]};
	node1.left = &node2;
	node1.right = &node3;
	node2.left = &node4;
	node2.right = &node5;
	node3.left = &node6;
	node3.right = &node7;
	btree_apply_by_level(&node1, &ft_print_level);
	printf("\n");
}
*/