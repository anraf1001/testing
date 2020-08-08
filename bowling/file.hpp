#pragma once

#include <string>
#include <vector>

class File {
public:
    std::vector<std::pair<int, int>> getScores() const;
    void translateResultsToScoreVector(std::string results);

private:
    std::string results;
    std::vector<std::pair<int, int>> score_;
    void splitString(const std::string& str, std::vector<std::string>& vec, char delim);
};
