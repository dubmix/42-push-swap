/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:55:11 by pdelanno          #+#    #+#             */
/*   Updated: 2023/06/08 09:57:55 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_list **stack)
{
	t_list	*top;

	top = *stack;
	while (top && top->next)
	{
		if (top->value > top->next->value)
			return (0);
		else
			top = top->next;
	}
	return (1);
}

int	get_min(t_list **stack)
{
	t_list	*top;
	int		min;

	top = *stack;
	min = top->value;
	while (top->next)
	{
		if (top->next->value < min)
			min = top->next->value;
		top = top->next;
	}
	return (min);
}

int	get_min_index(t_list **stack, int min)
{
	t_list	*top;
	int		min_index;

	min_index = 1;
	top = *stack;
	while (top)
	{
		if (top->value == min)
			break ;
		min_index++;
		top = top->next;
	}
	return (min_index);
}

int	get_chunk_size(int size)
{
	int	chunk_size;

	chunk_size = 0;
	if (size <= 50)
		return (2);
	if (size <= 300)
		chunk_size = size * 0.12;
	else if (size > 300)
		chunk_size = size * 0.06;
	return (chunk_size);
}

int	number_in_chunk(t_list **stack, int chunk_size, int size)
{
	t_list	*top;

	top = *stack;
	while (top)
	{
		if (top->index <= chunk_size || top->index >= size - chunk_size)
			return (1);
		top = top->next;
	}
	return (0);
}
