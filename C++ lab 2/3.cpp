#include<iostream>
using namespace std;
const int size=3;
class vector
{
    private:
    int v[size];

    public:
    vector(){};
    friend vector operator*(int k, vector&a);
    friend istream & operator >>(istream &din, vector&x);
    friend ostream & operator<< (ostream &dout, vector&x);
};
vector operator*(int k, vector&a)
{
    vector b;
    for(int i=0; i<3; i++)
    {
       b.v[i]=k*a.v[i];
    }
    return b;
}
istream & operator >>(istream &din, vector&x)
{
    for(int i=0; i<3; i++)
    {
        din>>x.v[i];
    }
    return din;
}
ostream & operator<< (ostream &dout, vector&x)
{
    dout<<"("<<x.v[0];
    for(int i=1; i<3; i++)
    {
        dout<<", "<<x.v[i];
    }
    dout<<" )"<<"\n";
    return dout;
}
int main()
{
    vector v1, v2;
    int a;
    cout<<"enter vector values for v1 : ";
    cin>>v1;
    cout<<v1;

    cout<<"enter constant : ";
    cin>>a;

    v2=a*v1;
    cout<<"\n"<<v2<<"\n";

    return 0;
}