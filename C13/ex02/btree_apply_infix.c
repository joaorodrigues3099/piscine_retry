/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:32:45 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/16 14:35:13 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	b_tree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	b_tree_apply_infix(root->left, applyf);
	applyf(root->item);
	b_tree_apply_infix(root->right, applyf);
}
