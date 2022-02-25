#include<string.h>
#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char a[10];
	char b[10] = "Haha";
	char c[20] = "You are a cutie pie";

	printf("%lu\n", strlcpy(a, c, 6)); //return 19
	printf("%lu\n", strlcpy(b, c, 6)); // return 19
	printf("%s\n", a); //return 'You a'
	printf("%s\n", b); //return 'You a'
}
