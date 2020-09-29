#ifndef OR_H
#define OR_H
#include "Gate.h"
class Or: public Gate{ //This should be good
    public:
        Signal output() override;

};
#endif