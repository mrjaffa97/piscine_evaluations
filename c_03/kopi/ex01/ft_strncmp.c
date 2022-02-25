/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgoh <pgoh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:13:38 by pgoh              #+#    #+#             */
/*   Updated: 2022/02/22 15:13:43 by pgoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//replicate string compare with condition
int	main ();
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	str_counter;

	str_counter = 0;
	while (s1[str_counter] != 0 || s2[str_counter] != 0 && str_counter <= n)
	{
		if (s1[str_counter] == s2[str_counter])
		{
			str_counter++;
			continue ;
		}
		else
		{
			if ((s1[str_counter] - s2[str_counter]) > 0 )
			{
				return (1);
			}
			else
				return (-1);
		}
	}
	return (0);
}
int main()
{
char	s1[] = "abcd", s2[] = "abxd", s3[] = "abcd";
int	unsigned num;
num = 4;
int	result;

// comparing strings s1 and s2
result = ft_strncmp(s1, s2, num);
printf("ft_strncmp(s1, s2, 3) = %d\n", result);

// comparing strings s1 and s3
result = ft_strncmp(s1, s3, num);
printf("ft_strcmp(s1, s3, 3) = %d\n", result);

return 0;
}

