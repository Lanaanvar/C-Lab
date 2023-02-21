#include<iostream>
using namespace std;
class matrix
{
    int **p;
    int r,c;

    public:
    matrix(){};
    matrix(int, int);
    void input();
    void display();
    void add(matrix ,matrix);
    void transpose();
    void trace();
    //void mult(matrix, matrix);
};
matrix::matrix(int x, int y)
{
    for(int i=1; i<=x; i++)
    {
        r=x;
        c=y;

        p=new int *[r];

        for (int i=0; i<r; i++)
        {
            p[i]= new int [c];
        }
    }

}
void matrix::input()
{
    cout<<"enter the values row by row : ";

    for(int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cin>>p[i][j];
        }
    }
}
void matrix::display()
{
    cout<<" the matrix : "<<"\n";

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void matrix::add(matrix m1, matrix m2)
{

    cout<<"\nThe added matrix is : "<<"\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<m1.p[i][j]+m2.p[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void matrix::transpose()
{
    cout<<"\nThe transpose of a matrix is : "<<"\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<p[j][i]<<" ";
        }
        cout<<"\n";
    }
}
void matrix::trace()
{
    int sum=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(i==j)
            {
                sum+=p[i][j];
            }
        }
    }
    cout<<"The trace of the matrix is : "<<sum<<"\n";
}
// void matrix::mult(matrix m1, matrix m2)
// {
//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             cout<<m1.p[i][j]*m2.p[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// }
int main()
{

    int m,n;
    cout<<"enter no. of rows and columns ";
    cin>>m>>n;
    matrix a(m,n);
    a.input();
    a.display();
    a.transpose();
    a.trace();

    matrix b(m,n);
    b.input();
    b.display();
    b.transpose();
    b.trace();

    matrix c(m,n);
    c.add(a,b);
    //c.display();
    return 0;

    // matrix a(m,n);
    // a.input();
    // a.display();
    // return 0;
}