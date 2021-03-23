#include<iostream>
using namespace std;
int x; int r;
int a; int b;
int c; int d;
int main(void)
{
cout<<"Introducir grado del polinomio:";
cin>>r;
cout<<"Introducir valor de a:";
cin>>a;
cout<<"Introducir valor de b:";
cin>>b;
cout<<"Introducir valor de c:";
cin>>c;
cout<<"Introducir valor de d:";
cin>>d;
r=a*(x*x*x)+b*(x*x)+c*x+d;

printf ("Resultado suma del polinomio:");
cout<<r;   cout<<"\n"; cout<<endl; 

cout<<"\n"; cout<<std::endl;  
return 0;
}
