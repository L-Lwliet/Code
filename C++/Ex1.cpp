
#include<iostream>
#include<iomanip>
using namespace std;

class Account{
private:

    char name[100], accType[100];
    int accNo;

    float balance = 0;

public:

    Account(){}
    Account(char nm[100], int no, float b, char t[100]){
        name[100] = nm[100];
        accNo = no;
        balance = b;
        accType[100] = t[100];
    }

    void getdata(){
        cout<<"\nEnter account name: ";
        cin>>name;
        cout<<"Enter account no: ";
        cin>>accNo;
        cout<<"Enter deposit amount: ";
        cin>>balance;
        cout<<"Enter account type: ";
        cin>>accType;
    }

    void printdata(){
        cout<<"\nAccount name: "<<name<<endl;
        cout<<"Account no: "<<accNo<<endl;
        cout<<"Account balance: "<<balance<<endl;
        cout<<"Account type: "<<accType<<endl;
    }

    void deposit(){
        float amount;
        cout<<"\nEnter deposit amount: ";
        cin>>amount;
        balance+=amount;
    }

    void withdraw(){
        float amount1;
        cout<<"\nEnter withdraw amount: ";
        cin>>amount1;
        if(amount1>balance){cout<<"Insufficient balance!!";}
        balance-=amount1;
    }

    void display(){
        cout<<"\nAccount name: "<<name<<endl;
        cout<<"Account no: "<<accNo<<endl;
        cout<<"Account balance: "<<balance<<endl;
        cout<<"Account type: "<<accType<<endl;
    }

    void setData(){
        cout<<"\nEnter account name: ";
        cin>>name;
        cout<<"Enter account no: ";
        cin>>accNo;
        cout<<"Enter deposit amount: ";
        cin>>balance;
        cout<<"Enter account type: ";
        cin>>accType;
    }

    Account transferB(Account ac1[1], float tbalance){
        if(balance>tbalance){
            balance -= tbalance;
            ac1[1].balance += tbalance;
        }

        else
            cout<<"Insufficient balance!!";

        return ac1[1];
    }

    ~Account(){}
};

int main(){

    int n, i;
    cout<<"Number of accounts: ";
    cin>>n;

    Account ac1[n];
    for(i=0; i<n; i++){
        ac1[i].getdata();
    }

    cout<<"Choose an option: ";
    cout<<"\n1. Account info: \n2. Deposit: \n3. Withdraw: \n4. Transfer: "<<endl;
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){
        case 1 : cout<<"\nAccount information: "<<endl;
                 for(i=0; i<n; i++){
                    ac1[i].printdata();
                 }
                 break;

        case 2 : int p;
                 cout<<"\nChoose an account: "<<"\nAccount 1 \nAccount 2 \nEnter your choice"<<endl;
                 cin>>p;

                 ac1[p-1].deposit();
                 ac1[p-1].display();
                 break;

        case 3 : int r;
                 cout<<"\nChoose an account: "<<"\nAccount 1 \nAccount 2 \nEnter your choice"<<endl;
                 cin>>r;

                 ac1[r-1].withdraw();
                 ac1[r-1].display();
                 break;


        case 4 : float tbalance;
                 /*cout<<"\nEnter details of transfering account: "<<endl;
                 ac1[0].setData();
                 cout<<"\nEnter details of recieving account: "<<endl;
                 ac1[1].setData();*/
                 cout<<"\nEnter amount of transfer: "<<endl;
                 cin>>tbalance;
                 ac1[1]=ac1[0].transferB(ac1, tbalance);
                 cout<<endl;

                 cout<<"Sender account: "<<endl;
                 ac1[0].display();
                 cout<<"Receiver account: "<<endl;
                 ac1[1].display();
                 break;
    }


return 0;
}
