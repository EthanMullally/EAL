#include <iostream>
#include <string>
#include <map>
enum Tokens{
    MOVE,
    ACCUMULATOR,
    STACK_POINTER,
    COUNTER,
    JUMP,
    COMPARE,
    JUMPLESS,
    JUMPEQUAL,
    JUMPNOTZERO,
    ADDITION,
    SUBTRACTION,
}

std::string translateToToken(std::string inp){
    std::map<std::string, int>mapping = {
        {"MOVE", MOVE},
        {"ACR", ACCUMULATOR},
        {"SPR", STACK_POINTER},
        {"CR", COUNTER},
        {"JUMPL", JUMPLESS},
        {"JUMPE", JUMPEQUAL},
        {"JUMPNZ", JUMPNOTZERO},
        {"JUMP", JUMP},
        {"ADD", ADDITION},
        {"SUB", SUBTRACTION},
    };
    for(int i = 0; i < 9; i++){
        if(mapping[i] == inp){
            return (std::string)mapping[inp];
            break;
        }else{
            return "The parser has found an invalid instruction: " + inp + "\n";
            break;
        }
    }
}