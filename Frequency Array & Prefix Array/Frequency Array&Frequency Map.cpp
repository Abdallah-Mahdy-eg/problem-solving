Frequency Array:
   -Introduction Problem:
	Given n Integers, for each number from 1 to 3 print the number of its occurrences.
	ans   ---->   Three variables.

    -Classical Problem:
	given N integers, print the elements that appears even number of times.
       		(1<= N <= 10^5)
        	(1 <= number<=10^6)

    int freq[N]={0};
    int n, x;
    cin >> n;
    while (n--) {
        scanf("%d",&x);
        freq[x]++;
    }
    for(int i=1;i<=N;i++){
        if(freq[i]&&freq[i]%2==0){
            printf("%d ",i);
        }
    }


Frequency Map
    -Classical Problem:
     given n strings, and print the most occuring string.
        (1<= n <= 10^4)
        (1 <= |string|<=100)
        
    unordered_map<string,int>freq;
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        freq[s]++;
    }
    int mx=0;
    string ans="";
    for(auto& p : freq){
        if(p.second > mx){
            mx=p.second;
            ans=p.first;
        }
    }
    cout<<ans<<'\n';