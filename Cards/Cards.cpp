#include "Cards.h"



Cards::Cards(string suit, string value)
{
	this->suit  = suit;
	this->value = value;
}

Cards::~Cards()
{
}

void Cards::setSuit(string suit)
{
	this->suit = suit;
}

void Cards::setValue(string value)
{
	this->value = value;
}

string Cards::getSuit()
{
	return this->suit;
}

string Cards::getValue()
{
	return this->value;
}
