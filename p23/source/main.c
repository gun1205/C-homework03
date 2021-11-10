#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status{ CONTINUE, WON, LOST };
int rollDice(void);

int main(void)
{
	int sum;
	int myPoint;

	enum Status gameStatus;

	srand(time(NULL));
	sum = rollDice();

	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;

	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;

	default:
		gameStatus = CONTINUE;
		myPoint = sum;
		printf("point is %d\n", myPoint);
		break;
	}

	while (gameStatus == CONTINUE)
	{
		sum = rollDice();

		if (sum == myPoint)
		{
			gameStatus = WON;
		}
		else
		{
			if (sum == 7)
			{
				gameStatus = LOST;
			}
		}
	}

	if (gameStatus == WON) 
	{
		printf("player wins\n");
	}
	else
	{
		printf("players loses\n");
	}

	system("pause");
	return 0;
}

int rollDice(void)
{
	int die1;
	int die2;
	int workSum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;

	printf("player rolled %d + %d = %d\n", die1, die2, workSum);
	return workSum;
}