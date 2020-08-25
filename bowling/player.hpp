#pragma once
#include <vector>
#include <string>

#include "game.hpp"

class Player {
public:
    Player();
    Player(std::string name, std::vector<std::pair<int, int>> points);
    std::string getName() const;
    int getScore() const;
    void setScore(int score);
    void countScore(std::vector<std::pair<int, int>> score);
    void setPoints(std::vector<std::pair<int, int>> points);
    std::string getInfo();

private:
    std::string name_;
    int score_;
    std::vector<std::pair<int, int>> points_ {};
};
