#include "ft_printf.h"
#include <limits.h>

/*
int	main(void)
{
	char	*s;

	s = "s";
	printf("Function prinntf :\n");
	printf("pour un c : %c\n", 67);
	printf("pour un s : %s\n", s);
	//printf("pour un p : %p\n", s);
	printf("pour un d : %d\n", 123);
	printf("pour un u : %u\n", -5);
	printf("pour un x : %x\n", 123);
	printf("pour un x : %X\n", 123);
	printf("pour un i : %i\n", 123);
	ft_printf("My_function ft_printf :\n");
	ft_printf("pour un c : %c\n", 67);
	ft_printf("pour un s : %s\n", s);
	//ft_printf("pour un p : %p\n", s);
	ft_printf("pour un d : %d\n", 123);
	ft_printf("pour un u : %u\n", -5);
	ft_printf("pour un x : %x\n", 123);
	ft_printf("pour un x : %X\n", 123);
	ft_printf("pour un i : %i\n", 123);
	return (0);
}*/
int	main(void)
{
	printf(" %p %p\n ", 0, 0);
	ft_printf(" %p %p\n ", 0, 0);
}

/*int main()
{
	printf(" %u ", 0);
	printf(" %lu ", LONG_MIN);
	printf(" %u %u %lu %lu %lu %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN,
		ULONG_MAX, 0, -42);

	ft_printf(" %u ", 0);
	ft_printf(" %u ", LONG_MIN);
	ft_printf(" %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN,
		ULONG_MAX, 0, -42);
}*/
