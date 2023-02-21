// 2-D matrix using constructors
#include <iostream>
using namespace std;
class matrix
{
    int **p;
    int d1, d2;

    public:
    matrix(int, int);
    void input();
    void display();
};
matrix::matrix(int x, int y)
{
    d1=x;
    d2=y;

    p=new int *[d1];

    for (int i=0; i<d1; i++)
    {
        p[i]= new int [d2];
    }
}
void matrix::input()
{
    cout<<"enter the values row by row ";
    for (int i=0; i<d1; i++)
    {
        for (int j=0; j<d2; j++)
        {
            cin>>p[i][j];
        }
    }
}
void matrix::display()
{
    for (int i=0; i<d1; i++)
    {
        for (int j=0; j<d2; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int m,n;
    cout<<"enter the number of rows and columns : ";
    cin>>m>>n;
    matrix A(m,n);
    A.input();
    A.display();
    return 0;
}