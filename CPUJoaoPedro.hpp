#pragma once
#include "calculator.hpp"
#define MAX_DIGITS 8

class CPUJoaoPedro: public CPU{
private:
    Display* display;
    Ops operation = NOOP;
    Digit digitsOperands1[MAX_DIGITS];
    Digit digitsOperands2[MAX_DIGITS];
    unsigned char digitsOperant1Count=0;
    unsigned char digitsOperant2Count=0;

public:
    void receiveDigit(Digit);
    void receiveOperation(Ops);
    void receiveControl(Control);
    void setDisplay(Display&);

};
