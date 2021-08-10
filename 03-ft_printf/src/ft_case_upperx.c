/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_upperx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:36 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 11:43:37 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_case_upperx(va_list args, int precision)
{
	int		i;
	size_t	nb;
	char	*pointer;

	i = -1;
	nb = va_arg(args, size_t);
	if (nb == 0 && precision)
		return (ft_strdup(""));
	pointer = ft_uitoa(nb);
	while (pointer[++i])
		pointer[i] = ft_toupper(pointer[i]);
	return (pointer);
}
