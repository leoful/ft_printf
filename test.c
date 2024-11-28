#include "ft_printf.h"

int main()
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
}