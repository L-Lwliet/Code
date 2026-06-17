#include<iostream>
using namespace std;
class Player{
private:
int pid;
string name;
int age;
public:
static int nextId;
Player(){
nextId+=5;
pid = nextId;
cout<<"Empty Player ID:" <<pid<<endl;
}
Player(string n, int a){
nextId+=10;
pid = nextId;
name = n;
age=a;
cout<<"Parameterized Player ID: "<<pid<<endl;
}
~Player(){
cout<<"Deleted ID: "<<pid<<","<<name<<", Age: " <<age<<endl;
}
void setNameAge (string n, int a) {
name= n;
age=a;
}
};
int Player:: nextId = 0;
int main(){
Player p1,p2;
p2. setNameAge ("Abdullah", 20) ;
p1.setNameAge("Rahim", 19) ;
Player p3 ("Karim",20);

return 0;
}

