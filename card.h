// card.h
// Author: Devesh Mamidi
// All class declarations related to defining a single card go here

#ifndef CARD_H
#define CARD_H

#include <iostream>

using namespace std;

class Card {
    public:
        Card(const char& s, const char& r);
        char getSuit() const;
        char getRank() const;

        bool operator<(const Card& other) const;
        bool operator==(const Card& other) const;
        bool operator>(const Card& other) const;

        bool operator<=(const Card& other) const;
        bool operator!=(const Card& other) const;
        bool operator>=(const Card& other) const;
        
    private:
        char rank;
        char suit;
};

ostream& operator<<(ostream& out, const Card& c);

#endif
