/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:38 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 11:43:39 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_case_x(va_list args, int precision)
{
	size_t	nb;

	nb = va_arg(args, unsigned int);
	if (nb == 0 && precision)
		return (ft_strdup(""));
	return (ft_uitoa(nb));
}
