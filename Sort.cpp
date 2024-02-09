void merge(int *A,int szA,int *B,int szB){  //O(szA + szB)
    int *C=new int[szA+szB];
    int idxA=0,idxB=0,idxC=0;
    while (idxA<szA && idxB<szB){
        C[idxC++]=(A[idxA]<B[idxB] ? A[idxA++] : B[idxB++]);
    }
    while (idxA<szA){
        C[idxC++]=A[idxA++];
    }
    while (idxB<szB){
        C[idxC++]=B[idxB++];
    }
}






cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){    //O(N^2)
        for(int j=i;j<n;j++){
            if(A[j]<A[i]){
                int temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }