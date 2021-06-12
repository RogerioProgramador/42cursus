/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:21:38 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/06/12 16:12:59 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_lib.h"
#include <stdio.h>

int main(void)
{
	char *teste;

	teste = "435---sadavzxcvz";
	printf("teste %i", ft_atoi(teste));
}
