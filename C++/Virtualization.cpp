#include<iostream>
using namespace std;

class Person{
    string name;
    int age;
    string sex;
    string nationality;

public:
    Person(){cout<<"\nPerson-empty constructor!\n"<<endl;}

    Person(string n, int a, string s, string nt){
        name = n;
        age = a;
        sex = s;
        nationality = nt;

        cout<<"\nPerson-parameterized constructor!\n"<<endl;
    }

    ~Person(){cout<<"\nPerson-destructor!\n"<<endl;}

    void setName(string n){name=n;}
    string getName(){return name;}
    void setAge(int a){age=a;}
    int getAge(){return age;}
    void setSex(string s){sex=s;}
    string getSex(){return sex;}
    void setNationality(string nt){nationality=nt;}
    string getNationality(){return nationality;}

    void showDetails(){
        cout<<"Name of the person: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Sex: "<<sex<<endl;
        cout<<"Nationality: "<<nationality<<endl;
    }
};


class Student:virtual public Person{
    string studentid;
    float cgpa;
    string program;

public:
    Student(){cout<<"\nStudent-empty constructor!"<<endl;}
    Student(string n, int a, string s, string nt, string sid, float cg, string pr):Person(n,a,s,nt){
        studentid=sid;
        cgpa=cg;
        program=pr;

        cout<<"\nStudent-parameterized constructor!\n"<<endl;
    }
    ~Student(){cout<<"\nStudent-destructor!"<<endl;}

    void setStudentid(string sid){studentid=sid;}
    string getStudentid(){return studentid;}
    void setCgpa(float cg){cgpa=cg;}
    float getCgpa(){return cgpa;}
    void setProgram(string pr){program=pr;}
    string getProgram(){return program;}

    void showStndtDetails(){
        cout<<"Student name: "<<getName()<<endl;
        cout<<"Student ID: "<<studentid<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
        cout<<"Program: "<<program<<endl;
        cout<<"Age: "<<getAge()<<endl;
        cout<<"Sex: "<<getSex()<<endl;
        cout<<"Nationality: "<<getNationality()<<endl;
    }
};

class GraduateStudent:public Student{
    int year_of_graduation;

public:
    GraduateStudent(){cout<<"\nGraduateStudent-empty constructor!"<<endl;}
    GraduateStudent(string n, int a, string s, string nt, string sid, float cg, string pr, int y):Student(n,a,s,nt,sid,cg,pr){
        year_of_graduation=y;

        cout<<"\nGraduateStudent-parameterized constructor!"<<endl;
    }
    ~GraduateStudent(){cout<<"\nGraduateStudent-destructor!"<<endl;}

    void setYear_of_graduation(int y){year_of_graduation=y;}
    int getYear_of_graduation(){return year_of_graduation;}

    void showGradStndtDetails(){
        cout<<"Student name: "<<getName()<<endl;
        cout<<"Student ID: "<<getStudentid()<<endl;
        cout<<"CGPA: "<<getCgpa()<<endl;
        cout<<"Program: "<<getProgram()<<endl;
        cout<<"Age: "<<getAge()<<endl;
        cout<<"Sex: "<<getSex()<<endl;
        cout<<"Nationality: "<<getNationality()<<endl;
        cout<<"Year of graduation: "<<year_of_graduation<<endl;
    }
};

class Employee:virtual public Person{
    string employeeId;
    string dateOfBirth;
    string joined;
    string phone;
    string email;

public:
    Employee(){cout<<"\nEmployee-empty constructor!"<<endl;}
    Employee(string n, int a, string s, string nt, string eid,string dob,string jo, string pn, string eml):Person(n,a,s,nt){
        employeeId=eid;
        dateOfBirth=dob;
        joined=jo;
        phone=pn;
        email=eml;
        cout<<"\nEmployee-parameterized constructor!"<<endl;
    }
    ~Employee(){cout<<"\nEmployee-destructor!"<<endl;}

    void setEmployeeId(string eid){employeeId=eid;}
    string getEmployeeId(){return employeeId;}
    void setDateOfBirth(string dob){dateOfBirth=dob;}
    string getDateOfBirth(){return dateOfBirth;}
    void setJoined(string jo){joined=jo;}
    string getJoined(){return joined;}
    void setPhone(string pn){phone=pn;}
    string getPhone(){return phone;}
    void setEmail(string eml){email=eml;}
    string getEmail(){return email;}

    void showEmployeeDetails(){
        cout<<"Name of Employee: "<<getName()<<endl;
        cout<<"Employee ID: "<<employeeId<<endl;
        cout<<"Joined: "<<joined<<endl;
        cout<<"Phone: "<<phone<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"Date of birth: "<<dateOfBirth<<endl;
        cout<<"Age: "<<getAge()<<endl;
        cout<<"Sex: "<<getSex()<<endl;
        cout<<"Nationality: "<<getNationality()<<endl;
    }
};

