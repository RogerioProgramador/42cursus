/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 15:23:31 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/06/12 16:42:14 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_lib.h"

static int ft_isflag(char c)
{
	if (s[i] == '-' || s[i] == '0')
		return (1);
	return (0);
}

static int ft_isdigit1(int c)
{
		if (ft_isdigit(c) || c == '*')
			return (1);
		return (0);
}

static int	pointer_or_int(int i, char *s, int x)
{
	int width;

	if (s[i] == '*')
		width == 0/*arg + 1 + x++*/;
	else if (ft_isdigit(s[i]))
		width = ft_atoi(s + i);
	return (width);
}

printparams set_params(char *s, int i)
{
	printparams pointer;
	int x;

	x = 0;
	if (ft_isflag(s[i]))
		pointer.flags = s[i++];
	if (ft_isdigit1(s[i]))
	{
		pointer.width = pointer_or_int(i++, s, x++);
		while (ft_isdigit1(s[i]))
			i++;
	}
	if (s[i] == '.')
	{
		pointer.precision = pointer_or_int(++i, s, x++);
		while (ft_isdigit1(s[i]))
			i++;
	}
	if (!ft_ocurrence("cspdiuxX", s[i]))
		pointer.specifier = s[i];
	else
		pointer.specifier = '~';
	return (pointer);
}

