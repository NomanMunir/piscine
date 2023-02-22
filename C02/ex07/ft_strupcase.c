#include <stdio.h>

char *ft_struppcase(char *str)
{

    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char str[] = "hEllo";
    printf("%s", ft_struppcase(str));
    return (0);
}