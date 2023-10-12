#include <iostream>
#include "src/Person.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto *p = new Person("Aymen");

    cout << "\nThe person's name: " << p->getName();
    cout << "\nThe person's HP: " << p->getHp();

    return 0;
}
