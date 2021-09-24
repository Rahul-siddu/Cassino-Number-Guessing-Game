#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <iomanip>
using namespace std;
bool check(int balance,int amount)
{
    if(amount<=balance)
    {
        if(balance==0)
    {return false;
            }
        else
        {
        return true;
    }}
    else 
    {    
    return false;
}}
void rules()
{
    cout<<setw(70)<<setfill('*')<<"CASSINO NUMBER GUESSING RULES"<<setw(15)<<setfill('*')<<"*"<<endl;
cout<<endl<<"1.IF U GUESS THE CORRECT NUMBER THEN U WIN  10 TIMES UR BET AMOUNT WHICH IS ADDED TO UR BALANCE"<<endl;
cout<<"2.IF U GUESS THE WRONG NUMBER U LOSE 10 TIMES THE BET WHICH WILL BE DEBITED FROM UR BALANCE"<<endl;
cout<<endl<<setw(70)<<setfill('-')<<"all the very best!!!!"<<setw(20)<<setfill('-')<<"-"<<endl; 
}
void game(string name,double balance)
{bool h;
double amount;
cout<<"your current balance is:"<<balance<<endl;
cout<<"Hey,"<<name<<" enter ur betting amount"<<endl;
    cin>>amount;
    h=check(balance,amount);
if(h==true)
    {
srand(time(0));
int guess;
int x=rand()%10+1;

do{
    cout<<"dice is rolled and a number is obtained : "<<x<<endl;
cout<<"please guess the number in asterik"<<endl;
cin>>guess;
                        if(guess>10 || guess<0)
                    {
    cout<<endl<<"Number should be between 1 to 10"<<endl<<"re -enter the number :"<<endl;
    
                    }
}
while(guess>10 || guess<0);

    if(guess ==x)
{
    cout<<" You are in luck!! have won: "<<amount*10<<endl;
    balance+=amount*10;

    char k;
    cout<<"do u want to continue or quit the game"<<endl;
    cout<<setw(40)<<setfill(' ')<<" "<<left<<"y-continue"<<endl<<setw(40)<<" "<<left<<"n-quit"<<endl;
    cin>>k;
            if(k=='y' || k=='Y')
        
    {  
        game(name,balance);
    }
            else
    {
        cout<<"Thank you for participating in the game"<<endl;
        cout<<"Mr."<<name<<" now u balance is "<<balance<<endl;
    }
}
    else
  {
    cout<<"Oops,sorry Better luck next time!! "<<" you lost : "<<amount<<endl;
cout<<"the number obtained is: "<<x<<endl;
    balance-=amount;
     char k;
    cout<<"do u want to continue or  quit the game"<<endl<<setw(40)<<setfill(' ')<<" "<<left<<"y-continue"<<endl<<setw(40)<<setfill(' ')<<" "<<left<<"n-quit"<<endl;
    cin>>k;
            if(k=='y'|| k=='Y')
        {                  game(name,balance);
                                }

            else
        {
        cout<<"Thank you for participating in the game"<<endl;
        cout<<"Mr."<<name<<" now u balance is "<<balance<<endl;
        }
  }
}

else
    {
        cout<<"sorry "<<name<<" insufficient balance"<<endl;
    }
}
int main()
{
    double balance,amount;
    string name;
    cout<<setw(70)<<right<<"Welcome to cassino number guessing"<<endl;
    cout<<"please enter ur name "<<endl;
    getline(cin,name);
    cout<<"please enter the starting  balance"<<endl;
    cin>>balance;
    cout<<"Mr."<< name<<" with balance : "<<balance<<endl;
    cout<<setw(20)<<" "<<name<<"  Before you start the game"<<endl;
     cout<<setw(20)<<" "<<" please check out the rules"<<endl<<endl;
    rules();
    game(name,balance);
return 0;
}