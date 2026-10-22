#pragma once
#ifndef BASIC_PIZZA_H
#define BASIC_PIZZA_H

#include "Pizza.h"

class BasicPizza : public Pizza {
public:
    std::string getDescription() override {
        return "Basic pizza";
    }

    double getPrice() override {
        return 100;
    }
};

#endif