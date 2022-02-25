/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwhy-chu <lwhy-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:48:06 by lwhy-chu          #+#    #+#             */
/*   Updated: 2022/02/24 18:09:10 by lwhy-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	starting;
	int	storage;

	starting = 0;
	while (starting < size / 2)
	{
		storage = tab[size - 1];
		tab[size - 1] = tab[starting];
		tab[starting] = storage;
		starting++;
		size--;
	}
}
