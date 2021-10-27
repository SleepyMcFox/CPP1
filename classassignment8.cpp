#include <iostream>
#include <vector>
#include <string>
//using namespace std;

bool AreOpposite(char c, char f)
{
    if(c == '(' && f == ')')
    {
        return true;
    }
    else if(c == '{' && f == '}')
    {
        return true;
    }
    else if(c == '[' && f == ']')
    {
        return true;
    }
    
    return false;
}

bool ParenthesesChecker(std::string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(!AreOpposite(s[i], s[s.length() - (i -1)]))
        [
            return false;
        ]
    }
    return true;
}



int main()
{

    ParenthesesChecker("({[]})");
    ParenthesesChecker("((({[[]]})))");
    ParenthesesChecker("(][{]])(}]");

}