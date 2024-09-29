#include <stdio.h>

int main(void)
{
	// Compare NULL (pointer) and '\0' (character)
	int *ptr = '\0';

	if (ptr == NULL)
	{
		printf("'\0' is equal to NULL\n");
	}
	else
	{
		printf("'\0' is NOT equal to NULL\n");
	}

	return 0;
}
