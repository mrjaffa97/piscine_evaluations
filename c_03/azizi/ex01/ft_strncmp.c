/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazizi <aazizi@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:42:17 by aazizi            #+#    #+#             */
/*   Updated: 2022/02/22 20:37:07 by aazizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if ((s1[i] == '\0' || s2[i] == '\0') || (s1[i] != s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
