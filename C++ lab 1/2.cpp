#include<iostream>
#include<cmath>
using namespace std;

double area(double r);
int area(int l, int b);
int area(int a);
int area(int a,int b,int c);
double area(int a, int b, double h);

int main()
{
    int a,b,c;
    float r,h;

    cout<<"enter side of triangle ";
    cin>>a>>b>>c;
    cout<<"\nenter side of square ";
    cin>>a;
    cout<<"\nenter radius of circle ";
    cin>>r;
    cout<<"\nenter length and breadth of rectangle ";
    cin>>a>>b;
    cout<<"\nenter length of parallel sides and height of trapezium ";
    cin>>a>>b>>h;


    cout<<"area of a triangle= "<<area(a,b,c)<<"\n";
    cout<<"area of square= "<<area(a)<<"\n";
    cout<<"area of circle= "<<area(r)<<"\n";
    cout<<"area of rectangle= "<<area(a,b)<<"\n";
    cout<<"area of trapezium= "<<area(a,b,h);

    return 0;
}

double area(double r)
{
    return 3.14*r*r;
}
int area(int l, int b)
{
    return int(l*b);
}
int area(int a)
{
    return a*a;
}
int area(int a, int b, int c)
{
    int s= (a+b+c)/2;

    return sqrt(s*(s-a)*(s-b)*(s-c));
}
double area(int a, int b, double h)
{
    return float(((a+b)*h)/2);
}