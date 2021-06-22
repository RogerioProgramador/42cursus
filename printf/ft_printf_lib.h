/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lib.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 05:47:09 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/06/12 16:44:07 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_LIB_H
# define FT_PRINTF_LIB_H

/*Struct*/
typedef struct	print_params
{
	int	flags;
	int	width;
	int	presicion;
	int	specifier;
}				printparams;

/*Libraries*/
# include <stdarg.h>
# include <unistd.h>

/*Functions*/
int			ft_printf(char *s, ...);

#endif
