#include <gtest/gtest.h>

#include <vector>

#include "player.hpp"

struct TestPlayer : public ::testing::Test {
    Player player;
    std::vector<std::pair<int, int>> score{};
};

TEST_F(TestPlayer, checkScoreGameWithStrikeInTheMiddle) {
    score = {{1, 1}, {1, 1}, {1, 1}, {1, 1}, {10, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {1, 1}};
    player.countScore(score);
    ASSERT_EQ(player.getScore(), 30);
}

TEST_F(TestPlayer, checkScoreGameWithSpareInTheMiddle) {
    score = {{1, 1}, {1, 1}, {1, 1}, {1, 1}, {5, 5}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {1, 1}};
    player.countScore(score);
    ASSERT_EQ(player.getScore(), 29);
}
