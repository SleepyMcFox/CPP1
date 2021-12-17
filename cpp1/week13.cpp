#include <iostream>
#include <vector>

struct MyType
{
    MyType()
    {
        std::cout << "Huzzah for being alive!" << std::endl;
    }

    MyType(const MyType &src) = default;

    //Moving the data structure without a pointer 
    MyType(const MyType &&src)
    {
        std::cout << "I've been moved!" << std::endl;
    }
    //Destructor
    ~MyType() {std::cout << "I'm terminated x-x" << std::endl;}
};

// int get_something(MyType t) 
// {
//     std::cout << "Hit" << std::endl;
//     return 0;
// }
// //How to fix copies in 2011, moving the value and then discarding the other copy
// MyType &&foo()
// {
//     MyType t = MyType();
//     return std::move(t);
// }
// //How to fix copies in 1998
// void foo(MyType *t)
// {
//     std::cout << t << std::endl;
// }

void foo(std::vector<MyType> t) {}

int main()
{
    std::vector<MyType> types = std::vector<MyType>();
    types.push_back(MyType());
    types.push_back(MyType());
    types.push_back(MyType());
    types.push_back(MyType());

    foo(types);

}