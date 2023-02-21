#include<iostream>
using namespace std;
class class_2;
class class_1
{
  private:
  int A;

  public:
  void input();
  friend void swap_values(class_1&,class_2&);
  void display()
  {
    cout<<"the value of A : "<<A<<"\n";
  }  
};

class class_2
{
    private:
    int B;

    public:
    void input();
    friend void swap_values(class_1&,class_2&);
    void display()
    {
        cout<<"the value of B : "<<B<<"\n";
    }
};
void class_1::input()
{
    cout<<"enter value of A : ";
    cin>>A;
}
void swap_values(class_1 &x,class_2 &y)
{
    int temp;
    temp=x.A;
    x.A=y.B;
    y.B=temp;
}
void class_2::input()
{
     cout<<"enter value of B :";
     cin>>B;
}
int main()
{
    class_1 a;
    class_2 b;

    a.input();
    b.input();

    swap_values(a,b);

    a.display();
    b.display();

    return 0;


}