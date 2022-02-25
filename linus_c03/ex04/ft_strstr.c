/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldengah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:08:00 by ldengah           #+#    #+#             */
/*   Updated: 2022/02/17 14:08:02 by ldengah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		searchcount;
	int		tofind_len;
	char	*nullp;

	i = 0;
	searchcount = 0;
	tofind_len = 0;
	while (to_find[tofind_len] != 0)
		tofind_len++;
	while (str[i] != 0)
	{
		if (str[i] == to_find[searchcount])
		{
			if (++searchcount == tofind_len)
				return (&str[(i - tofind_len + 1)]);
		}
		else
		{
			i = i - searchcount;
			searchcount = 0;
		}
		i++;
	}
	return (&*nullp);
}
