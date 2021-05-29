#include "../libft/libft.h"

void strnstr_tester(char *haystack, char *needle, size_t len)
{
	char *pointer;

	pointer = ft_strnstr(haystack, needle, len);
	printf("haystack: %s\n", haystack);
	printf("ft_strnstr: %s\n", pointer);
	printf("haystack +1: %s\n", haystack +1);	
}

int main(void)
{
	char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";
	strnstr_tester(haystack, needle, -1);
}







