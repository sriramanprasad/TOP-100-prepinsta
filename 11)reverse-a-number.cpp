//C++ Program sum of digits in a number using recursion
#include<iostream>
using namespace std;

int getSum(int num){
    
    if(num == 0)
        return 0;

    return (num % 10) + getSum(num/10);
}

int main ()
{
    int num;
    num=12345;
    cout <<"\nThe number is:"<<num; 
     
    cout <<"\nSum of digits : " << getSum(num);
 
    return 0;
}
// Time complexity : O(N)
// Space complexity : O(1)
// Auxiliary Space complexity : O(N) due to function call stack
// where N is number of digits in nums