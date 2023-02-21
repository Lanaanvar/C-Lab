#include<iostream>
#include<cstring>
using namespace std;

class STRING_CAT
{
    private:
    char *name;
    int length;

    public:
    STRING_CAT()
    {
        length=0;
        name=new char[length+1];
    }
    STRING_CAT(const char *s)
    {
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s);
    }
    void display()
    {
        cout<<"the string is "<<name<<"\n";
    }
    void join(STRING_CAT &a,STRING_CAT &b)
    {
        length=a.length+b.length;
        delete name;
        name=new char[length +1];

        strcpy(name,a.name);
        strcat(name,b.name);
    }

    // STRING_CAT()
    // {

    // }
    void compare(STRING_CAT &a, STRING_CAT &b)
    {
        if (a.name != b.name)
        {
            cout << a.name << " is not equal to " << b.name << endl;
            if (a.name > b.name)
            {
                cout << a.name << " is greater than " << b.name << endl;
            }
            else
            {
                cout << b.name << " is greater than " << a.name << endl;
            }
        }
        else
        {
            cout << a.name << " is equal to " << b.name << endl;
        }
        
    }

};
int main()
{
    STRING_CAT s1("HELLO "), s2("WORLD"), s3;
    s3.join(s1,s2);
    s1.display();
    s2.display();
    s3.display();
    s3.compare(s1,s2);

    return 0;

}