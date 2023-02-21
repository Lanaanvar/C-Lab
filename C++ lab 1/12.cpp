#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;

    public:
    complex(){};
    complex(float r, float i)
    {
        real=r;
        imag=i;
    }
    friend complex add(complex, complex);
    void display()
    {
        cout<<real<<" + "<<imag<<" i "<<"\n";
    }
};

complex add(complex a, complex b)
{
    complex c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;

    return c;
}
int main()
{
        
    float r,i;
    
    cout<<"enter value for real part : ";
    cin>>r;
    cout<<"enter value for imaginary part : ";
    cin>>i;
    complex C1(r,i);

    C1.display();

        
    cout<<"enter value for real part : ";
    cin>>r;
    cout<<"enter value for imaginary part : ";
    cin>>i;
    complex C2(r,i);

    C2.display();

    complex C3;
    C3=add(C1, C2);
    C3.display();
    return 0;

}