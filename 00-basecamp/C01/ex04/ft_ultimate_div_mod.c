/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 19:36:35 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/16 00:51:04 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;
	int tmp2;

	tmp = (*a / *b);
	tmp2 = (*a % *b);
	*a = tmp;
	*b = tmp2;
}

int main(void)
{
	char *ptr;
	char *ptr2;
	int c;
	int d;
	c = 2;
	d = 4;
	ptr = &c;
	ptr2 = &d;
	ft_ultimate_div_mod(ptr, ptr2);
}