#include "file.hpp"

std::vector<std::pair<int, int>> File::getScores() const {
    return score_;
}

void File::translateResultsToScoreVector(std::string results) {}
