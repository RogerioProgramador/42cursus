/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:11 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 11:43:12 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	*ft_flag(char *pointer, int width, char a)
{
	char	*result;
	int		i;
	int		len;
	int		start;

	i = -1;
	len = ft_strlen(pointer);
	start = width - len;
	if (width <= len)
		return (ft_strdup(pointer));
	result = (char *)malloc(sizeof(char) * width + 1);
	result[width] = 0;
	while (++i < start)
		result[i] = a;
	i = 0;
	while (pointer[i])
		result[start++] = pointer[i++];
	return (result);
}

static char	*ft_flagminus(char *pointer, int width)
{
	char	*result;
	int		i;

	i = -1;
	if (width <= (int)ft_strlen(pointer))
		return (ft_strdup(pointer));
	result = (char *)malloc(sizeof(char) * width + 1);
	result[width] = 0;
	while (pointer[++i])
		result[i] = pointer[i];
	while (i < width)
		result[i++] = ' ';
	return (result);
}

static char	*ft_flagzero(char *pointer, int specifier, int width)
{
	if (specifier == 'c' || specifier == 's')
		return (ft_flag(pointer, width, ' '));
	else
		return (ft_flag(pointer, width, '0'));
}

char	*ft_apply_flag(char *ptr, t_params *params)
{
	char	*result;

	if (params->precision_bool && ft_strchr("diuxX", params->specifier)
		&& (params->flags == '0'))
		params->flags = 'x';
	if (params->flags == '0')
		result = ft_flagzero(ptr, params->specifier, params->width);
	else if (params->flags == '-')
		result = ft_flagminus(ptr, params->width);
	else
		result = ft_flag(ptr, params->width, ' ');
	if (ft_strchr("diuxX", params->specifier) && ft_strchr(result, '-'))
		result = ft_negfirst(result, params);
	free(ptr);
	return (result);
}
