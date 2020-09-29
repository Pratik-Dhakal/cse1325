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
        Gate(){

        };

        void connect(Gate& gate, Pin input_pin){
            _to_gate = &gate;
            _to_pin = input_pin;

        };

        void input(Pin pin, Signal signal){

        };

        Signal input(Pin pin){
            if(pin == 1)
                return _input1;
            else
                return _input2;

        };

        virtual Signal output() = 0;
    

};

class And: public Gate{
    public:
        Signal output() override{
            if(_input1 & _input2)
                return true;
            else
                return false;
        };
};

class Or: public Gate{
    public:
        Signal output() override{
            if(_input1 || _input2)
                return true;
            else
                return false;
              
        };

};

