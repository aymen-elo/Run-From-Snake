//
// Created by Aymen on 13/09/2023.
//

#include "Person.h"

Person::Person(const string &name) {
    this->name = name;
    this->hp = 100;
    this->position = {0, 0};
}

Person::~Person() = default;

string Person::getName() const {
    return this->name;
}

int Person::getHp() const {
    return this->hp;
}

void Person::setHp(const int &hp) {
    this->hp = hp;
}

std::pair<int, int> Person::getPostion() const {
    return this->position;
}

void Person::setPosition(const int &x, const int &y) {
    this->position = {x, y};
}


void Person::addOneHp() {

    if(this->getHp() < 100)
        this->setHp(this->hp + 1);
}

void Person::minusOneHp() {

    if(this->getHp() > 0)
        this->setHp(this->hp - 1);
}

void Person::moveUp() {
    this->setPosition(this->position.first, this->position.second + 1);
}
void Person::moveDown() {
    this->setPosition(this->position.first, this->position.second - 1);
}
void Person::moveLeft() {
    this->setPosition(this->position.first -1, this->position.second);
}
void Person::moveRight() {
    this->setPosition(this->position.first + 1, this->position.second);
}