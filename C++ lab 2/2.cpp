#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;

    public:
    complex(){};
    void input()
    {
        cout<<"enter real part : ";
        cin>>real;

        cout<<"enter imaginary part : ";
        cin>>imag;

    }
    friend complex operator+(complex&, complex&);
    friend complex operator*(complex&, complex&);
    void display();
};

complex operator+(complex&a, complex&b)
{
    complex c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;

    return c;
}
complex operator*(complex&a, complex&b)
{
    complex t;
    t.real=a.real*b.real-1*(a.imag*b.imag);
    t.imag=(a.real*b.imag)+(a.imag*b.real);
    
    return t;
}
void complex::display()
{
    cout<<real<<" + "<<imag<<" i "<<"\n\n";
}

int main()
{
    complex c1, c2, c3,c4;
    c1.input();
    c1.display();
    c2.input();
    c2.display();

    c3=c1+c2;
    cout<<"Addition : "<<"\n";
    c3.display();

    c4=c1*c2;
    cout<<"Multiplication : "<<"\n";
    c4.display();

    return 0;
}