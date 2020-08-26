#pragma once

#include <memory>
#include <string>
#include <vector>

#include "file.hpp"
#include "player.hpp"

enum class gameStatus {
    NoGame,
    InProgress,
    Finish
};

class BowlingLane {
public:
    BowlingLane(File file);
    void setPlayer();
    void showResult();
    void checkGameStatus();
    std::string convertEnumToString();
    void printResultToScreen();

private:
    gameStatus status_;
    std::string name_;
    std::unique_ptr<File> file_;
    std::vector<std::unique_ptr<Player>> players_;
};
