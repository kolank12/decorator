#ifndef MUSHROOM_DECORATOR_H
#define MUSHROOM_DECORATOR_H

#include "PizzaDecorator.h"

class MushroomDecorator : public PizzaDecorator {
public:
    MushroomDecorator(Pizza* pizza)
        : PizzaDecorator(pizza) {
    }

    std::string getDescription() override {
        return pizza->getDescription() + ", mushrooms";
    }
     

    double getPrice() override {
        return pizza->getPrice() + 15;
    }
};  

#endif