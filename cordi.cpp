#include<iostream>
#include<math.h>
using namespace  std;
class cordi{
int x;
int y;
public :
void getdata(int x1,int y1)
{
x=x1;y=y1;
}
void display()
{ 
cout<<"\n x : "<<x<<" y : "<<y;}
void distance(cordi b)
{
cout<<"\ndistance between them is : "<<sqrt(pow(x-b.x,2)+pow(y-b.y,2));
}
};
int main()
{cordi a,b;
a.getdata(2,3);
b.getdata(4,5);
a.distance(b);
return 0;

}
