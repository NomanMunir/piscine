#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int *ft_range(int min, int max)
{
   
}

int main(void)
{
    char *str;
    char *allocated;

    str = "Hello World with malloc()";
    printf("x  : base  : $%s$ @ %p\n", str, str);
    allocated = strdup(str);
    printf("c  : alloc : $%s$ @ %p\n", allocated, allocated);
    allocated = ft_strdup(str);
    printf("ft : alloc : $%s$ @ %p\n", allocated, allocated);
}