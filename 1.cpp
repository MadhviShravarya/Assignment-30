#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Check
{
private:
float x;
public:
void setData(int a)
{
x=a;
}
void getData()
{
cout<<"\nx:"<<x;
}

//Defining an operator function + to overload
Check operator +(Check c)
{
Check temp;
temp.x=x+c.x;
return temp;
}

//Defining an operator function - to overload
Check operator -(Check c)
{
Check temp;
temp.x=x-c.x;
return temp;
}
//Defining an operator function * to overload
Check operator *(Check c)
{
Check temp;
temp.x=x*c.x;
return temp;
}

//Defining an operator function / to overload
Check operator /(Check c)
{
Check temp;
temp.x=x/c.x;
return temp;
}
};

void main()
{
clrscr();
Check c1,c2,c3,c4,c5,c6;
c1.setData(20);
c2.setData(10);

//Overloading operator +
c3=c1+c2;
c3.getData();

//Overloading operator -
c4=c1-c2;
c4.getData();

//Overloading operator *
c5=c1*c2;
c5.getData();

//Overloading operator /
c6=c2/c1;
c6.getData();
getch();
}
