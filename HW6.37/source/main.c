#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int recursiveMaximum(int data[], int size);

int main(void)
{
	int i;
	int data[SIZE] = { 10, 17, 20, 83, 65, 49, 78, 32, 44, 51 };
	printf("Data : ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", data[i]);
	}

	printf("\nMaximum number : %d\n", recursiveMaximum(data, SIZE));
	system("pause");
	return 0;

}
int recursiveMaximum(int data[], int size)
{
	int max_data;

	if (size == 1)
	{
		return data[0];
	}
	else
	{
		max_data = recursiveMaximum(data, size - 1);
		if (data[size - 1] > max_data)
		{
			return data[size - 1];
		}
		else
		{
			return max_data;
		}

	}
}
