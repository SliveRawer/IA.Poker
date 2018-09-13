/*
 * Hand.cpp
 *
 *  Created on: Sep 13, 2018
 *      Author: eisti
 */

#include "Hand.h"

Hand::Hand()
:Card1(Card()),Card2(Card('S',2))
{}

Hand::Hand(Card C1, Card C2);

void Hand::printHand() const;

void Hand::setHand(Card C1, Card C2);

virtual Hand::~Hand();
