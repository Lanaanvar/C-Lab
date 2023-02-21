#include<iostream>
using namespace std;
class bankTrans
{
    private:
    string cust_name;
    int acc_no;
    string acc_type;
    int balance;

    public:
    void new_acc();
    void withdraw();
    void deposit();
    void acc_bal()
    {
        cout<<"\nThe total balance in your account : "<<balance;
    }
    void acc_statement();
};

void bankTrans::new_acc()
{
    string a;
    int count=0;
    cout<<"\nWould you like to create a new account ? ";
    cin>>a;

    if(a=="yes")
    {
        count++;

        acc_no=count;

        cout<<"Enter name : ";
        cin>>cust_name;
        
        cout<<"what type of account are you looking to create : ";
        cin>>acc_type;

        cout<<"Your account number is : "<<acc_no<<"\n";

        cout<<"How much do you like to deposit? (initial deposit is to be made more than Rs 500) : ";
        cin>>balance;

        cout<<"Your account has been succesfully created"<<"\n";

    }
    else
    {
        exit(0);
    }
}
void bankTrans::withdraw()
{
    int wit;

    cout<<"\nEnter account number : ";
    cin>>acc_no;
    cout<<"Enter amount to withdraw : ";
    cin>>wit;

    balance=balance-wit;

    if(balance>500)
    {
        cout<<"withdrawn amount : "<<wit;
        cout<<"\nbalance amount : "<<balance;
    }
    else
    {
        cout<<"your account does not have sufficient balance";
    }
}
void bankTrans::deposit()
{
    int account_num;
    int dep,total;
    cout<<"\nEnter account number : ";
    cin>>account_num;

    if(account_num==acc_no)
    {
        cout<<"Bank balance : "<<balance<<"\n";
        cout<<"How much do you want to deposit : ";
        cin>>dep;

        balance=dep+balance;
        cout<<"\nTotal amount in your account : "<<balance;
    }
    else
    {
        cout<<"Invalid account number. kindly retry or report the problem. ";
    }
}
void bankTrans::acc_statement()
{
    int account_num;
    cout<<"\nPlease enter account number : ";
    cin>>account_num;

    if(account_num==acc_no)
    {
        cout<<"\n\nACCOUNT STATEMENT ";

        cout<<"\nAccount holder : "<<cust_name;
        cout<<"\nAccount number : "<<acc_no;
        cout<<"\nAccount type : "<<acc_type;
        cout<<"\nAccount balance : "<<balance<<"\n";
    }
    else
    {
        cout<<"Invalid account number. kindly retry or report the problem. ";
    }
}
int main()
{
    bankTrans cust[2];
    for(int i=0; i<2; i++)
    {
        int x;
        do
        {
            cout<<"\n\nEnter appropriate number ";
            cout<<"\n1 : Create new account ";
            cout<<"\n2 : Withdraw ";
            cout<<"\n3 : Deposit ";
            cout<<"\n4 : Account balance ";
            cout<<"\n5 : Account statement ";

            cout<<"\n\nEnter option you want to choose "<<"\n";
            
            cin>>x;

            switch (x)
            {
            case 1 : cust[i].new_acc(); break;
            case 2 : cust[i].withdraw(); break;
            case 3 : cust[i].deposit(); break;
            case 4 : cust[i].acc_bal(); break;
            case 5 : cust[i].acc_statement(); break;
            
            default:
                cout<<"Error in input ; try again\n";
            }
        } while (x!=5);
        
    }

    return 0;
}