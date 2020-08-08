#include "game.hpp"

bool Game::getIsFinished() const {
    return isFinished_;
};

void Game::checkGameProgress(std::vector<std::pair<int, int>> score) {
    isFinished_ = false;
};
