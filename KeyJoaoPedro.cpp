#include "KeyJoaoPedro.hpp"
KeyJoaoPedro::KeyJoaoPedro(char symbol, Digit digit){

    this->symbol=symbol;
    this->digit=digit;
    this->isDigit=true;

};

KeyJoaoPedro::KeyJoaoPedro(char symbol, Ops operation){

    this->symbol=symbol;
    this->operation=operation;
    this->isOperation=true;

};

KeyJoaoPedro::KeyJoaoPedro(char symbol, Control control){

    this->symbol=symbol;
    this->control=control;
    this->isControl=true;

};

void KeyJoaoPedro::press(){

    if(this->isDigit) this->keyboard->receiveDigit(this->digit);
    if(this->isOperation) this->keyboard->receiveOperation(this->operation);
    if(this->isControl) this->keyboard->receiveControl(this->control);

};

void KeyJoaoPedro::setKeyboard(Keyboard& keyboard){

    this->keyboard = &keyboard;

};

char KeyJoaoPedro::getSymbol(){

    return this->symbol;

};
