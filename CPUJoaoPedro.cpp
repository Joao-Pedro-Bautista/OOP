#include "CPUJoaoPedro.hpp"


void CPUJoaoPedro::receiveDigit(Digit digit){
    //guarda o digito no operando correspondente

    if(this->operation = NOOP) {
        this->digitsOperands1[this->digitsOperant1Count++] = digit;
    } else {
        this->digitsOperands2[this->digitsOperant2Count++] = digit;
    }

    this->display->addDigit(digit);

}

void CPUJoaoPedro::receiveOperation(Ops operation){

    if (this->operation != NOOP && this->digitsOperands2 > 0)
    {

    }

    this->operation = operation;


}

void CPUJoaoPedro::receiveControl(Control control){

    switch (control)
    {
        case ON_CLEAR_ERROR:
            this->display->clear();
            break;

        default:
            break;
    }

}

void CPUJoaoPedro::setDisplay(Display& display){

    this->display = &display;

}


