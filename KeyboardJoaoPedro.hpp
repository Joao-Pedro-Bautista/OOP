#pragma once
#include "calculator.hpp"

#define MAX_KEYS 23
class KeyboardJoaoPedro: public Keyboard{
private:
    CPU* cpu;
    Key* keys[MAX_KEYS];
    unsigned char keyCount;
public:
    void addKey(Key& key);
    void receiveDigit(Digit);
    void receiveOperation(Ops);
    void receiveControl(Control);
    Key& findKey(char);
    void setCpu(CPU&);
};