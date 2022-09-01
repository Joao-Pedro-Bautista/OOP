#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include "calculator.hpp"
using namespace std;

int main (){
    Display d1;

    d1.addDigit(ONE);
    d1.addDigit(ZERO);
    d1.addOps(ADD);
    d1.addControl(RESET);
//    d1.setSignal(NEGATIVE);
//    d1.clear();


    return 0;
}