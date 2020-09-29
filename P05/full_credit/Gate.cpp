#include <iostream>
#include "Gate.h"



Gate::Gate(){
    _input1 = false;
    _input2 = false;
    _to_gate = NULL;
    _to_pin = 0;

};

void Gate::connect(Gate& gate, Pin input_pin){ //This should be good
    _to_gate = &gate;
    _to_pin = input_pin;

};

void Gate::input(Pin pin, Signal signal){
    if(pin == 1)
        _input1 = signal;
    else
        _input2 = signal;
    
    
    if(_to_gate != NULL)
    {
        _to_gate->input(_to_pin,output());

    }
    

};

Gate::Signal Gate::input(Pin pin){ //This should be good 
    if(pin == 1)
        return _input1;
    else
        return _input2;

};

        
    



