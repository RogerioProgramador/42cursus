/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:58:41 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/14 01:32:02 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0' || *s2 == '\0')
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
