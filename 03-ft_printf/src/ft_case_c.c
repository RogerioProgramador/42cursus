/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:22 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 11:43:23 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_case_c(va_list args)
{
	char	*pointer;

	pointer = (char *)malloc(sizeof(char) * 1 + 1);
	if (!pointer)
		return (NULL);
	pointer[1] = 0;
	pointer[0] = va_arg(args, int);
	return (pointer);
}
