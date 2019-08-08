#include "BaseHeader.h"
#pragma once
class Cards
{
public:
	Cards(string suit, string value);
	~Cards();
	void setSuit(string suit);
	void setValue(string value);
	string getSuit();
	string getValue();

private:
	string suit;
	string value;
};

