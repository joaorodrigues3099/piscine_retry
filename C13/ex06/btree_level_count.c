/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:22:59 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/17 13:14:51 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	left_count;
	int	right_count;

	if (!root)
		return (0);
	left_count = btree_level_count(root->left);
	right_count = btree_level_count(root->right);
	if (left_count > right_count)
		return (left_count + 1);
	else
		return (right_count + 1);
}
