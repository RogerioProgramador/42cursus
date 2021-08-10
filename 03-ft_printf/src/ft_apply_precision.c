/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:16 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 11:43:17 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	*precision_for_strings(char *pointer, int precision, char a)
{
	char	*result;
	int		i;

	i = ft_strlen(pointer);
	if ((precision >= i) || precision < 0 || (precision <= 0 && a == '%'))
		return (pointer);
	result = (char *)malloc((precision + 1) * sizeof(char));
	result[precision] = 0;
	i = -1;
	while (++i < precision)
		result[i] = pointer[i];
	free(pointer);
	return (result);
}

static char	*ft_neg_prefix(char *pointer)
{
	char	*result;
	size_t	i;
	size_t	len;

	i = -1;
	len = ft_strlen(pointer);
	result = (char *)ft_calloc(len + 2, sizeof(char));
	result[0] = '-';
	while (pointer[++i])
		result[i + 1] = pointer[i];
	free(pointer);
	return (result);
}

static char	*precision_for_neg(char *pointer, int precision)
{
	char	*result;
	char	*positive;
	int		len;
	int		i;

	len = ft_strlen(pointer) - 1;
	if (precision <= len)
		return (pointer);
	positive = ft_strdup(pointer + 1);
	result = (char *)malloc((precision + 1) * sizeof(char));
	result[precision] = 0;
	len = precision - len;
	i = -1;
	while (++i < len)
		result[i] = '0';
	len = 0;
	while (positive[len])
		result[i++] = positive[len++];
	free(positive);
	free(pointer);
	return (ft_neg_prefix(result));
}

static char	*precision_for_numbers(char *pointer, int precision)
{
	char	*result;
	int		len;
	int		i;

	if (ft_strchr(pointer, '-'))
		return (precision_for_neg(pointer, precision));
	len = ft_strlen(pointer);
	if (precision <= len)
		return (pointer);
	result = (char *)malloc((precision + 1) * sizeof(char));
	result[precision] = 0;
	len = precision - len;
	i = -1;
	while (++i < len)
		result[i] = '0';
	len = 0;
	while (pointer[len])
		result[i++] = pointer[len++];
	free(pointer);
	return (result);
}

char	*ft_apply_precision(char *pointer, t_params *parameters)
{
	int		precision;
	char	specifier;

	specifier = parameters->specifier;
	precision = parameters->precision;
	if ((specifier == 'c') || (specifier == 's') || (specifier == '%'))
		pointer = precision_for_strings(pointer, precision, specifier);
	else
		pointer = precision_for_numbers(pointer, precision);
	return (pointer);
}
