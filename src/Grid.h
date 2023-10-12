//
// Created by Aymen on 13/09/2023.
//

#ifndef RUN_FROM_SNAKE_GRID_H
#define RUN_FROM_SNAKE_GRID_H

#include <iostream>
#include <vector>

class Grid {
private:
    std::pair<int, int> size;
    std::vector<std::vector<int>> grid;

public:
    Grid(const int &height, const int &width);

    const std::pair<int, int> &getSize() const;
    void setSize(const int &height, const int &width);
    const std::vector<std::vector<int>> &getGrid() const;

};


#endif //RUN_FROM_SNAKE_GRID_H
