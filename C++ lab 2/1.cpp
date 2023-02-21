#include<iostream>
using namespace std;
const int size=3;
class vector
{
    private:
    int a[size];

    public:
    vector(){};
    friend void operator ==(vector&p, vector&q);
    friend istream & operator >>(istream &din, vector&x);
    friend ostream & operator<< (ostream &dout, vector&x);
};
void operator ==(vector&p, vector&q)
{
    int res;
    for(int i=0; i<3; i++)
    {
        if(p.a[i]==q.a[i])
        {
            res=1;
        }
        else
        {
            res=0;
        }
    }
    if(res==1)
    {
        cout<<"the vectors are equal ";
    }
    else
    {
        cout<<"the vectors are unequal ";
    }
}
istream & operator >>(istream &din, vector&x)
{
    for(int i=0; i<3; i++)
    {
        din>>x.a[i];
    }
    return din;
}
ostream & operator<< (ostream &dout, vector&x)
{
    dout<<"("<<x.a[0];
    for(int i=1; i<3; i++)
    {
        dout<<", "<<x.a[i];
    }
    dout<<" )"<<"\n";
    return dout;
}
int main()
{
    vector v1;
    cout<<"enter vector values for v1 : ";
    cin>>v1;

    cout<<"\n";
    cout<<" vector v1 = "<<v1<<"\n";

    vector v2;
    cout<<"enter vector values for v2 : ";
    cin>>v2;

    cout<<"\n";
    cout<<" vector v2 = "<<v2<<"\n";

    v1==v2;
    return 0;


}
