#pragma once
#include "calculator.hpp"


class DisplayJoaoPedro:public Display {

    public:
        void addDigit(Digit digit);
        void addOps(Ops operation);
        void clear();
        void addControl(Control cont);
        void setSignal(Signal signal);
        void error();

};