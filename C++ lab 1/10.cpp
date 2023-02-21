#include<iostream>
using namespace std;
// code name price quantity of each item
class shopping
{
    private:

    int code=0;
    string name[50];
    float price[50];
    int quantity[50];

    public:
    /*void cnt()
    {
        count=0;
    }*/
    void add();
    void del();
    void total();
};

void shopping::add()
{
    cout<<"enter the product : ";
    cin>>name[code];

    /*code++;
    cout<<"product code : "<<code<<"\n";*/

    cout<<"enter quantity of product in kg : ";
    cin>>quantity[code];

    cout<<"enter the price : ";
    cin>>price[code];

    price[code]=price[code]*quantity[code];

    code++;

    int code=0;
    for(int i=0; i<=code; code++)
    {
        code+=code;
    }

}
void shopping::del()
{
    string a;
    cout<<"enter the product to remove : ";
    cin>>a;
    
    for(int i=1; i<=code; i++)
    {
        if(name[i]==a)
        {
            price[i]=0;
        }
        
    }

}
void shopping::total()
{
    int sum=0;
    for(int i=0; i<=code; i++)
    {
        sum=sum+price[i];
    }
    cout<<"\nTOTAL PRICE : "<<sum<<"\n";


    // cout<<"    SHOPPING LIST    "<<"\n";
    // for(int i=0; i<=code; i++)
    // {
    //     cout<<"product : "<<name[i]<<"\n";
    //     cout<<"quantity : "<<quantity[i]<<"\n";
    //     cout<<"price : "<<price[i]<<"\n";
    // }

}
int main()
{
    shopping s[2];

    for(int i=0; i<2;i++)
    {
        int x;
        do
        {
            cout<<" 1. ADD ITEM TO LIST "<<"\n";
            cout<<" 2. REMOVE ITEM FROM LIST "<<"\n";
            cout<<" 3. RECIEPT  "<<"\n";

            cout<<"Enter the number ";
            cin>>x;

            switch (x)
            {
            case 1: s[i].add();break;
            case 2: s[i].del();break;
            case 3: s[i].total();break;
            
            default: cout<<"wrong entry. please retry.";
                break;
            }
        }while (x!=3);
    } 
    return 0;
}