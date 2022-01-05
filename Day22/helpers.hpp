#include <bits/stdc++.h>

struct Point
{
    int x, y, z;
};

struct Region
{
    Point a, b;
};

struct Instruction
{
    bool on;
    Region region;
};

inline bool operator<(const Point& a, const Point& b)
{
    if (a.x != b.x) return a.x < b.x;
    if (a.y != b.y) return a.y < b.y;
    return a.z < b.z;
}

inline bool operator==(const Point& a, const Point& b)
{
    return a.x == b.x && a.y == b.y && a.z == b.z;
}

inline bool operator!=(const Point& a, const Point& b)
{
    return a.x != b.x || a.y != b.y || a.z != b.z;
}

inline bool operator<(const Region& r1, const Region& r2)
{
    if (r1.a != r2.a) return r1.a < r2.a;
    return r1.b < r2.b;
}


std::ostream& operator<<(std::ostream& os, const Point& p)
{
    os << "(" << p.x << "," << p.y << "," << p.z << ")";
    return os;
}

std::ostream& operator<<(std::ostream& os, const Region& r)
{
    os << r.a << " - " << r.b;
    return os;
}

std::ostream &operator<<(std::ostream &os, const Instruction &i)
{
    os << (i.on ? "on" : "off") << ": " << i.region;
    return os;
}

