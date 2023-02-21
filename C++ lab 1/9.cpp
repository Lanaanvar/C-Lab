#include<iostream>
using namespace std;
class obj
{
    static int count;

    public:
    void code()
    {
        int code;
        code=count++;
    }
    static void show_count()
    {
        cout<<"\nObject number : "<<count;
    }
};

int obj::count=1;

int main()
{
    obj obj1, obj2, obj3;
    obj::show_count();
    obj1.code();
    obj::show_count();
    obj2.code();
    obj::show_count();
    obj3.code();
    obj::show_count();

    return 0;
}