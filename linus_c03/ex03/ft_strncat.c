/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldengah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:07:50 by ldengah           #+#    #+#             */
/*   Updated: 2022/02/17 14:07:52 by ldengah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != 0 && i < nb)
	{
		i++;
	}
	j = 0;
	while (src[j] != 0 && (i + j) < nb)
	{
		dest[(i + j)] = src[j];
		j++;
	}
	dest[(i + j)] = 0;
	return (dest);
}
