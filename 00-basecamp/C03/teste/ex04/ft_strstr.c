/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:07:51 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/14 01:34:59 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*pointer_find;
	char	*pointer_str;
	int		boolean;

	if (*to_find == '\0')
		return (str);
	pointer_find = to_find;
	pointer_str = str;
	boolean = 1;
	while (boolean)
	{
		if (*pointer_find == '\0')
			return ((char *)(pointer_str - (pointer_find - to_find)));
		if (*pointer_str == *pointer_find)
			pointer_find++;
		else
			pointer_find = to_find;
		if (*pointer_str == '\0')
			break ;
		pointer_str++;
	}
	return (0);
}
