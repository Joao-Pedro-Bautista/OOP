#include "CPUJoaoPedro.hpp"

void CPUJoaoPedro::receiveDigit(Digit digit)
{
  this->display->addDigit(digit);
  //  faz a convercao de um DIGIT para um INT e grava os INDEX do vetor de 8 digitos da caulculadora
  if (this->operation_count == 0)
  {
    // cout<<"entrou";
    switch (digit)
    {

    case ZERO:
      this->digitsOperands1[this->digit1_count] = 0;
      break;
    case ONE:
      this->digitsOperands1[this->digit1_count] = 1;
      break;
    case TWO:
      this->digitsOperands1[this->digit1_count] = 2;
      break;
    case THREE:
      this->digitsOperands1[this->digit1_count] = 3;
      break;
    case FOUR:
      this->digitsOperands1[this->digit1_count] = 4;
      break;
    case FIVE:
      this->digitsOperands1[this->digit1_count] = 5;
      break;
    case SIX:
      this->digitsOperands1[this->digit1_count] = 6;
      break;
    case SEVEN:
      this->digitsOperands1[this->digit1_count] = 7;
      break;
    case EIGHT:
      this->digitsOperands1[this->digit1_count] = 8;
      break;
    case NINE:
      this->digitsOperands1[this->digit1_count] = 9;
      break;

    default:
      this->display->error();

      break;
    }

    this->digit1_count++;
  }

  if (this->operation_count != 0)
  {
    switch (digit)
    {
    case ZERO:
      this->digitsOperands2[this->digit2_count] = 0;
      break;
    case ONE:
      this->digitsOperands2[this->digit2_count] = 1;
      break;
    case TWO:
      this->digitsOperands2[this->digit2_count] = 2;
      break;
    case THREE:
      this->digitsOperands2[this->digit2_count] = 3;
      break;
    case FOUR:
      this->digitsOperands2[this->digit2_count] = 4;
      break;
    case FIVE:
      this->digitsOperands2[this->digit2_count] = 5;
      break;
    case SIX:
      this->digitsOperands2[this->digit2_count] = 6;
      break;
    case SEVEN:
      this->digitsOperands2[this->digit2_count] = 7;
      break;
    case EIGHT:
      this->digitsOperands2[this->digit2_count] = 8;
      break;
    case NINE:
      this->digitsOperands2[this->digit2_count] = 9;
      break;

    default:
      this->display->error();
      break;
    }
    this->digit2_count++;
  }
}

void CPUJoaoPedro::receiveDigit(Digit digit){
    //guarda o digito no operando correspondente

    if(this->operation = NOOP) {
        this->digitsOperands1[this->digit2_count++] = digit;
    } else {
        this->digitsOperands2[this->digit2_count++] = digit;
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


