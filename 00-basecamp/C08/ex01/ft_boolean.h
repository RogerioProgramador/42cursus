/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:09:58 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/15 19:30:45 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE			1
# define FALSE			0
# define SUCCESS		0
# define FALSE			false
# define TRUE			true
# define EVEN_MSG		"I have an even number of arguments.\n"
# define ODD_MSG		"I have an odd number of arguments.\n"
# define EVEN(nbr)		(nbr % 2 == 0)

typedef int	t_bool;

#endif
