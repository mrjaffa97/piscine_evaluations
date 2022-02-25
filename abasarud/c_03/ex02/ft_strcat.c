/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:49:00 by abasarud          #+#    #+#             */
/*   Updated: 2022/02/22 12:11:40 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	size_of_dest;
	int	i;

	i = 0;
	size_of_dest = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[size_of_dest + i] = src[i];
		i++;
	}
	dest[size_of_dest + i] = '\0';
	return (dest);
}
