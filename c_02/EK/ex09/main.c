/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyak <eyak@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:54:48 by eyak              #+#    #+#             */
/*   Updated: 2022/02/23 16:20:44 by eyak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quaRANte-deux; cinquante+et+un";
	char *b;
	
	b = a;
	printf("%s", ft_strcapitalize(b));
	return (0);
}
