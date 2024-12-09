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
	ft_printf("My_function ft_printf :\n");
	ft_printf(" %p\n ", -1);
	ft_printf(" %p\n ", 1);
	ft_printf(" %p\n ", 15);
	ft_printf(" %p\n ", 16);
	ft_printf(" %p\n ", 17);
	ft_printf(" %p %p\n ", LONG_MIN, LONG_MAX);
	ft_printf(" %p %p\n ", INT_MIN, INT_MAX);
	ft_printf(" %p %p\n ", ULONG_MAX, -ULONG_MAX);
	ft_printf(" %p %p\n ", 0, 0);
	ft_printf("%u\n", LONG_MIN);
}
