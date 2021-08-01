/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:23:35 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/16 23:25:32 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
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
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*str2;

	ft_strlowcase(str);
	str2 = str;
	if (*str >= 97 && *str <= 122)
		*str -= 32;
	str++;
	while (*str)
	{
		if ((*str >= 97 && *str <= 122) || (*str >= 48 && *str <= 57))
			str++;
		else
		{
			str++;
			if (*str >= 97 && *str <= 122)
			{
				*str -= 32;
				str++;
			}
		}
	}
	str = str2;
	return (str);
}
