/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:47 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 22:44:50 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	ft_struct_start(t_params *x)
{
	x->flags = 'x';
	x->width = 0;
	x->precision = 0;
	x->precision_bool = 0;
}

static int	ft_set_flag(char *s, t_params *parameters)
{
	int	i;

	i = 0;
	if (*s == '0' && *(s + 1) == '-')
		parameters->flags = '-';
	else
		parameters->flags = *s;
	while (ft_strchr("0-", s[i]))
		i++;
	return (i);
}

static int	ft_set_number(char *s)
{
	return (ft_atoi(s));
}

int	ft_isvalid(t_params *parameters, char *pointer)
{
	ft_struct_start(parameters);
	if (*pointer && ft_strchr("0-", *pointer))
		pointer += ft_set_flag(&(*pointer), parameters);
	if (*pointer && ft_strchr("0123456789", *pointer))
	{
		parameters->width = ft_set_number(pointer++);
		while (ft_strchr("0123456789", *pointer))
			pointer++;
	}
	if (*pointer && *pointer == '.')
	{
		parameters->precision_bool = 1;
		parameters->precision = ft_set_number(++pointer);
		while (ft_strchr("0123456789*", *pointer))
			pointer++;
	}
	if (*pointer && ft_strchr("cspdiuxX%", *pointer))
		parameters->specifier = *pointer;
	else
		return (0);
	return (1);
}
