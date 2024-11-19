#ifndef CLPARCOURS3D_H
#define CLPARCOURS3D_H

#include "CLparcours.h"
#include "CLpoint3D.h"

class CLparcours3D : public CLparcours {
public:
    CLparcours3D(int maxPoints);
    virtual void message() override;
};

#endif

