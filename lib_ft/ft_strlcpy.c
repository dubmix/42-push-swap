/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:58:35 by pdelanno          #+#    #+#             */
/*   Updated: 2023/01/23 17:10:25 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)

{
	unsigned int	i;

	i = 0;
	if (dest == 0 || src == 0)
		return (0);
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
