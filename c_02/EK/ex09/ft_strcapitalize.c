/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyak <eyak@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:54:44 by eyak              #+#    #+#             */
/*   Updated: 2022/02/23 16:44:08 by eyak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	all_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	all_lowercase (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		if (str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1 ] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		if (str[i] >= '!' && str[i] <= '/' && str[i + 1] != ' ')
			str[i + 1] = str[i + 1] - 32;
		if (str[i] >= ':' && str[i] <= '@' && str[i + 1] != ' ')
			str[i + 1] = str[i + 1] - 32;
		if (str[i] >= '[' && str[i] <= '`' && str[i + 1] != ' ')
			str[i + 1] = str[i + 1] - 32;
		if (str[i] >= '{' && str[i] <= '~' && str[i + 1] != ' ')
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
