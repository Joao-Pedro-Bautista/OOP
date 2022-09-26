#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include "calculator.hpp"
#include "CPUJoaoPedro.hpp"
#include "DisplayJoaoPedro.hpp"

void testCpu(CPU& cpu){
    std::cout << "Testing CPU...\n";
    cpu.receiveControl(ON_CLEAR_ERROR);
    cpu.receiveDigit(ONE);
    cpu.receiveDigit(TWO);
    cpu.receiveDigit(THREE);
    cpu.receiveOperation(ADD);
    cpu.receiveDigit(FOUR);
    cpu.receiveDigit(FIVE);
    cpu.receiveDigit(SIX);
    cpu.receiveControl(EQUAL);
}

void testDisplay(Display& display){
    std::cout << "Testing DISPLAY...\n";
    display.setSignal(NEGATIVE);
    display.addDigit(ZERO);
    display.clear();
    display.addDigit(ZERO);
    display.addDigit(ZERO);
    display.addDigit(ONE);
    display.addDigit(TWO);
    display.addDigit(THREE);
    display.addDigit(FOUR);
    display.addDigit(FIVE);
    display.addDigit(ZERO);
    display.addDigit(ONE);
}


int main (){
    /* Fase de criação */
    /* Instancie suas implementações aqui */
    DisplayJoaoPedro d1;
    CPUJoaoPedro c1;

    /* Fase de construção/ligação */
    c1.setDisplay(d1);

    d1.addDigit(ONE);
    d1.addDigit(ZERO);
    d1.addOps(PERCENTAGE);
    d1.addDigit(ONE);
    d1.addDigit(ZERO);
    d1.addControl(EQUAL);
    




    return 0;
}