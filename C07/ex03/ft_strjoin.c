#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlength(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

int getfulllength(int size, char **strs, char *sep)
{
    int i;
    int length;
    int seplen = ft_strlength(sep);
    i = 0;
    while (i < size)
    {
        length += ft_strlength(strs[i]);
        length += seplen;
        i++;
    }
    return (length - seplen);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int fulllength;
    int i;
    char *string;
    if (size == 0)
        return ((char *)malloc(sizeof(char)));
    fulllength = getfulllength(size, strs, sep);
}

int main(int argc, char *argv[])
{
    int index;
    char **strs;
    char *separator;
    char *result;
    int size;

    size = 3;
    strs = (char **)malloc(3 * sizeof(char *));
    strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
    strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
    strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
    strs[0] = "Hello";
    strs[1] = "friend,";
    strs[2] = "you are awesome";
    separator = " ";
    printf("%d", getfulllength(size, strs, separator));

    return 0;
}
