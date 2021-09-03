#include "SnakeWorld.hpp"

namespace Snake
{

World::World(int dimensionx,int  dimensiony, int foodx, int foody)
 
{
    m_foodPosition.x = foodx;
    m_foodPosition.y = foody;
    m_dimension.x = dimensionx;
    m_dimension.y = dimensiony;
 }

void World::setFoodPosition(int positionx, int positiony)
{
    m_foodPosition.x = positionx;
    m_foodPosition.y = positiony;
}

Position World::getFoodPosition() const
{
    return m_foodPosition;
}

bool World::contains(int x, int y) const
{
    return x >= 0 and x < m_dimension.x and y >= 0 and y < m_dimension.y;
}

} // namespace Snake
