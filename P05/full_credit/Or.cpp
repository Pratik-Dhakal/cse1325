#include "Or.h"

Or::Signal Or::output(){
    if(_input1 || _input2)
        return true;
    else
        return false;
        
};

