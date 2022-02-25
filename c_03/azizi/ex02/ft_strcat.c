/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazizi <aazizi@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:21:56 by aazizi            #+#    #+#             */
/*   Updated: 2022/02/22 17:54:21 by aazizi           ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	h;

	h = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[h] = src[i];
		i++;
		h++;
	}
	dest[h] = '\0';
	return (dest);
}
