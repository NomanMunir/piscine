#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    if (*to_find == '\0')
        return (str);
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j] && str[i + j])
            j++;
        if (to_find[j] == '\0')
            return (str + i);
        i++;
    }
    return (str);
}

int main(int ac, char **av)
{
    printf("%s", ft_strstr(av[1], av[2]));
    // printf("%s %s", av[1], av[2]);
    return (0);
}