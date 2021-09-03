#include "SnakeWorld.hpp"

namespace Snake
{

World::World(int dimensionx,int  dimensiony, std::pair<int, int> food)
    : m_foodPosition(food)
{
    m_dimension.x = dimensionx;
 m_dimension.y=dimensiony;
 }

void World::setFoodPosition(std::pair<int, int> position)
{
    m_foodPosition = position;
}

std::pair<int, int> World::getFoodPosition() const
{
    return m_foodPosition;
}

bool World::contains(int x, int y) const
{
    return x >= 0 and x < m_dimension.x and y >= 0 and y < m_dimension.y;
}

} // namespace Snake
