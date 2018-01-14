#include<iostream>
using namespace std;
class dist{
float feet ;
float inch;
public :
void display()
{cout<<"\n Feet : "<<feet<<"  Inch :"<<inch;
}
void input(int f,int i)
{feet =f;
inch=i;
}
dist add(dist a,dist b)
{dist t;
t.feet=a.feet+b.feet;
t.inch=a.inch+b.inch;
return t;
}
dist add(dist s)
{
dist t;
t.feet=feet+s.feet;
t.inch=inch+s.inch;
return t;
}
};
int main()
{dist a,b,c;
a.input(10,2);
b.input(1,1);
c=c.add(a,b);
c.display();
c=a.add(b);
c.display();
return 0;
}
