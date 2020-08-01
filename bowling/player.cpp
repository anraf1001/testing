#include "player.hpp"

int Player::getScore() const {
    return score_;
}

void Player::setScore(int score) {
    score_ = score;
}

void Player::countScore(std::vector<std::pair<int, int>> score) {
    bool strike = false;
    bool spare = false;
    int result = 0;
    int single_result = 0;

    for (const auto& it : score) {
        single_result = 0;
        if (strike) {
            strike = false;
            single_result += it.first;
            single_result += it.second;
            single_result *= 2;

            result += single_result;
        } else if (spare) {
            spare = false;
            single_result += it.first;
            single_result *= 2;
            single_result += it.second;

            result += single_result;
        } else {
            single_result += it.first;
            single_result += it.second;

            result += single_result;
        }

        if (it.first == 10) {
            strike = true;
        }

        if ((it.first + it.second == 10) && (it.first != 10)) {
            spare = true;
        }
    }
    Player::setScore(result);
}
