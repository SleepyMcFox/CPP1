//For the given integer, give every possible valid
//parenthesis combinations
//For instance: 4 = (((()))) ()()()() (())(()) ()(()) 
//Solution:
//Use dynamic programming to solve this problem

#include <iostream>
#include <vector>
#include <string>


void gen(char curr[], int index, int l, int r, std::vector<std::string> * result)
{
    if(r == 0)
    {
        std::string str(curr);
        result->push_back(str);
    }
    if(l > 0)
    {
        curr[index] = '(';
        gen(curr, index + 1, l - 1, r, result);
    }
    if(r > 0)
    {
        curr[index] = ')';
        gen(curr, index + 1, l, r - 1, result);
    }


}
std::vector<std::string> *gen(int n)
{
    std::vector<std::string>* vect = new std::vector<std::string>();

    char input[n * 2];
    gen(input, 0, n, n, vect);
    return vect;
}


int main()
{
    std::vector<std::string> *ret = gen(4);

    for(auto r : *ret)
    {
        std::cout << r << std::endl;
    }

    delete(ret);
}