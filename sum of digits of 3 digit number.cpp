#include <bits/stdc++.h>  //includes all needed header files
using namespace std;  //avoids the need for std:: 
 
 //sum of digits of 3 digit number
int main()
{
    int num,a,b,c,sum;
    cin >> num;
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    sum=a+b+c;
    cout << sum;
    
    return 0;
}
