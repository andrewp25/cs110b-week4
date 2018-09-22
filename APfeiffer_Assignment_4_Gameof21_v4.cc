#include <iostream>
using namespace std;

// Game of 21 cards

//Function Prototypes:

//int cardShuffle();
int displayMenu();
int deckChoice();
int cardShuffle1();
int cardShuffle2();
int cardShuffle3();

const int FULL_DECK = 21;

int main()
{
	displayMenu();
	deckChoice();
}

int displayMenu()
{
	const int FULL_DECK = 21;                   //Size declarator for arrays.
	int count;                             				     //Counter to print arrays.
	// Array to hold full 21 card deck.
	int full21CardDeckArray[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
	int pressZero = 0;								// Press 0 to start program.

	//Display the full list of card choices.
	cout << "The following choices are: " << endl;
	cout << endl;

	// Print the 21 Card Array for user to choose card.
	for (count = 0; count < FULL_DECK; count++)
	{
		cout << " " << full21CardDeckArray[count];
	}
	cout << endl;
	cout << endl;

	cout << "Please think of a number, when ready press 0" << endl;
	cin >> pressZero;
	cout << "Of the three decks of cards, please chose the number deck of the card you chose" << endl;

	// Arrays holding 3 decks of 7 cards each.
	int cardPile1[7] = {1, 4, 7, 10, 13, 16, 19};
	int cardPile2[7] = {2, 5, 8, 11, 14, 17, 20};
	int cardPile3[7] = {3, 6, 9, 12, 15, 18, 21};

	//Formatted colums to display card deck choices.
	cout << "Pile 1: " << "\t" << "Pile 2: " <<  "\t" << "Pile 3: " <<  endl;

	//Loop to print out the piles of cards formatted with the header.
	for (int count = 0; count < 7; count++)
		{
			cout << cardPile1[count] << "\t\t" << cardPile2[count] << "\t\t" << cardPile3[count] << endl;
		}

	return 0;
}

int deckChoice()
{
	// User entered value to see what pile/deck the card they chose is in.
	int whatCardPile;

	cout <<"What pile/deck has the card you picked?: " << endl;
	cin >> whatCardPile;

	switch (whatCardPile)
	{
		case 1: cardShuffle1();
		break;

		case 2: cardShuffle2();
		break;

		case 3: cardShuffle3();
		break;
	}
}

int cardShuffle1()
{
	// Constant value for array size of full deck of cards.
	const int FULL_DECK = 21;
	//Array to hold the complete 21 card deck of shuffled cards.
	int combinedDeck[FULL_DECK];
	//Three decks with 7 cards each to be shuffled.
	int cardPile1[7] = {1, 4, 7, 10, 13, 16, 19};
	int cardPile2[7] = {2, 5, 8, 11, 14, 17, 20};
	int cardPile3[7] = {3, 6, 9, 12, 15, 18, 21};

	// For loop shuffle 1st round.
	for (int count = 0; count < FULL_DECK; count++)
	{
		combinedDeck[count] = cardPile3[count];
	}
		for (int count = 0;  count < 7;  count++)
		{
			combinedDeck[count + 7] = cardPile1[count];
		}
			for (int count = 0; count < 7; count++)
			{
				combinedDeck[count + 14] = cardPile2[count];
			}
		// For loop shuffle 2nd round.
		for (int count = 0; count < FULL_DECK; count++)
		{
			combinedDeck[count] = cardPile1[count];
		}
			for (int count = 0;  count < 7;  count++)
			{
				combinedDeck[count + 7] = cardPile2[count];
			}
				for (int count = 0; count < 7; count++)
				{
					combinedDeck[count + 14] = cardPile3[count];
				}
			// For loop shuffle 3rd and final round.
			for (int count = 0; count < FULL_DECK; count++)
			{
				combinedDeck[count] = cardPile3[count];
			}
				for (int count = 0;  count < 7;  count++)
				{
					combinedDeck[count + 7] = cardPile2[count];
				}
					for (int count = 0; count < 7; count++)
					{
						combinedDeck[count + 14] = cardPile1[count];
					}

		cout << "The card you chose is: " << combinedDeck[10] << endl;
		cout << "This is correct?" << endl;

		return 0;
}


int cardShuffle2()
{
	// Constant value for array size of full deck of cards.
	const int FULL_DECK = 21;
	//Array to hold the complete 21 card deck of shuffled cards.
	int combinedDeck[FULL_DECK];
	//Three decks with 7 cards each to be shuffled.
	int cardPile1[7] = {1, 4, 7, 10, 13, 16, 19};
	int cardPile2[7] = {2, 5, 8, 11, 14, 17, 20};
	int cardPile3[7] = {3, 6, 9, 12, 15, 18, 21};

	// For loop shuffle 1st round.
	for (int count = 0; count < FULL_DECK; count++)
	{
		combinedDeck[count] = cardPile3[count];
	}
		for (int count = 0;  count < 7;  count++)
		{
			combinedDeck[count + 7] = cardPile2[count];
		}
			for (int count = 0; count < 7; count++)
			{
				combinedDeck[count + 14] = cardPile1[count];
			}
		// For loop shuffle 2nd round.
		for (int count = 0; count < FULL_DECK; count++)
		{
			combinedDeck[count] = cardPile3[count];
		}
			for (int count = 0;  count < 7;  count++)
			{
				combinedDeck[count + 7] = cardPile1[count];
			}
				for (int count = 0; count < 7; count++)
				{
					combinedDeck[count + 14] = cardPile2[count];
				}
			// For loop shuffle 3rd and final round.
			for (int count = 0; count < FULL_DECK; count++)
			{
				combinedDeck[count] = cardPile1[count];
			}
				for (int count = 0;  count < 7;  count++)
				{
					combinedDeck[count + 7] = cardPile2[count];
				}
					for (int count = 0; count < 7; count++)
					{
						combinedDeck[count + 14] = cardPile3[count];
					}

		cout << "The card you chose is: " << combinedDeck[10] << endl;
		cout << "This is correct?" << endl;

		return 0;
}

int cardShuffle3()
{
	// Constant value for array size of full deck of cards.
	const int FULL_DECK = 21;
	//Array to hold the complete 21 card deck of shuffled cards.
	int combinedDeck[FULL_DECK];
	//Three decks with 7 cards each to be shuffled.
	int cardPile1[7] = {1, 4, 7, 10, 13, 16, 19};
	int cardPile2[7] = {2, 5, 8, 11, 14, 17, 20};
	int cardPile3[7] = {3, 6, 9, 12, 15, 18, 21};

	// For loop shuffle 1st round.
	for (int count = 0; count < FULL_DECK; count++)
	{
		combinedDeck[count] = cardPile1[count];
	}
		for (int count = 0;  count < 7;  count++)
		{
			combinedDeck[count + 7] = cardPile3[count];
		}
			for (int count = 0; count < 7; count++)
			{
				combinedDeck[count + 14] = cardPile2[count];
			}
		// For loop shuffle 2nd round.
		for (int count = 0; count < FULL_DECK; count++)
		{
			combinedDeck[count] = cardPile3[count];
		}
			for (int count = 0;  count < 7;  count++)
			{
				combinedDeck[count + 7] = cardPile1[count];
			}
				for (int count = 0; count < 7; count++)
				{
					combinedDeck[count + 14] = cardPile2[count];
				}
			// For loop shuffle 3rd and final round.
			for (int count = 0; count < FULL_DECK; count++)
			{
				combinedDeck[count] = cardPile2[count];
			}
				for (int count = 0;  count < 7;  count++)
				{
					combinedDeck[count + 7] = cardPile3[count];
				}
					for (int count = 0; count < 7; count++)
					{
						combinedDeck[count + 14] = cardPile1[count];
					}

		cout << "The card you chose is: " << combinedDeck[10] << endl;
		cout << "This is correct?" << endl;

		return 0;
}
