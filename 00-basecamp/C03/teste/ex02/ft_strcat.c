/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:01:03 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/14 01:32:27 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int a;
	int j;

	a = 0;
	j = 0;
	while (dest[a])
		a++;
	while (src[j])
	{
		dest[a] = src[j];
		a++;
		j++;
	}
	dest[a] = '\0';
	return (dest);
}
