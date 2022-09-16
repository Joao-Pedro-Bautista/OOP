#pragma once
#include "console.hpp"
using namespace std;



enum Digit{ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

enum Ops{ADD, SUB, DIV, MULT, SQRT, PERCENTAGE, EQUAL, NOOP};

enum Control{CLEAR, RESET, OFF, ON_CLEAR_ERROR, MEMORY_READ_CLEAR, MEMORY_SUBTRACTION, MEMORY_ADDICTION};

enum Signal{POSITIVE, NEGATIVE};

Console console;

// *********************************************************************************************************


class Display{
public:
    virtual void addDigit(Digit digit) = 0;
    virtual void addOps(Ops operador)=0;
    virtual void clear()=0;
    virtual void addControl(Control cont)=0;
    virtual void setSignal(Signal sinal)=0;
};
class Keyboard;
class Key{
    public:
        virtual void press() = 0;
        virtual void setKeyboard(Keyboard&) = 0;
};

class Key;
class CPU;
class Keyboard{

public:
    virtual void receiveDigit(Digit) = 0;
    virtual void findKey(char) = 0;
    virtual void setCpu(CPU&) = 0;

};

class CPU{
public:
    virtual void receiveDigit(Digit) = 0;
    virtual void receiveOperation(Ops) = 0;
    virtual void receiveControl(Control) = 0;
    virtual void setDisplay(Display&) = 0;

};

class Calculator {

    Key* key;
    Keyboard* kb;
    CPU* cpu;
    Display* disp;
public:
    void setDisplay();
    void setKey();
    void setCPU();
    void setKeyboard();

};