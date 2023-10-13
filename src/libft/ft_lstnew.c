/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:00:46 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/13 17:21:31 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int number)

{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(*newnode));
	if (newnode == 0)
		return (NULL);
	newnode->value = number;
	newnode->index = -1;
	newnode->next = NULL;
	return (newnode);
}
