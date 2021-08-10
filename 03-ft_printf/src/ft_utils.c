/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:55 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 11:43:56 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_move_forward(char *s)
{
	int	i;

	i = 1;
	while (ft_strchr("cspdiuxX%", s[i]) == 0)
		i++;
	return (i);
}

int	ft_write_and_count(char *s, int count, int czero)
{
	int		i;
	char	zero;

	i = -1;
	zero = 0;
	if (czero == 0)
		write(1, s, count);
	else
	{
		while (++i < count)
		{
			if (s[i] == '0')
				write(1, &zero, 1);
			else
				write(1, &s[i], 1);
		}
	}
	return (count);
}

void	ft_czero(char *pointer, char *czero)
{
	if (pointer[0] == 0)
	{
		pointer[0] = '0';
		*czero = 1;
	}
}

char	*ft_elseneg(char *pointer, char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	pointer = (char *)ft_calloc(ft_strlen(s) + 2, sizeof(char));
	pointer[i] = '-';
	while (s[j])
		pointer[++i] = s[j++];
	free(s);
	return (pointer);
}

char	*ft_negfirst(char *s, t_params *params)
{
	char	*pointer;

	if (params->precision == 0)
	{
		*(ft_strchr(s, '-')) = '0';
		*(ft_strchr(s, '0')) = '-';
		return (s);
	}
	if ((!params->precision_bool) || (((params->precision) < (int)ft_strlen(s))
			&& (ft_strchr("di", params->specifier))))
		return (s);
	pointer = ft_strchr(s, '-');
	*pointer = '0';
	if (*s == ' ')
	{
		pointer = ft_strchr(s, '0');
		*(pointer - 1) = '-';
		return (s);
	}
	else
		return (ft_elseneg(pointer, s));
}
