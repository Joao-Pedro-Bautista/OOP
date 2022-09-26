#pragma once
#include "calculator.hpp"
#define MAX_DIGITS 8

class CPUJoaoPedro: public CPU{
private:
    Display* display;
    Ops operation = NOOP;
    int digitsOperands1[MAX_DIGITS] = {0,0,0,0,0,0,0,0};
    int digitsOperands2[MAX_DIGITS] = {0,0,0,0,0,0,0,0};
    int digit1_count = 0;
    int digit2_count = 0;
    int operation_count = 0;
public:
    void receiveDigit(Digit);
    void receiveOperation(Ops);
    void receiveControl(Control);
    void setDisplay(Display&);

};
