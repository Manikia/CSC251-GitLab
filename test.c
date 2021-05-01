//Contributors
//G. Poppe
//

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

void monikawelcome(char name[]);
void monikacase1(char yellowdecision[]);
void monikacase2(char reddecision[]);
void monikacase3(char greenchoice[]);

int main(int argc, char *argv[])
{
	int x, y, z, i, h, g, k, choice = 0;
	char name[256];
	int boxNum = 0;

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
				puts("you open the door and find a mysterious man saying: 'Wendy, darling, Light of my Life! I'm not gonna hurt ya \n");
				puts("He looks at you menancingly and starts to run to you with a knife, there are multiple doors behind you which door do you pick? \n you may quit anytime by selecting option:99");
				scanf("%d", &choice);
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
				puts("you open the door and find ........");
				puts("BOOM! arrow to the knee!");
				scanf("%d", &choice);
			}
			break;
		}
		case 6:
		{
			while (choice != 99)
			{
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
				puts("A sign that says hello world");
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
			while(choice != 99)
			{
				char yellowdecision[2];
				char reddecision[2];
				char greenchoice[2];
				srand(time(NULL));
				monikawelcome(name);

				puts("You enter door 15 but you end up outside and see three colored paths\n");
				puts("Choose a path:\n 1 (yellow)\n 2 (red)\n 3 (green)\n");
				scanf("%d", &choice);

				switch(choice)
				{
					case 1:
					{
						monikacase1(yellowdecision);
						break;
					}
					case 2:
					{
						monikacase2(reddecision);
						break;
					}
					case 3:
					{
						monikacase3(greenchoice);
						break;
					}
				}
			}
		}
		case 16:
		{
			while (choice != 99)
			{
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

		case 30:
		{
			while (choice != 99)
			{
				puts("you open the door and find ........");
				scanf("%d", &choice);
			}
			break;
		}

		case 31:
		{
			while (choice != 99)
			{
				puts("you open the door and find a cow eating a hot pocket.");
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

void monikawelcome(char name[])
{

	int monikai = 0;

	char monikaname[256] = {0};

	strcpy(monikaname, name);

	for(monikai = 0; monikai < 256; monikai++)
	{
		if(islower(monikaname[monikai]))
		{
			monikaname[monikai] = toupper(monikaname[monikai]);
		}
		if(isupper(monikaname[monikai]))
		{
			//printf("%c", monikaname[monikai]);
		}
	}
	printf("\n~Welcome %s to this minigame~\n\n", monikaname);
	puts("MAKE SURE THE TERMINAL IS IN FULL SCREEN WHEN RUNNING CASE 15\n");
}

void monikacase1(char yellowdecision[])
{
	puts("You chose the yellow path, as you walk you see a hop scotch drawn on the floor\n");
	puts("       ______       ");
	puts("      |   1  |      ");
	puts(" _____|______|_____ ");
	puts("|  2  |   3  |  4  |");
	puts("|_____|______|_____|");
	puts("      |   5  |      ");
	puts(" _____|______|_____ ");
	puts("|  6  |   7  |  8  |");
	puts("|_____|______|_____|");
	puts("      |   9  |      ");
	puts("      |______|      ");
	puts("      |  10  |      ");
	puts("      |______|      \n");

	puts("do you want to play with it?\ny or n\n");
	scanf(" %s", yellowdecision);
	//prints hopscotch

	if(strcmp(yellowdecision, "y") == 0)
	//if its equal to each other
	//0 = true, !0 == false
	{
		int jumps = 0;
		int i = 0;
		char anotherRoll[2];

		int yellowTries = 0;
		while(jumps != 6)
		{
			yellowTries++;
			i = 0;

			for(i = 0; i < 2; i++)
			{
				puts("You stand infront of the first box, and you find a 6 sided die,\nnext to the die theres a note that says to roll the die in order to jump.\nDo you want to roll? (y or n)\n");
				scanf(" %s", anotherRoll);
				//while the choices are wrong, do the below
				//but if its right it will exit and move forward

				if(strcmp(anotherRoll, "y") == 0)
				{
					jumps = (rand() % 6) + 1;
					//above prints one int
					if(jumps != 6)
					{
						printf("You got %d from the die, it wasnt enough to go to the other side, re-roll.\n", jumps);
					}
					else
					{
						printf("You got %d, you can pass\n", jumps);
						break;
					}
				}
				else
				{
					puts("ok, bye\n");
					exit(1);
				}
			}

			if(jumps == 6)
			{
				break;
			}
			else
			{
				puts("\nYou ran out of attempts, good bye\n");
				break;
			}
		}
	}

	else if (strcmp(yellowdecision, "n") == 0)
	{
		FILE *monikasponge;

		char filesponge[200] = "sponge.txt", spongePrint;

		// Open file
		monikasponge = fopen(filesponge, "r");
		if (monikasponge == NULL)
		{
			printf("Wrong file name, retry \n");
			exit(0);
		}

		// Read contents from file
		spongePrint = fgetc(monikasponge);
		while (spongePrint != EOF)
		{
			printf("%c", spongePrint);
			spongePrint = fgetc(monikasponge);
		}

		puts("I dOnT wAnT tO pResS yEs\n");
		puts("\nbye\n");
		fclose(monikasponge);
		exit(1);
		//return 0; //exits u from the program
	}
}

void monikacase2(char reddecision[])
{
	char key[20];
	char usertry[20], pressF[2];
	
	FILE *output, *Deciphered;
	output = fopen("monikaoutput.txt", "w");
	Deciphered = fopen("Deciphered.txt", "r");

	puts("Youve chosen the red road, and you see a blue tunnel. You enter and you\nsee a wall with a code pad on it, its asking if you\nwant to see the prompt to move forward. Do you say yes or no? (y or n)\n");
	scanf(" %c", reddecision);
	//create a text thing where we show the user the file and we make them
	//deciper the code and if its right they will move forward
	int keepLooping = 1;
	while(strcmp(reddecision, "y") == 0 && keepLooping == 1)
	{
		printf("\nDecipher the following text: \nOnce you have an answer, input it below\n");
		puts("\n71 97 114 114 101 116 116 66 108 117 80 111 112 112 101\n"); //text file to decipher
		puts("Need a hint? Ask the key\n");
		scanf(" %s", usertry);
		//if yes then we will prompt the text and ask to deciper

		fscanf(Deciphered, " %s", key);
		if(strcmp(usertry, key) == 0) //check if the same then continue
		{
			puts("\nPIN UNLOCKED\n");
			puts("You can see your previous attempts in the monikaoutput.txt file");

			if(strcmp(usertry, key) == 0)
			{
				puts("\nYour sight is filled with darkness and the glistening of the water as it shines from the light behind you.");
				puts("You begin to move forward and get into the water but it feels weird. You think maybe its because its cold so you just dismiss it.");
				puts("You continue but you begin to feel a burning sensation on your body and you begin panicking,\n'what's in this water'");
				puts("As you look for something to grab to get out of the water\nyour eyes lock on to a warning label on the side of the river, reading: 'WARNING: SULFURIC ACID REMAINS IN THE WATER\nIF IN CONTACT, PERISHABLE'\n");
				puts("YOU DIED\n");

				exit(1);
			}
			keepLooping = 0;
		}
		else
		{
			fprintf(output, "Failed Attempt: %s\n", usertry);
		}

		fprintf(output, "\n");
	}
	rewind(output);
	fclose(output);

	if(strcmp(reddecision, "n") == 0)
	{
		puts("You said no\n");

		puts("You tried going back to the entrance and fell through a dirt hole and died, press f to pay respects\n");
		scanf(" %c", pressF);

		if(strcmp(pressF, "f") == 0)
		{
			exit(1);
		}
		else
		{
			puts("fine then, dont pay respects\n");
			exit(1);
		}
	}
}

void monikacase3(char greenchoice[])
{
	puts("Do you want to continue green path? (y or n)\n");
	scanf(" %s", greenchoice);

	if(strcmp(greenchoice, "y") == 0)
	{
		FILE *monikanothing;

		char filenothing[200] = "nothing.txt", nothingPrint;

		// Open file
		monikanothing = fopen(filenothing, "r");
		if(monikanothing == NULL)
		{
			printf("Wrong file name, retry \n");
			exit(0);
		}

		// Read contents from file
		nothingPrint = fgetc(monikanothing);
		while(nothingPrint != EOF)
		{
			printf("%c", nothingPrint);
			nothingPrint = fgetc(monikanothing);
		}

		puts("\nyoure welcome\n");
		fclose(monikanothing);
		exit(1);
	}
	else if(strcmp(greenchoice, "n") == 0)
	{
		int monikai = 0, monikasize = 5, monikasum = 0, monikaArray[monikasize];

		int *monikaPointer;
		monikaPointer = monikaArray;

		printf("Fine since you dont want to go the path you can play this boring calculator game\nInsert five numbers you want to add and find the sum of\n");
		for(monikai = 0; monikai < monikasize; monikai++)
		{
			scanf(" %d", &monikaArray[monikai]);
		}
		printf("Things inputted are: \n");

		monikasize = 5;
		for(monikai = 0; monikai < (monikasize - 1); monikai++)
		{
			printf("      %d\n", *monikaPointer);
			monikaPointer++;
		}

		monikasize = sizeof(*monikaPointer) / sizeof(int);
		printf("  +   %d \n---------\n", monikaPointer[monikasize - 1]);

		monikasum = 0;
		monikasize = 5;
		for(monikai = 0; monikai < monikasize; monikai++)
		{
			monikasum += monikaArray[monikai];
		}
		printf("sum : %d\n", monikasum);

		int monikaaverage = 0;
		monikaaverage = (double)monikasum / (double)monikasize;

		printf("Average: %.1lf\n", (double)monikaaverage);

		exit(1);
	}
}
