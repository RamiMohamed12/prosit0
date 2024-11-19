#ifndef CLPARCOURS2D_H
#define CLPARCOURS2D_H

#include "CLparcours.h"
#include "CLpoint.h"

class CLparcours2D : public CLparcours {
public:
    CLparcours2D(int maxPoints);
    virtual void message() override;
};

#endif

