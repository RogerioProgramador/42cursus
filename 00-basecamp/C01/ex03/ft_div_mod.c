/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 19:15:41 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/06 16:54:19 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);

	
}

int main(void)
{
	int a = 4;
	int b = 2;

	int*div = &a;
	int*mod = &b;

	ft_div_mod(a, b, div, mod);
}
