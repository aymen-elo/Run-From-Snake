//
// Created by Aymen on 13/09/2023.
//

#ifndef RUN_FROM_SNAKE_PERSON_H
#define RUN_FROM_SNAKE_PERSON_H

#include <string>
#include <iostream>

using std::cout, std::cin, std::string;

/* A person has a name and health points.
 * The person is controlled by the user.
 * The user can move the person on a grid.
 * The person dies if their hps are below 0.
 *
 * *Hps = Health points
 * */

class Person {
private:
    string name;
    int hp;
    std::pair<int, int> position;

public:
    Person(const string & name);
    ~Person();

    string getName() const;
    int getHp() const;
    void setHp(const int & hp);
    std::pair<int, int> getPostion() const;
    void setPosition(const int &x, const int &y);

    //Health bar
    void addOneHp();
    void minusOneHp();

    //Movement
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
};


#endif //RUN_FROM_SNAKE_PERSON_H
