// card.cpp
// Author: Jeremiah de Guzman
// Implementation of the classes defined in card.h
#include <unordered_map>
#include <iostream>
#include <string>

#include "card.h"

using namespace std;

const unordered_map<char, int> RM = {
    {'a', 1},
    {'2', 2},
    {'3', 3},
    {'4', 4},
    {'5', 5},
    {'6', 6},
    {'7', 7},
    {'8', 8},
    {'9', 9},
    {'1', 10},
    {'j', 11},
    {'q', 12},
    {'k', 13},
};

const unordered_map<char, int> SM = {
    {'c', 1},
    {'d', 2},
    {'s', 3},
    {'h', 4}
};

Card::Card(const char& s, const char& r) : rank(r), suit(s) {};

char Card::getSuit() const {
    return suit;
}

char Card::getRank() const {
    return rank;
}

bool Card::operator<(const Card& other) const {
    if(SM.at(suit) < SM.at(other.suit)) {
        return true;
    }
    if(SM.at(suit) > SM.at(other.suit)) {
        return false;
    }
    if(RM.at(rank) < RM.at(other.rank)) {
        return true;
    }
    return false;
}

bool Card::operator==(const Card& other) const {
    if(suit == other.suit && rank == other.rank) {
        return true;
    }
    return false;
}

bool Card::operator>(const Card& other) const {
    return !(*this < other || *this == other);
}

bool Card::operator!=(const Card& other) const {
    return !(*this == other);
}
bool Card::operator<=(const Card& other) const {
    return *this < other || *this == other;
}
bool Card::operator>=(const Card& other) const {
    return *this > other || *this == other;
}

ostream& operator<<(ostream& out, const Card& c) {
    string r(1, c.getRank());
    if(r == "1") {
        r = "10";
    }
    return out << c.getSuit() << " " << r;
}