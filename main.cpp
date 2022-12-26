#include <iostream>
#include <map>
#include "RollExpression.h"

#define ROLL_COUNT 100000
int main() {
    //Dice dices[] {Dice(1, 6)};
    //Dice dices[] {Dice(2, 6)};
    //Dice dices[] {Dice(3, 6)};
    //Dice dices[] {Dice(1, 10)};
    //Dice dices[] {Dice(2, 10)};
    DiceExpression dices[] {DiceExpression(3, 10)};
    std::map<int, int> result;
    for (int i = 0; i < ROLL_COUNT; ++i) {
        int singleResult = RollExpression(dices, 1);
        result[singleResult] += 1;
    }
    for (int i = 3; i < 31; ++i) {
        std::cout << i << " " << result[i] << std::endl;
    }
}
