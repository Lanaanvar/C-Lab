//  to calculate the grades of a list of students with attributes (Name, Roll_no, Marks of 3 subjects) using class with member functions
// input(), calcGrade(), display()
#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll_num;
    int marks[3];

    public:
    void input();
    void calcGrade();
    void display();
};
void student::input()
{

        cout<<"enter the student name: ";
        cin>>name;

        cout<<"enter roll number: ";
        cin>>roll_num;

        cout<<"enter marks of 3 subjects: ";
        cin>>marks[0]>>marks[1]>>marks[2];    
    
}
void student::calcGrade()
{

        int total;
        total=0;

        for(int i=0; i<3; i++)
        {
            total+=marks[i];
        }

        if((total/3)>=90)
        {
            cout<<"GRADE = A";
        }
        else if((total/3)>=80)
        {
            cout<<"GRADE = B";
        }
        else
        {
            cout<<"GRADE = C";
        }
     cout<<"\n\n";

}
void student::display()
{
        
        cout<<"\n\nSTUDENT DETAILS"<<"\n";
        
        cout<<"STUDENT NAME : "<<name<<"\n";
        cout<<"ROLL NUMBER : "<<roll_num<<"\n";
    
}
int main()
{
    student s[2];
    for(int i=0; i<2; i++)
    {
        s[i].input();
        s[i].display();
        s[i].calcGrade();
    }
    return 0;

}
