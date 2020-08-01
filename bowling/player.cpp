#include "player.hpp"

int Player::getScore() const {
    return score_;
}

void Player::setScore(int score) {
    score_ = score;
}

void Player::countScore(std::vector<std::pair<int, int>> score) {
    int result = 0;
    int single_result = 0;
    int multiplier = 1;
    for (const auto& it : score) {
        single_result = 0;
        single_result += it.first;
        single_result += it.second;
        single_result *= multiplier;

        result += single_result;

        multiplier = 1;

        if (it.first == 10) {
            multiplier = 2;
        }
    }
    Player::setScore(result);
}
