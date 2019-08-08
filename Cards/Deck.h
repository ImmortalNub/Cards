#include "Cards.h"

#pragma once
class Deck
{
public:
	Deck();
	~Deck();
	void drawCards(int cardsToDraw);
	void shuffleDeck();

private:
	const int SUITS = 4;
	const int CARD_VALUES = 13;

	// The sum of these two vectors must be 52!!
	vector<Cards> deck;

	string suits[4]{
		"Spades",
		"Clubs",
		"Hearts",
		"Diamonds"
	};

	string values[13]{
		"Ace",
		"Two",
		"Three",
		"Four",
		"Five",
		"Six",
		"Seven",
		"Eight",
		"Nine",
		"Ten",
		"Jack",
		"Queen",
		"King"
	};

	void generateDeck();
};

