
#include <ostream>
#include <algorithm>
#include <vector>
#include <tuple>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <array>

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    os << "[";
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i];
        if (i < v.size()-1) os << ", ";
    }
    os << "]";
    return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<std::vector<T>>& v)
{
    os << "[";
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i];
        if (i < v.size()-1) os << ", " << std::endl;
    }
    os << "]";
    return os;
}

template <typename T, typename U>
std::ostream& operator<<(std::ostream& os, const std::pair<T, U>& p)
{
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

template <typename T, typename Tv>
std::ostream& operator<<(std::ostream& os, const std::map<T, Tv>& m)
{
    os << "{" << std::endl;
    for (const auto& p : m)
    {
        os << p.first << ": " << p.second << std::endl;
    }
    os << "}";
    return os;
}

template <typename T, typename Tv>
std::ostream& operator<<(std::ostream& os ,const std::unordered_map<T, Tv>& m)
{
    os << "{" << std::endl;
    for (const auto& p : m)
    {
        os << p.first << ": " << p.second << std::endl;
    }
    os << "}";
    return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os ,const std::set<T>& s)
{
    bool first = true;
    os << "{";
    for (const auto& i : s)
    {
        if (!first) os << ", ";
        first = false;
        os << i;
    }
    os << "}";
    return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os ,const std::unordered_set<T>& s)
{
    bool first = true;
    os << "{";
    for (const auto& i : s)
    {
        if (!first) os << ", ";
        first = false;
        os << i;
    }
    os << "}";
    return os;
}

template <typename V, size_t N>
std::ostream& operator<<(std::ostream& os, const std::array<V, N>& arr)
{
    os << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        os << arr[i];
        if (i < arr.size()-1) os << ", ";
    }
    os << "]";
    return os;
}

