template <class T> bool is_greater_than(T a, T b) {return a > b;}

struct T
{
    public:
        int val;
        bool operator>(T &rhs) {return this->val > rhs.val;}
};

int main()
{
    T t1 = T();
    T t2 = T();
    if(is_greater_than(t1,t2))
    {

    }
}
