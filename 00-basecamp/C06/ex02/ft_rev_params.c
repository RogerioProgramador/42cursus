/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:54:19 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/15 14:07:20 by rsiqueir         ###   ########.fr       */
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
		a++;
	a -= 1;
	while (a > 0)
	{
		ft_putstr(&argv[a][0]);
		write(1, "\n", 1);
		a--;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 0)
		return (1);
	ft_print_params(argv);
}
