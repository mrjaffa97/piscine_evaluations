/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldengah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:08:08 by ldengah           #+#    #+#             */
/*   Updated: 2022/02/17 14:08:12 by ldengah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != 0 && i < size)
	{
		i++;
	}
	j = 0;
	while (src[j] != 0 && (i + j) < (size - 1))
	{
		dest[(i + j)] = src[j];
		j++;
	}
	while (src[j] != 0)
	{
		j++;
	}
	dest[(i + j)] = 0;
	return (i + j);
}
