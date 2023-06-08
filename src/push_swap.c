/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:57:54 by pdelanno          #+#    #+#             */
/*   Updated: 2023/06/07 11:29:19 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_stack_init(t_list **stack_a, t_list **stack_b,
				int argc, char *argv[])
{
	t_list	*new;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	ft_check_args(stack_a, stack_b, argc, args);
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack_a, new);
		i++;
	}
	if (argc == 2)
		free_split(args);
}

void	ft_check_args(t_list **stack_a, t_list **stack_b, int argc, char **args)
{
	if (check_args(argc, args) == 0)
	{
		if (argc == 2)
			free_split(args);
		free(stack_a);
		free(stack_b);
		exit(0);
	}
}

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	size;

	(void)stack_b;
	size = ft_lstsize(*stack_a);
	if (size <= 5)
		simple_sort(stack_a, stack_b);
	else
		complex_sort(stack_a, stack_b);
}

int	main(int argc, char*argv[])
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (0);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_stack_init(stack_a, stack_b, argc, argv);
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		free(stack_b);
		return (0);
	}
	index_stack(stack_a);
	push_swap(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	free(stack_b);
	return (0);
}
