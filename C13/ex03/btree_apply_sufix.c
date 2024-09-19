/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_sufix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:37:12 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/16 14:40:19 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_sufix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_sufix(root->left, applyf);
	btree_apply_sufix(root->right, applyf);
	applyf(root->item);
}
