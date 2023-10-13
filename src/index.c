/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:41:19 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/13 17:03:53 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*get_next_min_list(t_list **stack)
{
	t_list	*top;
	t_list	*min;
	int		is_min;

	min = NULL;
	is_min = 0;
	top = *stack;
	if (top)
	{
		while (top)
		{
			if ((top->index == -1 && (is_min == 0 || top->value < min->value)))
			{
				min = top;
				is_min = 1;
			}
			top = top->next;
		}
	}
	return (min);
}

void	index_stack(t_list **stack)
{
	t_list	*top;
	int		i;

	i = 0;
	top = get_next_min_list(stack);
	while (top)
	{
		top->index = i++;
		top = get_next_min_list(stack);
	}
	top = *stack;
}

void	set_pos(t_list **stack)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = *stack;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
}

int	find_pos(t_list **stack, int top, int bottom)
{
	t_list	*tmp;
	int		pos;

	top = top - 1;
	tmp = *stack;
	pos = 1;
	while (tmp)
	{
		if (tmp->index == top || tmp->index > bottom)
		{
			pos = tmp->pos;
			break ;
		}
		tmp = tmp->next;
	}
	return (pos);
}
