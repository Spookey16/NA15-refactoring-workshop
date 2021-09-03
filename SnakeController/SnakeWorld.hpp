#pragma once

#include <utility>
#include "SnakeDimension.hpp"
#include "SnakePosition.hpp"

namespace Snake
{

class World
{
public:
    World(int dimensionx,int  dimensiony, int foodx,int foody);

    void setFoodPosition(int positionx, int positiony);
    Position getFoodPosition() const;

    bool contains(int x, int y) const;

private:

    Dimension m_dimension;
    Position m_foodPosition;
 //   std::pair<int, int> m_dimension;
};

} // namespace Snake
