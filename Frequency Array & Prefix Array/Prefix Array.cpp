//Prefix Array
//  Given n<=1e5 numbers, and q<=1e5 queries asking about sum of elements from l to r.
//    ans1    ---->   O(n*q)  time.
//    ans2    ---->   O(q)    time.
/------------------

#include <bits/stdc++.h>

using namespace std;


const int N=1e5+5;
int A[N];
int prefixSum[N];
int main() {

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    prefixSum[0]=A[0];
    for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+A[i];
    }
    int q;
    scanf("%d",&q);
    while (q--){
        int l,r;
        scanf("%d%d",&l,&r);
        if(l) //there is no index = -1
            printf("%d\n",prefixSum[r]-prefixSum[l-1]);
        else
            printf("%d\n",prefixSum[r]);
    }

}
