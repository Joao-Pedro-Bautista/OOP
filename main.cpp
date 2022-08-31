#include <iostream>
#include <cstdio>
#include <string>
using namespace std;


enum Digit{ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

enum Ops{ADD, SUB, DIV, MULT, SQRT, PERCENTAGE};

enum Control{CLEAR, EQUAL, RESET};

enum Signal{POSITIVE, NEGATIVE};

class Display{



};

class CPU{



};

class Key{

    Digit key0=ZERO, key1=ONE, key2=TWO, key3=THREE, key4=FOUR, key5=FIVE, key6=SIX, key7=SEVEN, key8=EIGHT, key9=NINE;
    Ops add=add, sub=SUB, div=DIV, mult=MULT, sqr=SQRT, percentage=PERCENTAGE;
    Control clc=CLEAR, equal=EQUAL, reset=RESET;
    Signal pos=POSITIVE, neg=NEGATIVE;

};

class Keyboard{

    Key* key[50];

};
