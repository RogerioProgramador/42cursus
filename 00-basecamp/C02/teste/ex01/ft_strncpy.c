/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:35:04 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/09 14:17:51 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *dest2;

	dest2 = dest;
	while (n > 0)
	{
		if (*src == '\0' && n != 0)
		{
			*dest = 0;
			dest++;
		}
		else
		{
			*dest = *src;
			dest++;
			src++;
		}
		n--;
	}
	dest = dest2;
	return (dest);
}
