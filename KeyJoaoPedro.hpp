#pragma once
#include "calculator.hpp"   

class KeyJoaoPedro: public Key{
    private:
        Keyboard* keyboard;
        char symbol;
        Digit digit;
        Ops operation;
        Control control;
        bool isDigit = false;
        bool isOperation = false;
        bool isControl = false;
    public:
        KeyJoaoPedro(char, Digit);
        KeyJoaoPedro(char, Ops);
        KeyJoaoPedro(char, Control);
        void press();
        void setKeyboard(Keyboard&);
        char getSymbol();
};