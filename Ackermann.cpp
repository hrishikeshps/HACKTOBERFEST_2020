// C++ program to Ackermann function
#include<iostream>
using namespace std;

int ack(int a, int b)
{
    if (a == 0)
    {
        return b+1;
    }
    else if ( (a > 0) && (b == 0) )
    {
        return ack(a-1,1);
    }
    else if ( (a > 0) && (b > 0))
    {
        return ack(a-1, ack(a, b-1));
    }
    return 0;
}

int main()
{
    int A;
    A = ack(3,2);
    cout<< A << endl;
    return 0;
}
