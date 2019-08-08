#include "Deck.h"



Deck::Deck()
{
	this->generateDeck();
	this->shuffleDeck();
}


Deck::~Deck()
{
}

void Deck::drawCards(int cardsToDraw)
{
	// Only a maximum of 52 cards can be drawn.
	if (cardsToDraw > 52) {
		cardsToDraw = 52;
		cout << "Cannot draw more than 52 cards. Drawing 52 cards instead." << endl;
	}

	// Display each card that was drawn.
	for (int i = 0; i < cardsToDraw; i++) {
		cout << deck[i].getValue() + " of " + deck[i].getSuit() << endl;
	}
}

// Generate each card and populate the deck with them.
void Deck::generateDeck()
{
	for (int i = 0; i < SUITS; i++) {
		for (int j = 0; j < CARD_VALUES; j++) {
			Cards card(suits[i], values[j]);
			deck.push_back(card);
		}
	}
}

// Randomizes the order of the card objects in the deck vector.
void Deck::shuffleDeck()
{
	srand(unsigned(time(0)));
	random_shuffle(deck.begin(), deck.end());
}