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

	// Test 6: entero positivo
	int pos = 123;
	count1 = ft_printf("my: int: %d\n", pos);
	count2 = printf("og: int: %d\n", pos);
	printf("=> Return: my = %d | og = %d\n\n", count1, count2);

	// Test 7: entero negativo
	int neg = -456;
	count1 = ft_printf("my: int: %d\n", neg);
	count2 = printf("og: int: %d\n", neg);
	printf("=> Return: my = %d | og = %d\n\n", count1, count2);

	// Test 8: cero
	int zero = 0;
	count1 = ft_printf("my: int: %d\n", zero);
	count2 = printf("og: int: %d\n", zero);
	printf("=> Return: my = %d | og = %d\n\n", count1, count2);

	// Test 9: INT_MAX
	int max = 2147483647;
	count1 = ft_printf("my: int: %d\n", max);
	count2 = printf("og: int: %d\n", max);
	printf("=> Return: my = %d | og = %d\n\n", count1, count2);

	// Test 10: INT_MIN
	int min = -2147483648;
	count1 = ft_printf("my: int: %d\n", min);
	count2 = printf("og: int: %d\n", min);
	printf("=> Return: my = %d | og = %d\n\n", count1, count2);

	unsigned int	u1 = 0;
	unsigned int	u2 = 42;
	unsigned int	u3 = 4294967295;

	// Test 11: número unsigned = 0
	count1 = ft_printf("my: unsigned: %u\n", u1);
	count2 = printf("og: unsigned: %u\n", u1);
	printf("=> Return: my = %d | og = %d\n\n", count1, count2);

	// Test 12: número unsigned = 42
	count1 = ft_printf("my: unsigned: %u\n", u2);
	count2 = printf("og: unsigned: %u\n", u2);
	printf("=> Return: my = %d | og = %d\n\n", count1, count2);

	// Test 13: número unsigned máximo
	count1 = ft_printf("my: unsigned max: %u\n", u3);
	count2 = printf("og: unsigned max: %u\n", u3);
	printf("=> Return: my = %d | og = %d\n\n", count1, count2);

	return (0);
}

