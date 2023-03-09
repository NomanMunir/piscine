#include <stdio.h>

int ft_strlen(char *src)
{
    int i = 0;
    while (src[i])
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int srclen = ft_strlen(src);
    int destlen = ft_strlen(dest);
    int i = 0;

    if (size == 0 || size <= destlen)
        return (size + srclen);

    while (src[i] && destlen + i < size - 1)
        dest[destlen + i] = src[i++];
    dest[destlen + i] = '\0';
    return (destlen + srclen);
}

int main()
{
    char str1[20] = "He";
    char str2[] = "wd";
    unsigned int newsize = ft_strlcat(str1, str2, sizeof(str1));
    printf("%s\n", str1);
    printf("New size: %u\n", newsize);
    return 0;
}
