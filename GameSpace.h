#ifndef Gamespace_h
#define Gamespace_h

#include <iostream>
#include <vector>
#include <random>

namespace Gamespace
{
    std::vector<int> Random_number(int Range_Min, int Range_Max, int size);
    void Difficulty_level(std::vector<int> &vec, int &rand_scalar);
    void Quests(std::vector<int> &vec, int rand_scalar);
    int genran(int low, int high);
}

#endif