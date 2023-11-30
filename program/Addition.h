#ifndef ADDITION_H
#define ADDITION_H

#include "BinaryOperator.h"

class Addition : public BinaryOperator {
    public:
        Addition();
        float Calculate(float lhs, float rhs) const override;
};

#endif