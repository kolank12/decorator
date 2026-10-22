#ifndef CHEESE_DECORATOR_H
#define CHEESE_DECORATOR_H

#include "PizzaDecorator.h"

class CheeseDecorator : public PizzaDecorator {
public:
    CheeseDecorator(Pizza* pizza)
        : PizzaDecorator(pizza) {
    }

    std::string getDescription() override {
        return pizza->getDescription() + ", cheese";
    }


    double getPrice() override {
        return pizza->getPrice() + 20;
    }
};

#endif