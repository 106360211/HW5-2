#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 13


int main()
{
	int face1,face2,face3;
	int roll;
	int frequency[SIZE] = { 0 };
	int sense[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1, 0 };

	srand(time(NULL));

	for (roll = 1; roll <= 36000; roll++)
	{
		face1 = 1 + rand() % 6;
		face2 = 1 + rand() % 6;
		face3 = face1 + face2;
		++frequency[face3];
	}

	printf("%s%17s%17s\n", "Face", "Frequency", "¬O§_¦X²z");
	for (face3 = 1; face3 < SIZE; face3++)
	{
		printf("%4d%17d%15s%d%s%d\n", face3, frequency[face3], "36000*", sense[face3-1], "/11=", frequency[face3]);
	}

	

	system("pause");
	return 0;
}