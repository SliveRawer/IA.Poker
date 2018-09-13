/*
 * Card.cpp
 *
 *  Created on: Apr 28, 2018
 *      Author: eisti
 */

#include "Card.h"

Card::Card()
:color(1), value(14)
{}

Card::Card(char c, int v)
:color(c), value(v)
{} // On part du principe que le gars qui rentre le nombre est pas totalement débile

void Card::printCard() const
{
	if (value == 14)
	{
		cout << "A" << color << endl;
	}
	else if (value == 13)
	{
		cout << "K" << color << endl;
	}
	else if (value == 12)
	{
		cout << "Q" << color << endl;
	}
	else if (value == 11)
	{
		cout << "J" << color << endl;
	}
	else
	{
		cout << value << color << endl;
	}
}

void Card::setCard(char c, int v)
{
	color = c;
	value = v;
}

int main(int argc, char** argv)
{
	Card cc1 = Card('H', 14);
	Card cc2 = Card('S', 11);

	cc1.printCard();
	cc2.printCard();

	bool c = (cc1.value > cc2.value);
	cout << c << endl;
	c = (cc1.color == cc2.color);
	cout << c << endl;

	cc2.setCard('H', 9);
	cc2.printCard();

	c = (cc1.value < cc2.value);
	cout << c << endl;
	c = (cc1.color == cc2.color);
	cout << c << endl;

	return 0;
}

Card::~Card()
{
	cout << "Suppression de la carte en cours." << endl;
}
