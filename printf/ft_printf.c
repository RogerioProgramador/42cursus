/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 01:53:50 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/06/11 10:02:09 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_lib.h"
#include <stdio.h>

int	ft_printf(char *s, ...)
{
	va_list	vl;
	int		i;
	char	*buffer;

	i = -1;
	buffer = ft_strdup(s);
	va_start(vl, s);
	while (s[++i])
	{
		if (s[i] == '%')
		{
			buffer = conversion(++i, buffer, s, va_arg(vl, char *));
			if (!buffer)
			{
				free(buffer);
				return (0);
			}
		}
	}
	write(1, buffer, ft_strlen(buffer));
	free(buffer);
	va_end(vl);
	return (1);
}

int	main(void)
{
	char	*s;
	int		i;

	i = 43;
	s = "mafagafos";
	printf("%s teste |%-6.*i|", s, 3, i);
}
