#include<fstream>
#include<iostream>
#include<cstring>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class student{
public:
    int ID; string name;string Location;string Branch;
    void getdata(){
    cout << "Enter ID: " <<endl;
    cin>>ID;
    cout << "Enter Name: " <<endl;
    cin>>name;
    cout << "Enter Location: " <<endl;
    cin>>Location;
    cout<<"Enter Branch: "<<endl;
    cin>>Branch;
    }
    void Addrecode(){
    fstream f;
    student stu;
    f.open("student.txt", ios::app);
    try{
       if(!f) throw 6;
       else{
           stu.getdata();
           try{
               if(stu.ID<0) throw 5.4;
               else{
                 f << stu.ID << "\t" << stu.name << "\t" << stu.Location << "\t"<< stu.Branch << endl;
                 cout<<"Updated\n";
              }
           }
           catch(double x){
               cout<<"Enter valid student ID\n";
           }
           f.close();
       }
    }
    catch(...){
       cout<<"File doesn't exist.";
    }
   
    }
    void display()
    {
    int id,c=1,flag=1,C=0,num;
    string buf,str;
    fstream f1;
    student s;
    cout<< "Enter a student ID:-";
    cin >> id;
    f1.open("student.txt", ios::in);
    while(getline(f1,buf)){
   stringstream ss(buf);
   while(getline(ss,str,'\t')){
           if(C==0){
    C++;
    continue;
    }
    else if(c==0){
       stringstream obj;  
   obj << str;  
   obj >> num;  
   if(num==id){
     flag = 0;
     getline(ss,str,'\t');
     cout << "Name:- " << str << "\t";
     getline(ss,str,'\t');
     cout << "Location:- " << str << "\t";
     getline(ss,str,'\t');
     cout << "Branch:- " << str << "\t" << endl;
     cout << "\n--------------------------------------------------------\n\n\n";
     break;
 }
    }
    c++;
    }
    c=0;
    }
    if(flag) cout << "Student ID is not found" << endl;
    f1.close();
    }
};

int main()
{
student s1;
fstream f;
int option;
f.open("student.txt", ios::app);
while(1)
{
cout << "\n\n---------------------Menu-------------------------------\n";
cout << "1 : enter student detail \n2: find student \n3: Exit\n";
cout << "Enter your choise:- ";
cin >> option;
if(option==1){
s1.Addrecode();
cout << "\n\n--------------------------------------------------------\n\n";
}
else if(option==2){
student s2;
s2.display();
}
else break;
}
return 0;
}
