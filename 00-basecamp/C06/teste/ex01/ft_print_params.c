/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 00:15:21 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/14 00:17:02 by rsiqueir         ###   ########.fr       */
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

void	ft_print_params(char **argv)
{
	int a;

	a = 1;
	while (argv[a])
	{
		ft_putstr(&argv[a][0]);
		write(1, "\n", 1);
		a++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 0)
		return (1);
	ft_print_params(argv);
}
