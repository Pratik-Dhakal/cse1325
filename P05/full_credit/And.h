#ifndef OR_H
#define OR_H

#include "Gate.h"
class And: public Gate{ //This should be good
    public:
        Signal output() override;
};
#endif