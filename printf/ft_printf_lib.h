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

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct	print_params
{
	int	flags;
	int	width;
	int	presicion;
	int	specifier;
}				printparameters;

int     ft_printf(char *s, ...);
int     ft_isvalid(printparameters *parameters, char *pointer, va_list args);
int     ft_convert(printparameters *params, va_list args);

char    *ft_apply_specifiers(char specifier, va_list args);
char    *ft_apply_flag(char *pointer, printparameters *parameters);
char    *ft_apply_precision(char *pointer, int precision);

char    *ft_case_c(va_list args);
char    *ft_case_s(va_list args);
char    *ft_case_p(va_list args);
char    *ft_case_d(va_list args);
char    *ft_case_u(va_list args);
char    *ft_case_x(va_list args);
char    *ft_case_X(va_list args);

char    *ft_hextoa(size_t nb);
char	*ft_utoa(unsigned int n);

int     ft_move_forward(char *s);
int     write_and_count(char *s, int count);
void    ft_struct_start(printparameters *x);

#endif
