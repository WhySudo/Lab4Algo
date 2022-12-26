

#ifndef LAB4ALGO_DICEEXPRESSION_H
#define LAB4ALGO_DICEEXPRESSION_H


#include <cstdlib>

class DiceExpression{

private:
    int sideCount;
    int attempts;

public:
    explicit DiceExpression(int attempts, int sideCount) : attempts(attempts), sideCount(sideCount){}

    int Roll(){
        int result = 0;
        for(int i = 0; i < attempts; i++){
            result += 1 + rand()%sideCount;
        }
        return result;
    }

};

#endif //LAB4ALGO_DICEEXPRESSION_H
