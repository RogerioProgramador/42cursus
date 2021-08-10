/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_specifiers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:20 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 11:43:21 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_apply_specifiers(t_params *params, va_list args)
{
	char	*pointer;
	char	specifier;

	pointer = NULL;
	specifier = params->specifier;
	if (specifier == 'c')
		pointer = ft_case_c(args);
	else if (specifier == 's')
		pointer = ft_case_s(args);
	else if (specifier == 'p')
		pointer = ft_case_p(args);
	else if (specifier == 'd' || specifier == 'i')
		pointer = ft_case_d(args, params->precision_bool);
	else if (specifier == 'u')
		pointer = ft_case_u(args, params->precision_bool);
	else if (specifier == 'x')
		pointer = ft_case_x(args, params->precision_bool);
	else if (specifier == 'X')
		pointer = ft_case_upperx(args, params->precision_bool);
	else if (specifier == '%')
		pointer = ft_strdup("%");
	return (pointer);
}
