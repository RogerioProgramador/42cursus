/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:28 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 11:43:29 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	*ft_ptr_prefix(char *pointer)
{
	char	*result;
	size_t	i;
	size_t	len;

	i = -1;
	len = ft_strlen(pointer);
	result = (char *)ft_calloc(len + 3, sizeof(char));
	result[0] = '0';
	result[1] = 'x';
	while (pointer[++i])
		result[i + 2] = pointer[i];
	free(pointer);
	return (result);
}

char	*ft_case_p(va_list args)
{
	char	*pointer;
	size_t	n;

	n = va_arg(args, size_t);
	pointer = ft_hextoa(n);
	pointer = ft_ptr_prefix(pointer);
	return (pointer);
}
