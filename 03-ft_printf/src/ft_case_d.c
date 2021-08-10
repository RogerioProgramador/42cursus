/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:25 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 11:43:26 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_case_d(va_list args, int precision)
{
	int	n;

	n = va_arg(args, int);
	if (n == 0 && precision)
		return (ft_strdup(""));
	return (ft_itoa(n));
}
