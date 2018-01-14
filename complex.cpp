#include<iostream>
using namespace std;
class complex
{
float real,img;
public:
void display()
{
cout<<"\n data is : "<<real<<" + i"<<img;
}
void input(int r,int i)
{real=r;
img=i;
}
};
int main()
{complex s[10];
int r,i;
for(int k=0;k<10;k++)
{cout<<"\nEnter Data for "<<k+1<<" : \n"<<"real :";
  cin>>r;
  cout<<"img  :";
  cin>>i;
  s[k].input(r,i);
  }
  cout<<"\n-----------------------------------------------\n";
  for(int k=0;k<10;k++)
  {s[k].display();
  }
return 0;  
}

