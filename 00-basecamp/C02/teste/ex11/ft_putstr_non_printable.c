/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:17:37 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/09 01:18:53 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	print_hex(int np)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[np / 16]);
	ft_putchar(hex[np % 16]);
}

void		ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str == 126)
		{
			print_hex(*str);
			str++;
		}
		else
		{
			ft_putchar(*str);
			str++;
		}
	}
}
