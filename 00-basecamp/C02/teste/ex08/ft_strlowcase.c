/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:39:54 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/10 02:37:51 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *str2;

	str2 = str;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
		{
			*str += 32;
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
