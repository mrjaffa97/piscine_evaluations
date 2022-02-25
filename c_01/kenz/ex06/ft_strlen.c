/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwhy-chu <lwhy-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:39:12 by lwhy-chu          #+#    #+#             */
/*   Updated: 2022/02/24 14:26:43 by lwhy-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	txtlength;

	txtlength = 0;
	while (str[txtlength] != '\0')
	{
		txtlength++;
	}
	return (txtlength++);
}
