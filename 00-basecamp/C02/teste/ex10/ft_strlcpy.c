/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 02:45:48 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/10 02:47:06 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char*src2;

	src2 = src;
	while (size > 0)
	{
		*dest++ = *src++;
		size--;
		if (size == 1)
		{
			*dest = '\0';
			size--;
		}
	}
	src = src2;
	return (ft_strlen(src));
}
