/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:06:55 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/14 01:32:32 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int a;
	int j;

	a = 0;
	j = 0;
	while (dest[a])
		a++;
	while (src[j] && nb > 0)
	{
		dest[a] = src[j];
		a++;
		j++;
		nb--;
	}
	dest[a] = '\0';
	return (dest);
}
