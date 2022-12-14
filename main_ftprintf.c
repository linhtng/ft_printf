#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include "ft_printf.h"
#include <limits.h>

int main() 
{
   int   res_ft;
   int   res_std;
   /* %c
   res_ft = ft_printf(" %c %c %c ", 0, '1', '2');
	res_std = printf(" %c %c %c ", 0, '1', '2'); */
   //%s
   /* res_ft = ft_printf(" NULL %s NULL ", NULL);
	res_std = printf(" NULL %s NULL ", NULL); */
   //%p
   /* res_ft = ft_printf(" %p %p ", 0, 0);
	res_std = printf(" %p %p ", 0, 0); */
   //%d %i
/*    res_ft = ft_printf(" %d %d %i %i %i %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	res_std = printf(" %d %d %i %i %i %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); */
   //%u
/*    res_ft = ft_printf(" %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	res_std = printf(" %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); */
   //%x %X
/*    res_ft = ft_printf(" %x %x %X %X %X %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	res_std = printf(" %x %x %X %X %X %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); */
   //%%
   /* res_ft = ft_printf(" %%   %%   %% \n");
	res_std = printf(" %%   %%   %% \n"); */
   // mix
   res_ft = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	res_std = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
   printf("\n %d %d\n", res_ft, res_std);
   if (res_ft == res_std)
      printf("OK\n");
   else 
      printf("diff = %d\n", res_ft - res_std);
   return (0);
}