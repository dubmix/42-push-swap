/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 07:57:43 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/13 17:03:57 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_chunks(t_list **stack_a, t_list **stack_b, int size)
{
	t_list	**tmp;
	int		chunk_size;

	tmp = stack_a;
	chunk_size = get_chunk_size(size);
	while (ft_lstsize(*stack_a) > 0)
	{
		while (number_in_chunk(stack_a, chunk_size, size) == 1)
		{
			tmp = stack_a;
			if ((*tmp)->index >= (size - chunk_size))
				pb(stack_a, stack_b);
			else if ((*tmp)->index <= chunk_size)
			{
				pb(stack_a, stack_b);
				rb(stack_b);
			}
			else
				ra(stack_a);
		}
		chunk_size = chunk_size + get_chunk_size(size);
	}
	while (ft_lstlast(*stack_b)->index != size - 1)
		rb(stack_b);
}

void	rrb_or_rb(t_list **stack_b, int pos)
{
	int	size;
	int	i;

	size = ft_lstsize(*stack_b);
	if ((size - pos + 1) <= (pos - 1))
	{
		i = size - pos + 1;
		while (i > 0)
		{
			rrb(stack_b);
			i--;
		}
	}
	else
	{
		i = pos - 1;
		while (i > 0)
		{
			rb(stack_b);
			i--;
		}
	}
}

void	push_back(t_list **stack_a, t_list **stack_b)
{
	t_list	**tmp;
	t_list	**top;
	int		pos;

	rrb(stack_b);
	pa(stack_a, stack_b);
	while (ft_lstsize(*stack_b) > 0)
	{
		tmp = stack_b;
		top = stack_a;
		set_pos(tmp);
		pos = find_pos(tmp, (*top)->index, (ft_lstlast(*stack_a)->index));
		rrb_or_rb(tmp, pos);
		pa(stack_a, stack_b);
		top = stack_a;
		if ((*top)->index != (*top)->next->index - 1
			&& ft_lstsize(*stack_a) > 1)
			ra(stack_a);
		else if (ft_lstlast(*stack_a)->index == (*top)->index - 1
			&& ft_lstsize(*stack_a) > 1)
			rra(stack_a);
	}
}

void	complex_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	push_chunks(stack_a, stack_b, size);
	push_back(stack_a, stack_b);
}
