//Fibonacci Series using Recursion
#include<bits/stdc++.h>
using namespace std;
 
int F(int N)
{
    if (N <= 1)
       {
        return N;
       }
       
    return F(N-1) + F(N-2);
}
 
int main ()
{
    int N = 5;
    cout << F(N);
    return 0;
}