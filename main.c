#include "ft_printf.h"
#include "stdio.h"
int main()
{
	size_t lena;
	size_t lenb;
	lena = printf("%d",-10);
	printf(": %zu \n ",lena);
	 lenb = ft_printf("%d",-10);
	printf(": %zu \n ",lenb);
	 
}