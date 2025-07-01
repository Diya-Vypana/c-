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
 // if u want 1st digit of 3 digit no, divide by 100
/*
int main()
{
    int num,f,m,l,sum;
    cin >> num;
    f=num/100;
    m=(num/10)%10;
    l=num%10;
    sum=f+m+l;
    cout << sum;
    
    return 0;
}
*/
