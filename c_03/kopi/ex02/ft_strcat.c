/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgoh <pgoh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:35:56 by pgoh              #+#    #+#             */
/*   Updated: 2022/02/22 16:36:06 by pgoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest + strlen(dest);
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}

int	main(void)
{
	char	*str;

	str = (char *)calloc(100, 1);
	ft_strcat(str, "This ");
	ft_strcat(str, "is ");
	ft_strcat(str, "the ");
	ft_strcat(str, "correct ");
	ft_strcat(str, "answer ");
	ft_strcat(str, "for ");
	ft_strcat(str, "ex02");
	puts(str);
	return (0);
}
