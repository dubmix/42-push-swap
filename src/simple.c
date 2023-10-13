/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:08:02 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/13 17:04:21 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3_continued(t_list **stack, t_list *top, int min)
{
	if (top->next->value == min)
	{
		if (top->value > top->next->next->value)
			ra(stack);
		else
			sa(stack);
	}
	else
	{
		if (top->value > top->next->value)
		{
			sa(stack);
			rra(stack);
		}
		else
			rra(stack);
	}
}

void	sort3(t_list **stack)
{
	t_list	*top;
	int		min;

	top = *stack;
	min = get_min(stack);
	if (top->value == min)
	{
		ra(stack);
		sa(stack);
		rra(stack);
		return ;
	}
	sort3_continued(stack, top, min);
}

void	sort4(t_list **stack_a, t_list **stack_b)
{
	int	min_index;

	min_index = get_min_index(stack_a, get_min(stack_a));
	if (min_index == 2)
		ra(stack_a);
	if (min_index == 3)
	{
		ra(stack_a);
		ra(stack_a);
	}
	if (min_index == 4)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort3(stack_a);
	pa(stack_a, stack_b);
}

void	sort5(t_list **stack_a, t_list **stack_b)
{
	int	min_index;

	min_index = get_min_index(stack_a, get_min(stack_a));
	if (min_index == 2)
		ra(stack_a);
	if (min_index == 3)
	{
		ra(stack_a);
		ra(stack_a);
	}
	if (min_index == 4)
	{
		rra(stack_a);
		rra(stack_a);
	}
	if (min_index == 5)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	simple_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*top;
	int		size;

	(void)stack_b;
	top = *stack_a;
	size = ft_lstsize(*stack_a);
	if (size == 1)
		return ;
	if (size == 2)
		sa(stack_a);
	if (size == 3)
		sort3(stack_a);
	if (size == 4)
		sort4(stack_a, stack_b);
	if (size == 5)
		sort5(stack_a, stack_b);
}
