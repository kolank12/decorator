#ifndef PIZZA_DECORATOR_H
#define PIZZA_DECORATOR_H

#include "Pizza.h"

class PizzaDecorator : public Pizza {
protected:
    Pizza* pizza;

public:
    PizzaDecorator(Pizza* pizza) {
        this->pizza = pizza;
    }
};

#endif