/*
 * Card.h
 *
 *  Created on: Apr 28, 2018
 *      Author: eisti
 */

#ifndef CARD_H_
#define CARD_H_

#include <iostream>

using namespace std;

class Card {
public:
	Card();
	Card(char, int);

	void printCard() const;
	void setCard(char c, int v);

	virtual ~Card();

// Il faudrait mettre la suite en protected mais on y arrive pas pour le moment
	char color; // S pour Spade, H pour Heart, D pour Diamond et C pour Club
	int value;
};


#endif /* CARD_H_ */
