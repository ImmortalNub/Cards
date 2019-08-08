#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

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

