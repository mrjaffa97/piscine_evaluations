/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazizi <aazizi@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:08:43 by aazizi            #+#    #+#             */
/*   Updated: 2022/02/24 15:53:58 by aazizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	h;
	unsigned int	j;

	h = ft_strlen(dest);
	j = ft_strlen(src);
	i = 0;
	if (size <= h || size == 0)
	{
		return (size + j);
	}
	while (src[i] != '\0' && i < (size - h - 1 ))
	{
		dest[h] = src[i];
		i++;
		h++;
	}
	dest[h] = '\0';
	return (h + j);
}
