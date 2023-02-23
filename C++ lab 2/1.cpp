#include<iostream>
#include<cmath>
using namespace std;
const int size=3;
class vector
{
    private:
    int a[size];
    float mag;

    public:
    vector(){};
    friend istream & operator >>(istream &din, vector&x);
    friend ostream & operator<< (ostream &dout, vector&x);
    float magnitude()
    {
        float sum=0;
        for(int i=0; i<3; i++)
        {
           sum+=a[i]*a[i];
        }
        mag=sqrt(sum);

        return mag;
    }
    void operator ==(vector&q)
    {
        int res;
        for(int i=0; i<3; i++)
        {
            if(a[i]==q.a[i])
            {
                res=1;
            }
            else
            {
                res=0;
                break;
            }
        }
        if(res==1)
        {
            cout<<"the vector elements are equal "<<"\n";
        }
        else
        {
            cout<<"the vectors elements are unequal "<<"\n";
        }
    }
    void operator !=(vector&q)
    {
        if (mag!=q.mag)
        {
            cout<<"the vector magnitudes are not equal "<<"\n";
        }
        else
        {
            cout<<"the vector magnitudes are equal "<<"\n";
        }
    }
    void operator <=(vector&q)
    {
        if (mag<=q.mag)
        {
            cout<<"vector 2 is greater than or equal to vector 1 "<<"\n";
        }
        else
        {
            cout<<"vector 1 is greater "<<"\n";
        }
    }
    void operator >=(vector&q)
    {
        if (mag>=q.mag)
        {
            cout<<"vector 1 is greater than or equal to vector 2 "<<"\n";
        }
        else
        {
            cout<<"vector 2 is greater "<<"\n";
        }
    }
    void operator >(vector&q)
    {
        if (mag==q.mag)
        {
            cout<<"vector 1 is equal to vector 2 "<<"\n";
        }
        else if(mag>q.mag)
        {
            cout<<"vector 1 is greater"<<"\n";
        }
        else
        {
            cout<<"vector 2 is greater "<<"\n";
        }
    }
    void operator <(vector&q)
    {
        if (mag==q.mag)
        {
            cout<<"vector 1 is equal to vector 2 "<<"\n";
        }
        else if(mag<q.mag)
        {
            cout<<"vector 1 is lesser"<<"\n";
        }
        else
        {
            cout<<"vector 2 is lesser "<<"\n";
        }
    }
    void display()
    {
        cout<<"magnitude : "<<mag<<"\n";
    }
};
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
    v1.magnitude();
    v1.display();

    vector v2;
    cout<<"enter vector values for v2 : ";
    cin>>v2;

    cout<<"\n";
    cout<<" vector v2 = "<<v2<<"\n";
    v2.magnitude();
    v2.display();

    v1==v2;
    v1!=v2;
    v1<v2;
    v1>v2;
    return 0;

}
