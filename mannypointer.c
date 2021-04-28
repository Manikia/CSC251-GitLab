//Contributors
//G. Poppe
//

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

void RollArray(int *arr); //LA

void printIntroduction(void);																			 // Manuel Castaneda
void printRules(int rollsPerTurn, int pointsToLoose);							 // Manuel Castaneda
double average(int rolls[], int numberOfRolls);										 // Manuel Castaneda
double sum(double sums[], int maxSums);														 // Manuel Castaneda
void printRollResults(int rolls[], int numberOfRolls, int isUser); // Manuel Castaneda

int main(int argc, char *argv[])
{
	int x, y, z, i, h, g, k, choice = 0;
	char name[256];
	int boxNum = 0;
	srand(time(NULL));
	printf("Please enter your name: "); //Input any number of array inputs
	scanf("%s", name);

	printf("Hello %s welcome to the rpgGame!\n", name);

	while (choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 40 doors, each labeled with a number. You are not sure how such a small room can have 40 doors, sooo magic...");
		puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
		puts("What door do you choose?");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
		{
			while (choice != 99)
			{
				puts("Hello world");
				scanf("%d", &choice);
			}
			break;
		}
		case 2:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........ \n");
				puts("Watch out, look behind you, A Meeseeks is coming towarsds you.\n");
				scanf("%d", &choice);
			}
			break;
		}
		case 3:
		{
			while (choice != 99)
			{
				// int choice2;
				// puts("you open the door and find a mysterious man saying: 'Wendy, darling, Light of my Life! I'm not gonna hurt ya \n");
				// puts("He looks at you menancingly and starts to run to you with a knife, there are multiple doors behind you and the door you came from. \n which door do you pick? \n you may quit anytime by selecting option:99");
				// scanf("%d", &choice);

				// switch (choice)
				// {
				// case 1:
				// {

				// 	char a;

				// 	int DieArr[6];

				// 	for (i = 0; i < 6; i++)
				// 	{
				// 		DieArr[i] = 0;
				// 	}

				// 	puts("You stumble into a room, and a skeleton behind a counter and holds a die");
				// 	puts("He asks you with a hollow voice, Hi would you like to roll the dice? [Y]es or [N]o");
				// 	scanf("%c", &a);

				// 	if (a == 'y')
				// 	{
				// 		RollArray(DieArr);

				// 		for (i = 0; i < 6; i++)
				// 		{
				// 			printf("%d = %d\n", i + 1, DieArr);
				// 		}
				// 	}

				// 	break;
				// }
				// case 2:
				// {
				// 	while (choice != 99)
				// 	{
				// 	}
				// 	break;
				// }
				// }
			}
			break;
		}
		case 4:
		{
			while (choice != 99)
			{
				puts("My room no 4. you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 5:
		{
			while (choice != 99)
			{
				puts("you open the door slowly, you hear a click in the distance:");
				puts("Do you close the door or open it fast? Type 1 for open and 2 for close.");
				scanf("%d", &choice);

				switch (choice)
				{
				case 1:
				{
					puts("you get hit with an arrow in the knee!");
					break;
				}

				case 2:
				{
					puts("you hear an arrow hit the door");
					break;
				}
				}
			}
			break;
		}
		case 6:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				puts("hello world.");
				scanf("%d", &choice);
			}
			break;
		}
		case 7:
		{
			while (choice != 99)
			{
				puts("This is the 7th door\n");
				scanf("%d", &choice);
			}
			break;
		}
		case 8:
		{
			while (choice != 99)
			{
				puts("The door creaks open and you find yourself in a field of lavendar spider lillies. A gentle breeze gently stirs your hair.\n");
				puts("While scanning your surroundings, you glance over your shoulder to find that the door you came in with is suddenly gone.\n");
				puts("Wait. How is the door - /n");
				puts(" 'Hey! Dingus!! Move aside!!' /n");
				puts("You feel something whap the side of your shin - recoiling, you see the small source of the gruff voice.\n");
				puts("Not sure of anything anymore, you move aside for the offending chicken and his cohorts of small capybaras. They seem to be in a sort of military precession.\n");
				puts("What on earth do you do?\n");
				scanf("%d", &choice);
			}
			break;
		}
		case 9:
		{
			while (choice != 99)
			{
				puts("cl");
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 10:
		{
			while (choice != 99)
			{
				int i, j, n = 10;

				for (i = n / 2; i <= n; i += 2)
				{
					for (j = 1; j < n - i; j += 2)
					{
						printf(" ");
					}

					for (j = 1; j <= i; j++)
					{
						printf("*");
					}

					for (j = 1; j <= n - i; j++)
					{
						printf(" ");
					}

					for (j = 1; j <= i; j++)
					{
						printf("*");
					}

					printf("\n");
				}

				for (i = n; i >= 1; i--)
				{
					for (j = i; j < n; j++)
					{
						printf(" ");
					}

					for (j = 1; j <= (i * 2) - 1; j++)
					{
						printf("*");
					}

					printf("\n");
				}
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 11:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				puts("3 closed doors");
				printf("The first door is made of rock with cracks that seem to have orange lava flowing from them and fire comming out from the edges");
				printf("The second door seems to be an ornage rock door with vines covering it and light bleeding from the edges with mist flowing from underneath");
				printf("The final door seems to be an ordinary old wooden door of a broom closet");
				printf("Which door will you choose?");
				printf("1 for the fire door");
				printf("2 for the mysterious glowing door");
				printf("3 for the broom closet");
				scanf("%d", &choice);
			}
			break;
		}
		case 12:
		{
			while (choice != 99)
			{
			}
			break;
		}
		case 13:
		{
			while (choice != 99)
			{
				puts("Norville was here");
				scanf("%d", &choice);
			}
			break;
		}
		case 14:
		{
			while (choice != 99)
			{
			}
			break;
		}
		case 15:
		{
			while (choice != 99)
			{
				puts("Choose a path:\n 1 (yellow)\n 2 (red)\n 3 (green)\n");
				puts("Exit (99)");
				scanf("%d", &choice);

				switch (choice)
				{
				case 1:
				{
					puts("yellow");
					puts("exit (99)");
					scanf("%d", &choice);

					break;
				}
				case 2:
				{
					puts("red");
					puts("exit (99)");
					scanf("%d", &choice);

					break;
				}
				case 3:
				{
					puts("green");
					puts("exit (99)");
					scanf("%d", &choice);

					break;
				}
				break;
				}
				break;
			}
		}
		case 16:
		{
			while (choice != 99)
			{
				puts("The room is dark and cold");
				puts("You look at the empty room with empty Shelves..");
				puts("You think to yourself, there's nothing of value in here..");
				puts("What should you do?");
				puts("1. Move and advance to the next room");
				puts("2. Examine the room a little more carefully");
				puts("3. Go back to the last room");
				scanf("%d", &choice);

				if (choice == 1)
				{
					puts("You go towards the door, but the handle is locked..");
					puts("*Maybe you should examine the room..");
					break;
				}

				else if (choice == 2)
				{
					puts("You look at the very top of the shelf and find a old brass key");
					break;
				}

				else if (choice = 3)
				{
					puts("You back out slowly towards the previous room... but it's locked!");
				}

				else
				{
					puts("Try again");
				}
			}
			break;
		}
		case 17:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 18:
		{
			while (choice != 99)
			{
				puts("you open the door and find ....");
				printf("A expansive candlelit cavern; in the center is  a wizen, old wizard shuffling cards at a card table.");
				scanf("%d", &choice);
			}
			break;
		}
		case 19:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				puts("a computer science goblin student !");
				scanf("%d", &choice);
			}
			break;
		}
		case 20:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 21:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 22:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 23:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				puts("another door blocking the door");
				scanf("%d", &choice);
			}
			break;
		}
		case 24:
		{
			while (choice != 99)
			{
				puts("Hello World");
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 25:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				puts("You are in a small dark room");
				puts("You start to hear noises but cannot see what it is");
				puts("You panic and start running for your life");
				scanf("%d", &choice);
			}
			break;
		}
		case 26:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 27:
		{
			while (choice != 99)
			{
				puts("hello world");
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 28:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}

		case 29:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}

		case 30: //Markease's room of "why did you do this?"
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				puts("Some guy screaming hello world. You panic and press 99!");
				scanf("%d", &choice);
			}
			break;
		}

		case 31:
		{
			while (choice != 99)
			{
				// constants
				int MAX_SUMS = 30, ROLLS_PER_TURN = 3, POINTS_TO_LOOSE = 30, AI_STOPING_POINT = 10;

				FILE *writer = fopen("Casino.txt", "a"); // the "a" will append to the file

				printIntroduction();

				int showRules = 2;
				printf("Would you like to read the rules? (1: yes | 2: no) ");
				scanf(" %d", &showRules);

				// format switch
				switch (showRules)
				{
				case 1:
					printRules(ROLLS_PER_TURN, POINTS_TO_LOOSE);
					break;
				}

				srand(time(NULL));

				// arrays of all the averages that each player rolls
				double userSums[30] = {0};
				double player2Sums[30] = {0};
				double player3Sums[30] = {0};

				// pointers for the sums arrays
				double *userSumPtr = userSums;
				double *player2SumPtr = player2Sums;
				double *player3SumPtr = player3Sums;

				// decides when the game should stop (if no one is able to play anymore)
				int userStillPlaying = 1, player2StillPlaying = 1, player3StillPlaying = 1;

				int iteration = 0;			// increases in each loop, determines how large the dice will get
				double currentScore[3]; // keeps track of the score for each player
				while (userStillPlaying == 1 || player2StillPlaying == 1 || player3StillPlaying == 1)
				{
					int i; // for loops
					int userInput;
					int lowDiceSize, highDiceSize; // the lowest and highest value a dice can get you
					int rolls[3];									 // holds the values of all the rolls
					int chooseToRoll;							 // stores the decision of the other players to roll or not

					iteration++;
					highDiceSize = iteration * 10;

					puts("\n-      -      -      -      -      -      -\n"); // just a divider since there is a lot going on in the console.
					printf("\nRound %d, Dice size is %d to %d", iteration, 1, highDiceSize);

					if (userStillPlaying)
					{
						puts("\n\nYour Turn:");
						printf("Would you like to roll your three dice? (1: yes | 2: no) ");
						scanf("%d", &userInput);

						if (userInput == 1)
						{
							for (i = 0; i < ROLLS_PER_TURN; i++)
							{
								// random number between the highest that the dice can get you and the lowest it can get you
								rolls[i] = (rand() % highDiceSize) + 1;
							}

							// stores the average of all three rolls in the sum array
							*userSumPtr = average(rolls, ROLLS_PER_TURN);

							printRollResults(rolls, ROLLS_PER_TURN, 1); // prints out the outcome of all your rolls
							printf("Average of your rolls: %.1lf\n", *userSumPtr);
							userSumPtr++; // increases pointer so next time it will add to the next index of the array

							currentScore[0] = sum(userSums, MAX_SUMS); // takes the sum of all your averages so far
							printf("Your current score: %.1lf", currentScore[0]);

							if (currentScore[0] > POINTS_TO_LOOSE)
							{
								userStillPlaying = 0;
								printf("\nYou lost. %.1lf is larger than %d...", currentScore[0], POINTS_TO_LOOSE);
							}
						}
						else if (userInput == 2)
						{
							userStillPlaying = 0;
						}
					}

					if (player2StillPlaying)
					{
						puts("\n\nPlayer 2 Turn:");
						chooseToRoll = 1;
						// decides to keep rolling
						if ((POINTS_TO_LOOSE - sum(player2Sums, MAX_SUMS)) < AI_STOPING_POINT) // if the ai is (stoping point) away from the score limit, they will stop rolling
						{
							chooseToRoll = 0;
							player2StillPlaying = 0;
							puts("Player 2 chose not to roll anymore.");
						}

						if (chooseToRoll == 1)
						{
							for (i = 0; i < ROLLS_PER_TURN; i++)
							{
								// random number between the highest that the dice can get you and the lowest it can get you
								rolls[i] = (rand() % highDiceSize) + 1;
							}

							// stores the average of all three rolls in the sum array
							*player2SumPtr = average(rolls, ROLLS_PER_TURN);

							printRollResults(rolls, ROLLS_PER_TURN, 0); // prints out the outcome of all your rolls
							printf("Player 2 rolls average: %.1lf\n", *player2SumPtr);
							player2SumPtr++; // increases pointer so next time it will add to the next index of the array

							currentScore[1] = sum(player2Sums, MAX_SUMS); // takes the sum of all your averages so far
							printf("Player 2 score: %.1lf", currentScore[1]);

							if (currentScore[1] > POINTS_TO_LOOSE)
							{
								player2StillPlaying = 0;
								printf("\nPlayer 2 is out. %.1lf is larger than %d...", currentScore[1], POINTS_TO_LOOSE);
							}
						}
					}

					if (player3StillPlaying)
					{
						puts("\n\nPlayer 3 Turn:");
						chooseToRoll = 1;

						// decides to keep rolling
						if ((POINTS_TO_LOOSE - sum(player3Sums, MAX_SUMS)) < AI_STOPING_POINT) // if the ai is (stoping point) away from the score limit, they will stop rolling
						{
							chooseToRoll = 0;
							player3StillPlaying = 0;
							puts("Player 3 is choosing not to roll anymore.");
						}

						if (chooseToRoll == 1)
						{
							for (i = 0; i < ROLLS_PER_TURN; i++)
							{
								// random number between the highest that the dice can get you and the lowest it can get you
								rolls[i] = (rand() % highDiceSize) + 1;
							}

							// stores the average of all three rolls in the sum array
							*player3SumPtr = average(rolls, ROLLS_PER_TURN);

							printRollResults(rolls, ROLLS_PER_TURN, 0); // prints out the outcome of all your rolls
							printf("Player 3 average rolls is %.1lf\n", *player3SumPtr);
							player3SumPtr++; // increases pointer so next time it will add to the next index of the array

							currentScore[2] = sum(player3Sums, MAX_SUMS); // takes the sum of all your averages so far
							printf("Player 3 score: %.1lf", currentScore[2]);

							if (currentScore[2] > POINTS_TO_LOOSE)
							{
								player3StillPlaying = 0;
								printf("\nPlayer 3 is out. %.1lf is larger than %d...", currentScore[2], POINTS_TO_LOOSE);
							}
						}
					}
				}

				printf("\n\nUser score: %.1lf\n", currentScore[0]);
				printf("Player 2 score: %.1lf\n", currentScore[1]);
				printf("Player 3 score: %.1lf\n", currentScore[2]);

				if (currentScore[0] > POINTS_TO_LOOSE)
				{
					currentScore[0] = -1;
				}
				if (currentScore[1] > POINTS_TO_LOOSE)
				{
					currentScore[1] = -1;
				}
				if (currentScore[2] > POINTS_TO_LOOSE)
				{
					currentScore[2] = -1;
				}

				if ((currentScore[0] == -1) && (currentScore[1] == -1) && (currentScore[2] == -1))
				{
					puts("\nEveryone lost...");
					fprintf(writer, "%s lost with everyone\n", name);
				}
				else if ((currentScore[0] > currentScore[1]) && (currentScore[0] > currentScore[2]))
				{

					printf("\nYou won!");
					fprintf(writer, "%s beat player 1 and 2\n", name);
				}
				else if ((currentScore[1] > currentScore[2]) && (currentScore[1] > currentScore[0]))
				{

					printf("\nPlayer 2 won!");
					fprintf(writer, "%s lost to player 2\n", name);
				}
				else
				{
					printf("\nPlayer 3 won!");
					fprintf(writer, "%s lost to player 3\n", name);
				}
				fclose(writer); // close the output file so i can start writing in it again.

				int showRecords = 2;
				printf("\nGood game. Would you like to see the records of previous games? (1: yes | 2: no) ");
				scanf(" %d", &showRecords);

				if (showRecords == 1)
				{
					FILE *reader = fopen("Casino.txt", "r");
					char line[50];

					char c;

					c = fgetc(reader);
					while (c != EOF)
					{
						printf("%c", c);
						c = fgetc(reader);
					}

					fclose(reader);
				}

				puts("\nRemember to enter 99 to exit!");
				scanf("%d", &choice);
			}

			break;
		}

		case 32:
		{
			while (choice != 99)
			{
				puts("you open the door and find a penny, chip, and used napkin.");
				scanf("%d", &choice);
			}
			break;
		}
		case 33:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 34:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 35:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 36:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 37:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 38:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 39:
		{
			while (choice != 99)
			{
				printf("Hello World");
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}
		case 40:
		{
			while (choice != 99)
			{
				puts("You open the door and close it behind you.");
				puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
				puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
				puts("At this point you have 3 choices:");
				puts("1. Examine the skeleton.");
				puts("2. Proceed further ahead in the cave.");
				puts("3. Enter the door to your right.");
				scanf("%d", &choice);
				if (choice == 1)
				{
					puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
					puts("To be continued...");
					break;
				}
				else if (choice == 2)
				{
					puts("You find yourself further ahead in the cave.");
					puts("To be continued....");
					break;
				}
				else if (choice == 3)
				{
					puts("You enter the and close the door behind you.");
					printf("You hear an loud voice \" %s why do you disturb me? \" \n", name);
					puts("To be continued....");
					break;
				}
				else
				{
					puts("wrong choice");
				}
			}
			break;
		}
		}
	}
	return EXIT_SUCCESS;
}

