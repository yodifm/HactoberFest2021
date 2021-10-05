#include<bits/stdc++.h>
using namespace std;
 
int fibon(int n)
{
    int a = 0, b = 1, c, i;
    if( n == 0)
        return a;
    for(i = 2; i <= n; i++) //loop from 2 to n 
    {
       c = a + b;
       a = b;
       b = c;
    }
    return b;
}
 
// Driver code
int main()
{
    int n = 7;//let we want seventh fibonacci number
     
    cout << fibon(n);
    return 0;
}
