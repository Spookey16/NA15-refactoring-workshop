#pragma once

#include <utility>
#include "SnakeDimension.hpp"

namespace Snake
{

class World
{
public:
    World(int dimensionx,int  dimensiony, std::pair<int, int> food);

    void setFoodPosition(std::pair<int, int> position);
    std::pair<int, int> getFoodPosition() const;

    bool contains(int x, int y) const;

private:

    Dimension m_dimension;
    std::pair<int, int> m_foodPosition;
 //   std::pair<int, int> m_dimension;
};

} // namespace Snake
