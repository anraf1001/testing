#include <iostream>
#include <string>

#include "game.hpp"

void oneParameter(const std::string& param) {
    if (param.front() == '-') {
        if (param == "-h" || param == "--help") {
            Game::printHelp();
            return;
        } else {
            std::cout << "Unknown parameter: " << param << '\n';
            return;
        }
    }
    //TODO: Add input path
}

void twoParameters(const std::string& param1, const std::string& param2) {
    std::cout << param1 << param2 << '\n';  //TODO: Implement this function
}

int main(int argc, char* argv[]) {
    if (argc == 1) {
        std::cout << "You haven't specified the path to the input files\n";
    } else if (argc >= 4) {
        std::cout << "Too many arguments\n";
    } else if (argc == 2) {
        oneParameter(argv[1]);
    } else {
        twoParameters(argv[1], argv[2]);
    }
    return 0;
}
