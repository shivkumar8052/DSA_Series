#include<iostream>
using namespace std;
//Class declaration.....
class student
{
public:
string name;
int age;
int rollNo;
string collegeName;
 student(string n,int a,int r,string c){/// Constructor creating ..............
    name = n;
    age = a;
    rollNo = r;
    collegeName = c;
 }
 void display(){
   cout<<"Student name is -> "<<name<<endl;
   cout<<"Student age is -> "<<age<<endl;
   cout<<"Student rollNo. is -> "<<rollNo<<endl;
   cout<<"Student collegeName is -> "<<collegeName<<endl;
}   
};



int main(){
    student s1("SHIV",21,60,"IET Lucknow.");
    student s2("RAJ",24,40,"Lucknow University.");
    s1.display();
    cout<<endl;
    s2.display();

return 0;
}

