#ifndef AND_H
#define AND_H
#include <iostream>

class Gate{

    protected:
        typedef int Pin;
        typedef bool Signal;
        Signal _input1;
        Signal _input2;

    private:
        Gate* _to_gate;
        Pin _to_pin;

    public:
        Gate();

        void connect(Gate& gate, Pin input_pin);

        void input(Pin pin, Signal signal);

        Signal input(Pin pin);

        virtual Signal output(); //This is good
    

};

#endif