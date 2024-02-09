#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N=1e6+5;

int fact(int n){      //O(N)
    if(n==1||n==0)
        return 1;
    return n* fact(n-1);
}

int fib(int n){       //O(2^N)
    if(n==1||n==2)
        return 1;
    return fib(n-1)+fib(n-2);
}

int power(int a,int b){     //O(b)
    if(b==0)
        return 1;
    return a* power(a,b-1);
}

// Fast Power, Fast Exponentiation
int fpower(int a,int b){    //O(log(N))
    if(b==0)
        return 1;
    int p= fpower(a,b>>1);         // fpower(a,b/2)
    return (b&1) ? p*p*a : p*p;
}

// Euclidean Algorithm
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    cout<<fpower(a,b)<<endl;
    return 0;
}