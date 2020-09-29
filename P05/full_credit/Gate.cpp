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
            _input1 = false;
            _input2 = false;
            _to_gate = NULL;
            _to_pin = 0;

        };

        void connect(Gate& gate, Pin input_pin){ //This should be good
            _to_gate = &gate;
            _to_pin = input_pin;

        };

        void input(Pin pin, Signal signal){
            if(pin == 1)
                _input1 = signal;
            else
                _input2 = signal;
            
            
            if(_to_gate != NULL)
            {
                _to_gate->input(_to_pin,output());

            }
            
 
        };

        Signal input(Pin pin){ //This should be good 
            if(pin == 1)
                return _input1;
            else
                return _input2;

        };

        virtual Signal output() = 0; //This is good
    

};

class And: public Gate{ //This should be good
    public:
        Signal output() override{
            if(_input1 & _input2)
                return true;
            else
                return false;
        };
};

class Or: public Gate{ //This should be good
    public:
        Signal output() override{
            if(_input1 || _input2)
                return true;
            else
                return false;
              
        };

};

