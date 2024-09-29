#include "test.h"

int _putchar(const char c);

int main(void)
{
	char name[3] = {'G', 'i', 'd'};
	int len;
	for (int i = 0; i <= sizeof(name); i++)
	{
		char c = name[i];
		len = _putchar(c);
	}

	printf("\n");
	printf("len: %d\n", len);

	return (EXIT_SUCCESS);
}

int _putchar(char c)
{
		ssize_t char_count = write(STDOUT_FILENO, &c, sizeof(char));
		if (char_count == -1)
		{
			return (-1);
		}

		return (char_count);
}
