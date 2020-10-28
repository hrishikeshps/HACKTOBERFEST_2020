// The addition of two complex numbers
#include<iostream>
using namespace std;
class complex
{
    public:
       int a,b;
    public:
        int input();
        int output();
        complex add(complex);
};
int complex::input()
{
  cout<<"Enter two numbers : ";    
  cin>>a>>b;
  return 0;    
}
int complex::output()
{
    
    cout<<"The result is : "<<a<<" + "<<b<<"i"<<endl;
    return 0;
}
complex complex::add(complex C)
{
    complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
int main()
{
    complex C1,C2,C3;
    C1.input();
    C2.input();
    C3=C1.add(C2);
    C3.output();
}
