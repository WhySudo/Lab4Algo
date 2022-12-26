//
// Created by nezio on 26.12.2022.
//

#ifndef LAB4ALGO_MODIFIEREXPRESSION_H
#define LAB4ALGO_MODIFIEREXPRESSION_H

class ModifierExpression{
public:
    virtual int Modify(int result) { return result; }
};
class AddModifierExpression: ModifierExpression{
private:
    int addition;
public:
    explicit AddModifierExpression(int addition) : addition(addition) {}
    int Modify(int result) override{
        return result + addition;
    }

};
#endif //LAB4ALGO_MODIFIEREXPRESSION_H
