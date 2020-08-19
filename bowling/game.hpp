#pragma once
#include <vector>

constexpr int lastNormalRound = 9;
class Game {
public:
    void checkGameProgress(std::vector<std::pair<int, int>> score);
    bool getIsFinished() const;

private:
    bool isFinished_;
    bool checkEndConditionFor10Turns(std::vector<std::pair<int, int>> score);
    bool checkEndConditionFor11Turns(std::vector<std::pair<int, int>> score);
    bool checkEndConditionFor12Turns(std::vector<std::pair<int, int>> score);
};
