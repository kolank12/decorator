#pragma once
#ifndef PIZZA_H
#define PIZZA_H

#include <string>

class Pizza {
public:
    virtual std::string getDescription() = 0;
    virtual double getPrice() = 0;

    virtual ~Pizza() = default;
};

#endif