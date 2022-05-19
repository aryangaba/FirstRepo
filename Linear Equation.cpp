#include<iostream>
using namespace std;
#include<math.h>
int main()
{
float a1,a2,b1,b2,c1,c2,x,y;
int a,b;
cout<<"\nThis program can solve a pair of linear equations in two variables.\nDo you want to start?\nPress 1 to start and 0 to stop ";
cin>>a;
if(a==1)
{ //hello
cout<<"\nNote that both the equations should be of the form ax+by+c=0.";
next:
cout<<"\nEnter the values of a1,b1,c1 which are the coefficient of x,coefficient of y and constant of Equation 1 respectively. ";
cin>>a1>>b1>>c1;
cout<<"\nEnter the values of a2,b2,c2 which are the coefficient of x,coefficient of y and constant of Equation 2 respectively. ";
cin>>a2>>b2>>c2;
if((a1/a2)==(b1/b2) && (a1/a2)==(c1/c2))
{cout<<"\nInfinitely many solutions";
}
else if((a1/a2)!=(b1/b2))
{cout<<"\nUnique solution";
x=((b1*c2)-(b2*c1))/((a1*b2)-(a2*b1));
y=((c1*a2)-(c2*a1))/((a1*b2)-(a2*b1));
cout<<"\n\n x="<<x;
cout<<"\n y="<<y;
}
else cout<<"\nNo solution";
cout<<"\nDo you want to solve another pair of linear equations\nEnter 1 for yes and 0 for no ";
cin>>b;
if(b==1) goto next;

}
return 0;
}
