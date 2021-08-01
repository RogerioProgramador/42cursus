/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 01:29:41 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/06 03:21:42 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

void ft_sort_int_tab(int *tab, int size)
{
	write(1, "teste", 1);
}