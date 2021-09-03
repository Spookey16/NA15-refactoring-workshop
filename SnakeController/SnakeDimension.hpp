#pragma once

namespace Snake
{

struct Dimension
{
    int x;
    int y;

    bool operator==(Dimension const& rhs) const { return x == rhs.x and y == rhs.y; }

};

} // namespace Snake