// void RollArray(int *arr) //LA
// {
// 	int i;
// 	int y;
// 	int *ptr;
// 	ptr = arr;

// 	for (i = 0; i < 1; i++)
// 	{
// 		y = rand() % 6;
// 		*(arr + y) = *(arr + y) + 1;
// 		arr = ptr;
// 	}
// }

void printRollResults(int rolls[], int numberOfRolls, int isUser) // Manuel Castaneda
{
	if (isUser)
	{
		printf("You rolled: ");
	}
	else
	{
		printf("they rolled: ");
	}

	int i;
	for (i = 0; i < numberOfRolls; i++)
	{
		printf("%d  ", rolls[i]);
	}

	printf("\n");
}

double average(int rolls[], int numberOfRolls) // Manuel Castaneda
{
	int i, sum = 0;
	for (i = 0; i < numberOfRolls; i++)
	{
		sum = sum + rolls[i];
	}
	return sum / (double)numberOfRolls;
}

double sum(double sums[], int maxSums) // Manuel Castaneda
{
	int i = 0;
	double sum = 0;

	for (i = 0; i < maxSums; i++)
	{

		if (sums[i] == 0)
		{
			break;
		}
		sum = sum + sums[i];
	}
	return sum;
}

void printIntroduction(void) // Manuel Castaneda
{
	puts("\n\nYou walked into a secret casino.");
	puts("The door closes behind you.");
	puts("The only way to leave is to play a game Dice Average.");
}

void printRules(int rollsPerTurn, int pointsToLoose)
{
	puts("\nRules:");
	printf("- Each turn, you and two other players will choose if you wish to roll %d dice.\n", rollsPerTurn);
	printf("- The average number of the %d dice are added to your score.\n", rollsPerTurn);
	printf("- Who ever can get their score closest to %d wins. If your score goes above %d then you loose.\n", pointsToLoose, pointsToLoose);
	puts("- Before each turn, the dice values increase.");
	puts("- After each turn, you will get an opportunity to roll again or stop rolling.");
} // Manuel Castaneda