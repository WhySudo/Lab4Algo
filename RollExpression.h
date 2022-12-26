

#ifndef LAB4ALGO_ROLLEXPRESSION_H
#define LAB4ALGO_ROLLEXPRESSION_H


#include "DiceExpression.h"
#include "ModifierExpression.h"

int RollExpression(DiceExpression* dices, int diceCount,ModifierExpression* modifiers = nullptr, int modifiersCount = 0){
    int result = 0;
    for (int i = 0; i < diceCount; ++i) {
        result += dices[i].Roll();
    }
    for (int i = 0; i < modifiersCount; ++i) {
        result = modifiers[i].Modify(result);
    }
    return result;
}
#endif //LAB4ALGO_ROLLEXPRESSION_H
