#include "game.hpp"

bool Game::getIsFinished() const {
    return isFinished_;
};

void Game::checkGameProgress(std::vector<std::pair<int, int>> score) {
    int lastNormalRound = 9;

    if (score.size() < 10) {
        isFinished_ = false;
    } else if ((score[lastNormalRound].first + score[lastNormalRound].second < 10) && (score.size() == 10)) {
        isFinished_ = true;
    } else if ((score[lastNormalRound].first + score[lastNormalRound].second == 10) &&
               (score[lastNormalRound].first != 10) && (score.size() == 11)) {
        isFinished_ = true;
    } else if ((score[lastNormalRound].first == 10) && (score[lastNormalRound + 1].first == 10) &&
               (score.size() == 12)) {
        isFinished_ = true;
    } else {
        isFinished_ = false;
    }
};
