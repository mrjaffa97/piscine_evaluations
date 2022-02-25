/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichew <pichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:08:39 by pichew            #+#    #+#             */
/*   Updated: 2022/02/13 17:25:48 by pichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int a);
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 48;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	ft_putnbr(b);
	return (0);
}
