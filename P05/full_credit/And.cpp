#include "And.h"

And::Signal And::output(){
    if(_input1 & _input2)
        return true;
    else
        return false;
};