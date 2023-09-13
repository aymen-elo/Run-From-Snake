//
// Created by Aymen on 13/09/2023.
//

#ifndef RUN_FROM_SNAKE_PERSON_H
#define RUN_FROM_SNAKE_PERSON_H

#include <string>
#include <iostream>

using std::cout, std::cin, std::string;

class Person {
private:
    string name;
    int hp;
    std::pair<int, int> position;

public:
    Person(const string & name);
    ~Person();

    string getName() const;
    void setName(const string & name);
    int getHp() const;
    void setHp(const int & hp);
    std::pair<int, int> getPostion();
    void setPosition(const std::pair<int, int> & position);
};


#endif //RUN_FROM_SNAKE_PERSON_H
