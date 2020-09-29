#ifndef AND_H
#define AND_H

#include "Gate.h"

class And: public Gate{
    public:
        void output() override;
};

#endif