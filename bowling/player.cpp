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

    for (int i = 0; i <= 9; i++) {
        single_result = 0;

        if (score[i].first == 10) {
            strike = true;
            if (score[i + 1].first == 10) {
                result += (score[i].first + score[i + 1].first + score[i + 2].first);
            } else {
                result += (score[i].first + score[i + 1].first + score[i + 1].second);
            }
            continue;
        }

        if ((score[i].first + score[i].second == 10) && (score[i].first != 10)) {
            spare = true;
            result += (score[i].first + score[i].second + score[i + 1].first);
            continue;
        }

        result += (score[i].first + score[i].second);
    }
    Player::setScore(result);
}
