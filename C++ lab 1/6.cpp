#include<iostream>
using namespace std;
class TIME
{
    private:
    int hours;
    int minutes;
    int seconds;

    public:
    void input()
    {
        cout<<"\nenter time in hours : ";
        cin>>hours;
        cout<<"enter time in minutes : ";
        cin>>minutes;
        cout<<"enter time in secsonds : ";
        cin>>seconds;
    }
    void add(TIME t1,TIME t2);
    void display()
    {
        cout<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds ";
    }
};
void TIME::add(TIME t1,TIME t2)
{
    seconds = t1.seconds+t2.seconds;
	minutes = seconds/60;
	seconds = seconds%60;
	minutes = minutes+t1.minutes+t2.minutes;
	hours=minutes/60;
	minutes=minutes%60;
	hours=hours+t1.hours+t2.hours;
}
int main()
{
    TIME T1, T2, T3;

    T1.input();
    cout<<"\nT1 = ";
    T1.display();

    T2.input();
    cout<<"\nT2 = ";
    T2.display();

    T3.add(T1,T2);
    cout<<"\n\nT3 = ";
    T3.display();

    return 0;

}