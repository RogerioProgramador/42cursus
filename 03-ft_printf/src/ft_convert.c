/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:41 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 22:55:12 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_convert(t_params *params, va_list args)
{
	int		char_count;
	char	*pointer;
	char	czero;

	czero = 0;
	pointer = ft_apply_specifiers(params, args);
	if (pointer == NULL)
		return (0);
	if (params->specifier == 'c')
		ft_czero(&pointer[0], &czero);
	if (params->precision_bool)
		pointer = ft_apply_precision(pointer, params);
	pointer = ft_apply_flag(pointer, params);
	char_count = ft_write_and_count(pointer, ft_strlen(pointer), czero);
	free(pointer);
	return (char_count);
}
