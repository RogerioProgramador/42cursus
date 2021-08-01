/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:17:37 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/12 03:07:59 by rsiqueir         ###   ########.fr       */
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
	char*str2;
	str2 = str;
	while (*str)
	{
		if (*str < 32 || *str == 127)
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
	str = str2;
}

#include <unistd.h>


int	main(void)
{
	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0); 