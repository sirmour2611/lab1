#include<iostream>
using namespace std;
class student 
{int sub[5];
public : void display()
{
for(int i=0; i<5;i++)
 cout<<"\nmarks for "<<i+1<<"  :"<<sub[i];
}
float avg()
{float temp=0;
for(int i=0; i<5;i++)
temp+=sub[i];
return temp/5;
} 
float persent(){
float temp=0;
for(int i=0; i<5;i++)
temp+=sub[i];
temp=(temp/500)*100;
return temp;
}
void getdata(int a[5])
{for(int i=0; i<5;i++)
sub[i]=a[i];
}
};
int main()
{student s;int a[5];
cout<<"ENTER MARKS \n";
for(int i=0;i<5;i++)
cin>>a[i];
s.getdata(a);
s.display();
cout<<"\n Average is : "<<s.avg();
cout<<"\n Persent is :"<<s.persent();
return 0;}
