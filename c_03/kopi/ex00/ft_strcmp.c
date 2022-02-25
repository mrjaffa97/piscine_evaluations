/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgoh <pgoh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:12:04 by pgoh              #+#    #+#             */
/*   Updated: 2022/02/22 12:14:46 by pgoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//replicate string compare
int	main ();
int	ft_strcmp(char *s1, char *s2)
{
	int	str_counter;

	str_counter = 0;
	while (s1[str_counter] != 0 || s2[str_counter] != 0)
	{
		if (s1[str_counter] == s2[str_counter])
		{
			str_counter++;
			continue ;
		}
		else
		{
			if ((s1[str_counter] - s2[str_counter]) > 0)
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
	char	s1[] = "abcd", s2[] = "abCd", s3[] = "abcd";
	int	result;
  // comparing strings s1 and s2
  result = ft_strcmp(s1, s2);
  printf("ft_strcmp(s1, s2) = %d\n", result);
  // comparing strings s1 and s3
  result = ft_strcmp(s1, s3);
  printf("ft_strcmp(s1, s3) = %d\n", result);
  return 0;
}