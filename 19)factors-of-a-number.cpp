//C++ Program Factors of a number
#include <bits/stdc++.h>
using namespace std;

void getFactors(int num){
    
    for(int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0){
            
            // Example (10,10) we only want to print once
            // If both factors are equal then print just one
            if(i == num/i)
                cout << i << " ";
            // other wise print both
            else
                cout << i << " " << num/i << " "; 
        }
    }
}

//main Program
int main()
{
    int num =100;
     
    getFactors(num);
}
// Time Complexity: O(√N)
// Space Complexity: O(1)
// Issue : Doesn't print in ascending order