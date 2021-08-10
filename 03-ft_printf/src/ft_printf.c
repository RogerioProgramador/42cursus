/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:50 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 11:43:51 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_out(char *buffer, va_list args)
{
	int				i;
	int				char_count;
	t_params		parameters;

	i = -1;
	char_count = 0;
	while (buffer[++i])
	{
		if (buffer[i] == '%' && ft_isvalid(&parameters, &buffer[i + 1]))
		{
			char_count += ft_convert(&parameters, args);
			i += ft_move_forward(&buffer[i]);
		}
		else
			char_count += ft_write_and_count(&buffer[i], 1, 0);
	}
	return (char_count);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	char	*buffer;
	int		printed;

	buffer = ft_strdup((char *)input);
	va_start(args, input);
	printed = ft_print_out(buffer, args);
	va_end(args);
	free(buffer);
	return (printed);
}
