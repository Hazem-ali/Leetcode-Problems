#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Solution
{
public:
    bool isOperand(string s)
    {
        if (s.length() > 1)
        {
            return false;
        }
        const char *s_asChar = s.c_str();

        string operators = "+-*/";
        for (int i = 0; i < operators.length(); i++)
        {
            

            if (*s_asChar == operators[i])
            {
                
                return true;
            }
        }
        return false;
    }
    int evalRPN(vector<string> &tokens)
    {
        vector<long> myStack;

        int tokenSize = tokens.size();

        for (int i = 0; i < tokenSize; i++)
        {
            if (!isOperand(tokens[i]))
            {
                long tmp;
                stringstream(tokens[i]) >> tmp;
                myStack.push_back(tmp);
            }
            else
            {
                long a, b;
                
                // a is the right operand
                a = myStack[myStack.size() - 1];
                myStack.pop_back();

                // b is the left operand
                b = myStack[myStack.size() - 1];
                myStack.pop_back();

                switch (*tokens[i].c_str())
                {
                case '+':

                    myStack.push_back(b + a);
                    break;

                case '-':

                    myStack.push_back(b - a);
                    break;

                case '*':

                    myStack.push_back(b * a);
                    break;

                case '/':

                    myStack.push_back(b / a);
                    break;

                default:
                    break;
                }
            }
        }
        return myStack[0];
    }
};