#include<iostream>
using namespace std;
class Account
{
private:
    string name,gender;
    double amount;
    int acc_no;
   
    static int account_number_generator;
public:
    void create_account(string n,string g,double amt)
    {
        acc_no=++account_number_generator;
        name=n;
        gender=g;
        amount=amt;
        cout<<"\n"<<name<<" your account created with number:"<<acc_no;
    }
    void deposit(double amt)
    {
        if(amt<0)
            cout<<"\n amount can not be -ve:"<<amt;
        else
        {
            amount=amount+amt;
            check_balance();
        }
    }
    void withdarw(double amt)
    {
        if(amount-amt<5000)
            cout<<"\ninsufficient balance";
        else
        {
            amount=amount-amt;
            check_balance();
        }
    }
    void check_balance()
    {
        cout<<"\nHi "<<name<<",Your account number:"<<acc_no<<" balance:"<<amount;
    }
    int get_account_no()
    {
        return acc_no;
    }
};
int Account::account_number_generator=202400;
int main()
{
 Account bank[100];//creat Account type bank array of 100
 int accounts=0;
 int acc_no,flag;
 double amount;
 Account a;
 int ch;
 string n,g;
double amt;
do
{
    cout<<"\n\t|---------------------------|";
    cout<<"\n\t|       MYBank              |";
    cout<<"\n\t|---------------------------|";
    cout<<"\n\t| 1. Create Account         |";       
    cout<<"\n\t| 2. Deposite to Account    |";
    cout<<"\n\t| 3. Withdraw from Account  |";
    cout<<"\n\t| 4. Check Balance          |";
    cout<<"\n\t| 0. Exit                   |";
    cout<<"\n\t| --------------------------|";
    cout<<"\n:";
    cin>>ch;
    switch(ch)
    {
        case 1:
           
            cout<<"\nEnter name:";
            cin>>n;
            cout<<"\nEnter gender:";
            cin>>g;
            while(1)
            {
                cout<<"\nEnter amount>=5000 to open account:";
                cin>>amt;
                if(amt>=5000)
                {
                    a.create_account(n,g,amt);
                    break;
                }
                cout<<"\nMinimum Amount to open account is 5000";    
            }
            bank[accounts++]=a;//account added to bank array
           
            break;
            case 2:
                cout<<"\nEnter Account number:";
                cin>>acc_no;
                flag=0;
                for(int i=0;i<accounts;i++)
                {
                    if(bank[i].get_account_no()==acc_no)
                    {
                        cout<<"\nAccount found:";
                        bank[i].check_balance();
                        cout<<"\nEnter amount to deposit:";
                        cin>>amount;
                        bank[i].deposit(amount);
                        flag=1;//found
                        break;
                    }
                }
                if(flag==0)
                    cout<<"\nAccount "<<acc_no<<" not found";
                break;
               
            case 3:
                cout<<"\nEnter Account number:";
                cin>>acc_no;
                flag=0;
                for(int i=0;i<accounts;i++)
                {
                    if(bank[i].get_account_no()==acc_no)
                    {
                        cout<<"\nAccount found:";
                        bank[i].check_balance();
                        cout<<"\nEnter amount to withdraw:";
                        cin>>amount;
                        bank[i].withdarw(amount);
                        flag=1;//found
                        break;
                    }
                }
                if(flag==0)
                    cout<<"\nAccount "<<acc_no<<" not found";
                break;
               
            case 4:
                cout<<"\nEnter Account number:";
                cin>>acc_no;
                flag=0;
                for(int i=0;i<accounts;i++)
                {
                    if(bank[i].get_account_no()==acc_no)
                    {
                        cout<<"\nAccount found:";
                        bank[i].check_balance();
                        flag=1;//found
                        break;
                    }
                }
                if(flag==0)
                    cout<<"\nAccount "<<acc_no<<" not found";
                break;
               
            case 0:
                    cout<<"Thanks for banking with us.....";
                    break;
            default:
                    cout<<"Wrong option selected";
                    break;
                }
   
 } while(ch!=0);
 return 0;
}
