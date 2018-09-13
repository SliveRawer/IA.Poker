/*
 * Hand.h
 *
 *  Created on: Sep 13, 2018
 *      Author: eisti
 */

#ifndef HAND_H_
#define HAND_H_

#include <iostream>

using namespace std;

class Hand {
public:
	Hand();
	Hand(Card, Card);

	void printHand() const;
	void setHand(Card C1, Card C2);

	virtual ~Hand();

// Il faudrait mettre la suite en protected mais on y arrive pas pour le moment
protected:
	Card Card1;
	Card Card2;

// Il faudra créer une matrice de la force de la main en 3D qui prends en arguments, les deux cartes, la position du joueur et surtout la range, on sépare les chiffre par des %
// UTG : AA, AK, AQ, 80% KK, QQ, JJ, 70% ...
};



#endif /* HAND_H_ */
