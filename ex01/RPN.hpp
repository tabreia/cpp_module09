#pragma once

#include <iostream>
#include <cstdlib>
#include <stack>

class RPN
{
        std::string expression;
        std::stack<char> stack;
        std::stack<int> numbs;

        void    fillStack();
        int     checkOperator(char operation);
        void    singleOperation();

    public:
        std::string getExpression(void) const;

        RPN(std::string input);
        RPN(RPN const &src);
        RPN &operator=(RPN const &src);
        ~RPN(void);
};