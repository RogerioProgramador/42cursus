/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 15:00:13 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/06/12 17:02:54 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_lib.h"

/*Return the buffer with the new_value in the % position*/
char	*ft_convert(char *s, int position, char *buffer, void *new_value)
{
	printparams params;

	/*This function will return the rules for my printf*/
	params = set_params(s, position);

}
