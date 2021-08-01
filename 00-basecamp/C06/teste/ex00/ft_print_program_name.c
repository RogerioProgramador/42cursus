/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:25:27 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/14 00:14:00 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_print_program_name(char **argv)
{
	ft_putstr(&argv[0][0]);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		return (1);
	ft_print_program_name(argv);
}
