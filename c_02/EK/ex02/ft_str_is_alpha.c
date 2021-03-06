/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyak <eyak@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:01:06 by eyak              #+#    #+#             */
/*   Updated: 2022/02/22 16:41:05 by eyak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || str[i] == ' ')
			i++;
		else if ((str[i] >= 'a' && str[i] <= 'z') || str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (1);
}
