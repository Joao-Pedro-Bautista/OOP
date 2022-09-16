#include "DisplayJoaoPedro.hpp"
#include "console.hpp"
#include <iostream>
#include <cstdio>

Console console;

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
            case PERCENTAGE: printf("%\n"); break;
            case EQUAL: printf("=\n"); break;

            default: break;
        }

    };
void DisplayJoaoPedro::clear(){console.clear_screen();}
void DisplayJoaoPedro::addControl(Control cont){

        switch (cont){
            case CLEAR: console.clear_screen(); break;
            case RESET: console.clear_screen(); break;
            default: break;
        }

    };
void DisplayJoaoPedro::setSignal(Signal sinal){
        switch (sinal){
            case NEGATIVE: printf("-");
        }

    };