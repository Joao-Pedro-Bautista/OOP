#include "KeyboardJoaoPedro.hpp"




void KeyboardJoaoPedro::receiveDigit(Digit digit){

    this->cpu->receiveDigit(digit);

};

void KeyboardJoaoPedro::receiveOperation(Ops operation){

   this->cpu->receiveOperation(operation);

};

void KeyboardJoaoPedro::receiveControl(Control control){

   this->cpu->receiveControl(control);

};

Key& KeyboardJoaoPedro::findKey(char symbol){

    for (int i = 0; i < this->keyCount; i++)
    {
        if(this->keys[i]->getSymbol()==symbol)
            return *this->keys[i];
    }
    throw "KEY_NOT_FOUND";

};



void KeyboardJoaoPedro::setCpu(CPU& cpu){

    this->cpu = &cpu;

};

void KeyboardJoaoPedro::addKey(Key& key){

    this->keys[this->keyCount++]=&key;
    key.setKeyboard(*this);

};

