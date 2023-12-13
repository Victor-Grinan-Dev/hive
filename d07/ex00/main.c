
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src);

int main(void)
{
	char *a= "some text";
	char *b = ft_strdup(a);

	printf("%s\n", a);
	printf("%s\n", b);

	char *a2= "some text";
	char *b2 = strdup(a2);

	printf("%s\n", a2);
	printf("%s\n", b2);

	return (0);
}