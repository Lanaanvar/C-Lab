#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;

    public:
    complex();
    complex(float);
    complex(float, float);
    void add(complex, complex);
    void display();
};
complex::complex()
{
    real=0;
    imag=0;
}
complex::complex(float a)
{
    real=a;
    imag=a;
}
complex::complex(float a, float b)
{
    real=a;
    imag=b;
}
void complex::add(complex c1, complex c2)
{
    complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    cout<<"the complex number is : "<<c3.real<<" + "<<c3.imag<<" i"<<"\n";
}

void complex::display()
{
    cout<<"the complex number is : "<<real<<" + "<<imag<<" i"<<"\n";
}
int main()
{
    float r,i,k;
    cout<<"enter real part : ";
    cin>>r;
    cout<<"enter imag part : ";
    cin>>i;
    cout<<"enter real and imag part : ";
    cin>>k;

    complex c1(k);
    c1.display();
    complex c2(r,i);
    c2.display();
    complex c3;
    c3.add(c1, c2);

    return 0;
}