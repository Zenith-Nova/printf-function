#include <stdio.h>

int main(void)
{
	int len_1 = printf(NULL); /*-1*/
	int len_2 = printf('\0'); /*-1*/
	int len_3 = printf("I am a boy\n"); /*chars + \n = 11*/
	int len_4 = printf("%s","I am a boy\n"); /*chars + \n = 11*/

	printf("-----\n");
	printf("%d\n", len_1);
	printf("%d\n", len_2);
	printf("%d\n", len_3);
	printf("%d\n", len_4);

	printf("\n");
	return (0);
}

