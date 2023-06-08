/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:37:49 by pdelanno          #+#    #+#             */
/*   Updated: 2023/06/06 15:52:00 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_rotate(t_list **stack)
{
	t_list	*top;
	t_list	*bottom;

	if (ft_lstsize(*stack) < 2)
		return (0);
	top = *stack;
	bottom = ft_lstlast(top);
	*stack = top->next;
	top->next = NULL;
	bottom->next = top;
	return (0);
}

int	ra(t_list **stack_a)
{
	ft_rotate(stack_a);
	ft_printf("ra\n");
	return (0);
}

int	rb(t_list **stack_b)
{
	ft_rotate(stack_b);
	ft_printf("rb\n");
	return (0);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_printf("rr\n");
	return (0);
}
