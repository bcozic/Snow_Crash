#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "\x66\x34\x6b\x6d\x6d\x36\x70\x7c\x3d\x82\x7f\x70\x82\x6e\x83\x82\x44\x42\x83\x44\x75\x7b\x7f\x8c\x89\x0a";
	size_t	len = strlen(str);

	for(size_t i = 0; i < len; i++)
		putchar(str[i] - (char)i);
	return 0;
}
