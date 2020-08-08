#pragma once

#include <string>
#include <vector>

class File {
public:
    std::vector<std::pair<int, int>> getScores() const;
    std::string getResults() const;
    void translateResultsToScoreVector(std::string results);
    void readFile(std::string filename);

private:
    std::string results_;
    std::vector<std::pair<int, int>> score_;
    void splitString(const std::string& str, std::vector<std::string>& vec, char delim);
};
