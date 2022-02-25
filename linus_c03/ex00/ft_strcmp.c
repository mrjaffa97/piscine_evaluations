/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldengah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:07:06 by ldengah           #+#    #+#             */
/*   Updated: 2022/02/17 15:11:06 by kwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue ;
		}
		else
		{
			i = s1[i] - s2[i];
			return (i);
		}
	}
	return (0);
}

int main (){
	printf("%d",ft_strcmp("abc", "abc"));
}
