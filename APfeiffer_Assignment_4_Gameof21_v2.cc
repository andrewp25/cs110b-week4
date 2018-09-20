#include <iostream>
using namespace std;

// Game of 21 cards

//Function Prototypes:

int displayMenu();
int main()
{
    displayMenu();
}

int displayMenu()
{
    // Array to hold full 21 card deck.
    const int FULL_DECK = 21;                   //Size declarator for arrays.
    int count;                             				     //Counter to print arrays.
	int deckChoice;								// For the user to choose the deck of the card.

	int full21CardDeckArray[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
    int pressZero = 0;

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

int cardPile1[7] = {1, 4, 7, 10, 13, 16, 19};
int cardPile2[7] = {2, 5, 8, 11, 14, 17, 20};
int cardPile3[7] = {3, 6, 9, 12, 15, 18, 21};

cout << "Pile 1: " << "\t" << "Pile 2: " <<  "\t" << "Pile 3: " <<  endl;

for (int count = 0; count < 7; count++)
	{
		cout << cardPile1[count] << "\t\t" << cardPile2[count] << "\t\t" << cardPile3[count] << endl;
	}
cout << "Please enter your selection below for the deck that contains your card: " << endl;

cin >> deckChoice;

int combinedDeck[21];

	switch (deckChoice)
	{
		//Assuming user picks pile 1, insert pile one in the middle of the pack and add all items in the new array.
		case 1:

		for (int count = 0; count < FULL_DECK; count++)
		{
			combinedDeck[count] = cardPile2[count];

			for (int count = 0;  count < 7;  count++)
			{
				combinedDeck[count + 7] = cardPile1[count];

				for (int count = 0; count < 7; count++)
				{
					combinedDeck[count + 14] = cardPile3[count];
				}
			}
		}

		// Print out the new suffled deck of cards.
		cout << "The shuffled deck is: " << endl;
		for (int count = 0; count < 21; count++)
		{
			cout << combinedDeck[count] << endl;
		}
		cout << "The card you chose is: " << combinedDeck[11] << endl;
		cout << "This is correct?" << endl;
		break;

		case 2:

		// Cycle cards first time.

		for (int count = 0; count < FULL_DECK; count++)
		{
			combinedDeck[count] = cardPile2[count];

			for (int count = 0;  count < 7;  count++)
			{
				combinedDeck[count + 7] = cardPile1[count];

				for (int count = 0; count < 7; count++)
				{
					combinedDeck[count + 14] = cardPile3[count];
				}
			}
		}

		//Cycle cards second time.

		for (int count = 0; count < FULL_DECK; count++)
		{
			combinedDeck[count] = cardPile2[count];

			for (int count = 0;  count < 7;  count++)
			{
				combinedDeck[count + 7] = cardPile1[count];

				for (int count = 0; count < 7; count++)
				{
					combinedDeck[count + 14] = cardPile3[count];
				}
			}
		}

		// Cycle cards third and final time.

		for (int count = 0; count < FULL_DECK; count++)
		{
			combinedDeck[count] = cardPile1[count];

			for (int count = 0;  count < 7;  count++)
			{
				combinedDeck[count + 7] = cardPile2[count];

				for (int count = 0; count < 7; count++)
				{
					combinedDeck[count + 14] = cardPile3[count];
				}
			}
		}
		// Print out the new suffled deck of cards.

		cout << "The shuffled deck is: " << endl;
		for (int count = 0; count < 21; count++)
		{
			cout << combinedDeck[count] << endl;
		}
		cout << "The card you chose is: " << combinedDeck[11] << endl;
		cout << "This is correct?" << endl;
		break;
	}
	return 0;
}
