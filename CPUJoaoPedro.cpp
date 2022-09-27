#include "CPUJoaoPedro.hpp"
#include <math.h>
#include <iostream>
using namespace std;

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

void CPUJoaoPedro::receiveOperation(Ops operation){

    if (this->operation_count > 0)
  {
    cout << "MATH ERROR operation is ready";
  }

  if (this->operation_count== 0)
  {
    this->operation = operation;
    this->operation_count++;
    cout << "\n";
  }
}

void CPUJoaoPedro::receiveSignal(Signal sig)
{
  if (sig == NEGATIVE)
  {
    this->signal == sig;
    this->sinal = -1;
    cout << "- \n";
  }
  if (sig == POSITIVE)
  {
    this->signal == sig;
    this->sinal = 1;
  }
}

void CPUJoaoPedro::receiveControl(Control control)
{
  this->display->addControl(control);
  // marca a posição do ponto flutuanse (DECIMAL SEPARATOR) e sinaliza aonde deve ser feita convercao de base

  if (control == DEC_SEPARATOR)
  {
    if (this->operation_count == 0)
    {
      this->index_decimal1 = digit1_count - 1;
      this->flagDec1++;
    }
    else
    {
      this->index_decimal2 = digit1_count - 1;
      this->flagDec2++;
    }
  }

  if (control == EQUAL)
  {
    float res = 0;
    // Transforma o numero em decimal por meio de multiplicacao da base 10
    float number1 = 0;
    int j = this->digit1_count - 1;
    if (this->flagDec1 > 0)
      j = index_decimal1;
    for (int i = 0; i <= this->digit1_count - 1; i++)
    {
      number1 = number1 + this->digitsOperands1[i] * pow(10, j);
      j--;
    }
    number1 *= this->sinal;
    receiveSignal(POSITIVE);

    float number2 = 0;
    j = this->digit2_count - 1;
    if (this->flagDec2 > 0)
      j = index_decimal2;
    for (int i = 0; i <= this->digit2_count - 1; i++)
    {
      number2 = number2 + this->digitsOperands2[i] * pow(10, j);
      j--;
    }
    number2 *= this->sinal;
    receiveSignal(POSITIVE);

    if (this->operation == ADD)
    {
      res = number1 + number2;
    }

    if (this->operation == SUB)
    {
      res = number1 - number2;
    }

    if (this->operation == DIV)
    {
      res = number1 / number2;
    }

    if (this->operation == MULT)
    {
      res = number1 * number2;
    }

    if (this->operation == PERCENTAGE)
    {
      res = (number1 / 100) * number2;
    }

    if (this->operation == SQRT)
    {
      res = sqrt(number1);
    }

    this->operation_count = 0;
    this->digit1_count = 0;
    this->digit2_count = 0;

    // imprimi o resultado
    cout << res;
    // guarda resultado num temporario
    this->result = res;
  }

  if (control == CLEAR)
  {
    this->operation_count = 0;
    this->digit1_count = -1;
    this->digit2_count = -1;
    this->index_decimal1 = 0;
    this->index_decimal2 = 0;
    this->result = 0;
  }

  if (control == RESET)
  {
    this->operation_count = 0;
    this->digit1_count = -1;
    this->digit2_count = -1;
    this->result = 0;
    receiveSignal(POSITIVE);
  }
}

void CPUJoaoPedro::setDisplay(Display& display){

    this->display = &display;

}


