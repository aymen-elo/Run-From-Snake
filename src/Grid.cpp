//
// Created by Aymen on 13/09/2023.
//

#include "Grid.h"

Grid::Grid(const int &height, const int &width) {

}

const std::pair<int, int> &Grid::getSize() const {
    return size;
}

void Grid::setSize(const int &height, const int& width) {
    Grid::size = {height, width};
}

const std::vector<std::vector<int>> &Grid::getGrid() const {
    return grid;
}


