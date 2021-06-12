/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 01:53:50 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/06/12 16:32:48 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_lib.h"
#include <stdio.h>

int free_and_return(char *s, int i)
{
	free(s);
	return (i);
}

int	ft_printf(char *s, ...)
{
	va_list	vl;
	int		position;
	char	*buffer;

	position = -1;
	buffer = ft_strdup(s);
	va_start(vl, s);
	while (s[++position])
	{
		if (s[position] == '%')
		{
			buffer = ft_convert(s, ++position, buffer, va_arg(vl, char *));
			if (!buffer)
				return(free_and_return(buffer, 0));
		}
	}
	va_end(vl);
	ft_putstr_fd(buffer, 1);
	return (free_and_return(buffer, 1));
}

int	main(void)
{
	char	*s;
	int		i;

	i = 43;
	s = "mafagafos";
	printf("%s teste |%-5i|", s, i);
}
