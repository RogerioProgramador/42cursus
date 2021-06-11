/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lib.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 05:47:09 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/06/11 10:04:48 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_LIB_H
# define FT_PRINTF_LIB_H

/*Homemade*/
# include "libft/libft.h"
# include "conversion/conversion.h"
# include "my_functions/my_functions.h"
/*Libraries*/
# include <stdarg.h>
# include <unistd.h>

/*Functions*/
int	ft_printf(char *s, ...);

#endif
