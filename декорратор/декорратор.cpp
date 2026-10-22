#include <iostream>

#include "BasicPizza.h"
#include "CheeseDecorator.h"
#include "MushroomDecorator.h"


int main() {

    Pizza* pizza = new BasicPizza();

    std::cout << pizza->getDescription() << std::endl;
    std::cout << pizza->getPrice() << std::endl;

    pizza = new CheeseDecorator(pizza);
    pizza = new MushroomDecorator(pizza);

    std::cout << pizza->getDescription() << std::endl;
    std::cout << pizza->getPrice() << std::endl;


	
    return 0;
}