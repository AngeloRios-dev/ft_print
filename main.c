#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		count1;
	int		count2;
	char	c = 'A';
	char	*str = "Hello 42!";
	char	*null_str = NULL;

	// Test 1: carácter
	count1 = ft_printf("my: char: %c\n", c);
	count2 = printf("og: char: %c\n", c);
	printf("=> Return: my = %d | og = %d\n\n", count1, count2);

	// Test 2: string normal
	count1 = ft_printf("my: string: %s\n", str);
	count2 = printf("og: string: %s\n", str);
	printf("=> Return: my = %d | og = %d\n\n", count1, count2);

	// Test 3: string NULL
	count1 = ft_printf("my: NULL string: %s\n", null_str);

	// Para evitar warning de printf con NULL
	if (null_str)
		count2 = printf("og: NULL string: %s\n", null_str);
	else
		count2 = printf("og: NULL string: (null)\n");

	printf("=> Return: my = %d | og = %d\n\n", count1, count2);

	// Test 4: puntero a variable
	int	n = 42;
	int	*ptr = &n;
	count1 = ft_printf("my: pointer: %p\n", ptr);
	count2 = printf("og: pointer: %p\n", ptr);
	printf("=> Return: my = %d | og = %d\n\n", count1, count2);

	// Test 5: puntero NULL
	ptr = NULL;
	count1 = ft_printf("my: NULL pointer: %p\n", ptr);
	count2 = printf("og: NULL pointer: %p\n", ptr);
	printf("=> Return: my = %d | og = %d\n\n", count1, count2);


	return (0);
}

