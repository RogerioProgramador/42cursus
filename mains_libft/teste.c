#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
size_t size;

size = 0;
while (s[size])
size++;
return (size);
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  a;

a = 0;
    if (n == 0)
return (0);
    while (s1[a] == s2[a] && a < n - 1 && s1[a] && s2[a])
a++;
    return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}

static char*ft_strcpy(char *dest, char *src)
{
char*dest2;

dest2 = dest;
while (*src)
{
*dest++ = *src++;
}
*dest = '\0';
dest = dest2;
return (dest);
}

char *ft_strdup(char *s1)
{
char*dest;

dest = malloc(ft_strlen(s1) + 1);
if (!(dest))
return (NULL);
if (dest == 0)
return (0);
ft_strcpy(dest, s1);
return (dest);
}

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
size_t  a;

a = 0;
while (a < n)
{
((unsigned char *)dst)[a] = ((unsigned char *)src)[a];
if (((unsigned char *)src)[a] == c)
return (dst + a + 1);
a++;
}
return (NULL);
}

void memccpy_tester(char *dst, char *src, int c, size_t n)
{
char *dup1;
char *dup2;
int a;

dup1 = ft_strdup(dst);
dup2 = ft_strdup(src);

memccpy(dup1, dup2, c, n);
printf("%s\n", dup1);
ft_memccpy(dst, src, c, n);
printf("%s", dst);

a = ft_strncmp(dup1, dst, n);
if (a != 0)
printf("        KO\n");
else
printf("        OK\n");
}

int main(void)
{
char t1[100];
char t2[] = "testea";
memccpy_tester(t1, t2, 'a', 3);
char t3[3];
char t4[] = "carro";
memccpy_tester(t3, t4, 'a', 5);
}