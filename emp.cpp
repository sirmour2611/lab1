#include<iostream>
#include<string.h>
using namespace std;
class emp
{int id,age,base;
float gs;
char  name[30];
public :
void getdata (int i,int  a,int b,char n[])
{id=i;
age=a;
base=b;
strcpy(name,n);
}
void display()
{cout<<"\n ID : "<<id<<"\n AGE :"<<age<<"\nBASE SALARY : "<<base<<"\ngross salary :"<<gs<<"\n NAME : "<<name;
}
void gross()
{gs=base+0.8*base+0.1*base;
}
};
int main()
{emp s[10];
int n;
cout<<"ENTER TOTAL EMPLOYE : ";
cin>>n;
int id ,age,base;
float gs; char ch[30];
for(int i=0;i<n;i++)
{cout<<"\nEnter ID :";
cin>>id;
cout<<"\n AGE :";
cin>>age;
cout<<"\nsalary :";
cin>>base;
cout<<"\n NAME :";
cin>>ch;
s[i].getdata(id ,age,base,ch);
s[i].gross();
}
for(int i=0;i<n;i++)
{s[i].display();
}
return 0;
}
