/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 02:10:04 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/06/11 07:42:32 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_lib.h"

char	*case_s(char *s, char *convert)
{
	int		total_len;
	char	*buffer;
	char	*buffer_return;
	char	*s_free;

	total_len = ft_strlen(s) - 2 + ft_strlen(convert);
	buffer = (char *)ft_calloc(total_len + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	buffer_return = buffer;
	s_free = s;
	while (*s != '%')
		*buffer++ = *s++;
	s = s + 2;
	while (*convert)
		*buffer++ = *convert++;
	while (*s)
		*buffer++ = *s++;
	free(s_free);
	return (buffer_return);
}
