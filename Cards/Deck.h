#include "BaseHeader.h"
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

