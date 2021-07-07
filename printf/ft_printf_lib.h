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
}				printparameters;

/*Libraries*/
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

/*Functions*/
int     ft_printf(char *s, ...);
int     ft_occurrence(char c, char *s);
int     ft_set_number(va_list args, char *s);
int     ft_move_forward(char *s);
char	*ft_utoa(unsigned int n);
char    *ft_applying_specifiers(char specifier, va_list args);
char    *ft_applying_c(va_list args);
char    *ft_applying_s(va_list args);
char    *ft_applying_p(va_list args);
char    *ft_applying_d(va_list args);
char    *ft_applying_u(va_list args);
char    *ft_applying_flag(char *pointer, printparameters *parameters);
char    *ft_putting_in_place(char *pointer,char *buffer);
char    *ft_strndup(char *s, int c);
char    *ft_hextoa(size_t n);
char    *ft_ptr_prefix(char *pointer);
void    ft_applying_precision(char *pointer, int precision);
void    ft_structstart(printparameters *x);

#endif
