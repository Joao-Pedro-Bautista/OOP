#include <iostream>
#include "calculator.hpp"
#include "CPUJoaoPedro.hpp"
#include "DisplayJoaoPedro.hpp"
#include "KeyboardJoaoPedro.hpp"
#include "KeyJoaoPedro.hpp"

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
    display.showResult();
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
    d1.addOps(ADD);
    d1.addDigit(ONE);
    d1.addDigit(ZERO);
    d1.showResult(); 

    // c1.receiveDigit(ONE);
    // c1.receiveDigit(TWO);
    // c1.receiveDigit(THREE);
    // // c1.receiveControl(DEC_SEPARATOR);
    // c1.receiveDigit(FOUR);
    // c1.receiveOperation(ADD);
    // c1.receiveDigit(FIVE);
    // c1.receiveDigit(SIX);
    // c1.receiveDigit(SEVEN);
    // // c1.receiveControl(DEC_SEPARATOR);
    // c1.receiveDigit(EIGHT);
    // c1.receiveControl(EQUAL);



    return 0;
}