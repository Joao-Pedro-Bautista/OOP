#include "DisplayJoaoPedro.hpp"
#include "console.hpp"
#include "CPUJoaoPedro.hpp"
#include <iostream>
#include <cstdio>

Console cons;
CPUJoaoPedro cpu;

void DisplayJoaoPedro::addDigit(Digit digit){
        switch (digit) {
            case ZERO: printf("0\n"); break;
            case ONE: printf("1\n"); break;
            case TWO: printf("2\n"); break;
            case THREE: printf("3\n"); break;
            case FOUR: printf("4\n"); break;
            case FIVE: printf("5\n"); break;
            case SIX: printf("6\n"); break;
            case SEVEN: printf("7\n"); break;
            case EIGHT: printf("8\n"); break;
            case NINE: printf("9\n"); break;

            default: break;
        }
    };
void DisplayJoaoPedro::addOps(Ops operador){

        switch (operador){
            case ADD: printf("+\n"); break;
            case SUB: printf("-\n"); break;
            case DIV: printf("/\n"); break;
            case MULT: printf("*\n"); break;
            case SQRT: printf("RAIZ\n"); break;
            case PERCENTAGE: cout << "%" <<endl;  break;

            default: break;
        }

    };
void DisplayJoaoPedro::clear(){cons.clear_screen();}
void DisplayJoaoPedro::addControl(Control cont){

        switch (cont){
            case CLEAR: cons.clear_screen(); break;
            case RESET: cons.clear_screen(); break;
            case EQUAL: printf("=\n"); break;
            default: break;
        }

    };
void DisplayJoaoPedro::setSignal(Signal sinal){
        switch (sinal){
            case NEGATIVE: printf("-");
        }

    };
void DisplayJoaoPedro::error(){

    printf("ERROR, VERIFIQUE NOVAMENTE");

}

void DisplayJoaoPedro::showResult(){

    cpu.receiveControl(EQUAL);

}