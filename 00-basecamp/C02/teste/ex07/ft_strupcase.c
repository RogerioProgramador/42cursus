/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:38:20 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/09 04:30:06 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char*str2;

	str2 = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
			str++;
		}
		else
		{
			str++;
		}
	}
	str = str2;
	return (str);
}
