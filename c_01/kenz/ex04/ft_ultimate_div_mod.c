/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwhy-chu <lwhy-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:59:48 by lwhy-chu          #+#    #+#             */
/*   Updated: 2022/02/24 19:25:03 by kwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	*div;
	int	*mod;

	*div = (*a / *b);
	*mod = (*a % *b);
	*a = div;
	*b = mod;
	c = *div / a
}