class Faculty:virtual public Employee{
    string facultyId;

public:
    Faculty(){cout<<"\nFaculty-empty constructor!"<<endl;}
    Faculty(string n, int a, string s, string nt, string eid,string dob,string jo, string pn, string eml,string fid):Employee(n,a,s,nt,eid,dob,jo,pn,eml){
        facultyId=fid;

        cout<<"\nFaculty-parameterized constructor!"<<endl;
    }
    ~Faculty(){cout<<"\nFaculty-destructor!"<<endl;}

    void setFacultyId(string fid){facultyId=fid;}
    string getFacultyId(){return facultyId;}

    void showFacultyDetails(){
        cout<<"Name of Faculty: "<<getName()<<endl;
        cout<<"Faculty ID: "<<facultyId<<endl;
        cout<<"Joined: "<<getJoined()<<endl;
        cout<<"Phone: "<<getPhone()<<endl;
        cout<<"Email: "<<getEmail()<<endl;
        cout<<"Date of birth: "<<getDateOfBirth()<<endl;
        cout<<"Age: "<<getAge()<<endl;
        cout<<"Sex: "<<getSex()<<endl;
        cout<<"Nationality: "<<getNationality()<<endl;
    }
};

class TA: public Student, public Faculty{
    string taId;

public:
    TA(){cout<<"\nTA-empty constructor!"<<endl;}
    TA(string n, int a, string s, string nt, string eid,string dob,string jo, string pn, string eml,string fid,string sid, float cg, string pr,string tId):Faculty(n,a,s,nt,eid,dob,jo,pn,eml,fid),Student(n,a,s,nt,sid,cg,pr){
        taId=tId;

        cout<<"\nTA-Parameterized constructor!"<<endl;
    }
    ~TA(){cout<<"TA-destructor!"<<endl;}

    void setTaId(string tId){taId=tId;}
    string getTaId(){return taId;}

    void showTADetails(){
        cout<<"Name of TA: "<<getName()<<endl;
        cout<<"TA ID: "<<taId<<endl;
        /*cout<<"Joined: "<<getJoined()<<endl;
        cout<<"Phone: "<<getPhone()<<endl;
        cout<<"Email: "<<getEmail()<<endl;
        cout<<"Date of birth: "<<getDateOfBirth()<<endl;
        cout<<"Age: "<<getAge()<<endl;
        cout<<"Sex: "<<getSex()<<endl;
        cout<<"Nationality: "<<getNationality()<<endl;*/
    }
};

class Officer:public Employee{
    string officerId;

public:
    Officer(){cout<<"\nOfficer-empty constructor!"<<endl;}
    Officer(string n, int a, string s, string nt, string eid,string dob,string jo, string pn, string eml, string oid):Employee(n,a,s,nt,eid,dob,jo,pn,eml){
        officerId=oid;

        cout<<"\nOfficer-parameterized constructor!"<<endl;
    }
    ~Officer(){cout<<"\nOfficer-destructor!"<<endl;}

    void setOfficerId(string oid){officerId=oid;}
    string getOfficerId(){return officerId;}

    void showOfficerDetails(){
        cout<<"Name of Officer: "<<getName()<<endl;
        cout<<"Officer ID: "<<officerId<<endl;
        cout<<"Joined: "<<getJoined()<<endl;
        cout<<"Phone: "<<getPhone()<<endl;
        cout<<"Email: "<<getEmail()<<endl;
        cout<<"Date of birth: "<<getDateOfBirth()<<endl;
        cout<<"Age: "<<getAge()<<endl;
        cout<<"Sex: "<<getSex()<<endl;
        cout<<"Nationality: "<<getNationality()<<endl;
    }
};

int main(){

    Person p("Sam",19,"Male","Bangladeshi");
    p.showDetails();

    Student s("Sam",19,"Male","Bangladeshi", "22-46502-1",3.5,"BSc. CSE");
    s.showStndtDetails();

    GraduateStudent gs("Sam",23,"Male","Bangladeshi", "22-46502-1",3.5,"BSc. CSE",2026);
    gs.showGradStndtDetails();

    Employee e("Sam",24,"Male","Bangladeshi","11-1010-1","Nov 8th 2002","Feb 2nd 2027","+78 93585 9580", "Jsam7777@gmail.com");
    e.showEmployeeDetails();

    Faculty f("Sam",25,"Male","Bangladeshi","11-1010-1","Nov 8th 2002","Mar 3rd 2028","+78 93585 9580", "Jsam7777@gmail.com","11-1111-1");
    f.showFacultyDetails();

    TA ta("Sam",25,"Male","Bangladeshi","11-1010-1","Nov 8th 2002","Mar 3rd 2028","+78 93585 9580", "Jsam7777@gmail.com","11-1111-1","22-46502-1",3.5,"BSc. CSE","11-0000-1");
    ta.showTADetails();

    Officer o("Sam",27,"Male","Bangladeshi","11-1010-1","Nov 8th 2002","Jan 7th 2030","+78 93585 9580", "Jsam7777@gmail.com","00-00000-0");
    o.showOfficerDetails();

return 0;
}

