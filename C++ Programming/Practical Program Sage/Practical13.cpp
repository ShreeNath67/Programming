//Create a class "Bank_Account" that contains Depositor_Name, Acc_No, Acc_Type, Balance as its data members.
//Also create  member functions for account creation, deposit, withdraw and balance inquiry for class.
//Demonstrate its use in main

#include<iostream>
#include<string>
using namespace std;

class Bank_Account
{
    private:
    string Depositor_Name;
    long Acc_no;
    string Acc_Type;
    double Balance;

    public:
    Bank_Account(string name, long accNo, string accType, double balance)
    {
        Depositor_Name = name;
        Acc_no = accNo;
        Acc_Type = accType;
        Balance = balance;
    }

    void deposit(double amount)
    {
        Balance += amount;
        cout<<"Amount deposited sucessfully. Current Balance :$"<<Balance<<endl;
    }

    void withdraw(double amount)
    {
        if(Balance >= amount)
        {
            Balance -= amount;
            cout<<"Amount withdraw succcessfully. Current Balance :$"<<Balance<<endl;
        }
        else
        {
            cout<<"Insufficient Balance :"<<endl;
        }
    }

    double getBalance()
    {
        return Balance;
    }
};

int main()
{
    Bank_Account account("Jhon Doe", 12345, "Saving", 10000);
    account.deposit(5000);
    account.withdraw(3000);
    cout<<"Current Balance :$"<<account.getBalance()<<endl;

    return 0;
}