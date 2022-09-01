#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif // DEBUG
#include "console.hpp"
#define MAX_DIGITS 8
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
using namespace std;



enum Digit{ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

enum Ops{ADD, SUB, DIV, MULT, SQRT, PERCENTAGE};

enum Control{CLEAR, EQUAL, RESET};

enum Signal{POSITIVE, NEGATIVE};

// *********************************************************************************************************



class Display{
    public:
        void addDigit(Digit digit){
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
        void addOps(Ops operador){

            switch (operador){
                case ADD: printf("+"); break;
                case SUB: printf("-"); break;
                case DIV: printf("/"); break;
                case MULT: printf("*"); break;
                case SQRT: printf("RAIZ"); break;
                case PERCENTAGE: printf("%"); break;

                default: break;
            }

        };
        void clear(){printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");}
        void addControl(Control cont){

                switch (cont){
                    case CLEAR: system("clear"); break;
                    case EQUAL: printf("="); break;
                    case RESET: system("clear"); break;
                    default: break;
                }

        };
        void setSignal(Signal sinal){
            switch (sinal){
                case NEGATIVE: printf("");
            }

        };

};

class Keyboard;
class Key{

    public:
        void press();
        void setKeyboard(Keyboard);
 
};

class Key;
class CPU;
class Keyboard{

    public:
        void findKey(char);
        void receiverDigit(int);
        void setCPU(CPU);
        
};

class CPU{
    public:
        void receiverDigit(int);
        void setDisplay(Display);

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