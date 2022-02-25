/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichew <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:49:48 by pichew            #+#    #+#             */
/*   Updated: 2022/02/23 15:59:47 by eyak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%i\n", ft_str_is_lowercase("hahhhaa")); //1
	printf("%i\n", ft_str_is_lowercase("zzz9*zzz")); //0
	printf("%i\n", ft_str_is_lowercase("564")); //0
	printf("%i\n", ft_str_is_lowercase("ads ads")); //0
	printf("%i\n", ft_str_is_lowercase("ZZZ")); //0
	printf("%i\n", ft_str_is_lowercase("   ")); //0
	printf("%i\n", ft_str_is_lowercase("\0")); //1

	return (0);
}
