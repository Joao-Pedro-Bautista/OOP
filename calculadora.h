using namespace std;


enum Digit{ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

enum Ops{ADD, SUB, DIV, MULT, SQRT, PERCENTAGE};

enum Control{CLEAR, EQUAL, RESET};

enum Signal{POSITIVE, NEGATIVE};

class Display{



};

class Key{

    Digit key0, key1, key2, key3, key4, key5, key6, key7, key8, key9;
    Ops add, sub, div, mult, sqrt, perc;
    Control clc, equal, reset;
    Signal pos, neg;
};

class Keyboard{

    Key* key[21];

};

class CPU{

    Key* key;
    Keyboard* keyboard;

};
