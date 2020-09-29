#include "Gate.h"
class And: public Gate{ //This should be good
    public:
        Signal output() override{
            if(_input1 & _input2)
                return true;
            else
                return false;
        };
};