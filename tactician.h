#pragma once
#ifndef TACTICIAN_H
#define TACTICIAN_H

#include <iostream>
#include <string>

class Tactician {

    std::string tacticianName;
    int goldSpent;
    int playerLevel;
    int playerXP;

public:
    Tactician(std::string tactician_name, int gold_spent, int level, int playerXP);

    std::string get_tacticianName() const;
    int get_goldSpent() const;
    int get_level() const;
    int get_playerXP() const;

    void Shop(int level);
    void LevelUp();
};



#endif // TACTICIAN_H