#include <stdio.h>
#include <stdlib.h>

char stringReverse(char x[], int y);

int main(void)
{
	int i;
	char string[1000] = { 0 };


	printf("Enter a new string:");
	scanf("%s", string, 1000);


	printf("New string:");
	stringReverse(string, 0);
	printf("\n");

	system("pause");
	return 0;
}

char stringReverse(char x[], int y)
{
	if (x[y] != '\0')
	{
		stringReverse(x, y + 1);
		printf("%c", x[y]);
	}
}
