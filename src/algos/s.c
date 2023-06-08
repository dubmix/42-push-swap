/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:09:33 by pdelanno          #+#    #+#             */
/*   Updated: 2023/06/06 15:51:05 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_swap(t_list **stack)
{
	t_list	*top;
	t_list	*next;
	int		tmp;
	int		i_tmp;

	if ((ft_lstsize(*stack)) < 2)
		return (0);
	top = *stack;
	next = top->next;
	tmp = top->value;
	i_tmp = top->index;
	top->value = next->value;
	top->index = next->index;
	next->value = tmp;
	next->index = i_tmp;
	return (0);
}

int	sa(t_list **stack_a)
{
	ft_swap(stack_a);
	ft_printf("sa\n");
	return (0);
}

int	sb(t_list **stack_b)
{
	ft_swap(stack_b);
	ft_printf("sb\n");
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_printf("ss\n");
	return (0);
}
