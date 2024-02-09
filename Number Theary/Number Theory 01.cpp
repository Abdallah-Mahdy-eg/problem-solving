  -Multiples -> All the numbers that are divisible by some Integer.
  -Divisors -> All the numbers that divide some Integer.
  -Primes -> A Number which is divisible only by 1 and itself.
  -Factors -> The prime numbers that divide an Integer exactly.

/********************************* Multiples ***************************************/
Problem #1 -> Given an integer 'n' find all of its Multiples that are less than 'N'.

for(int i=2*n;i<N;i+=n){
        printf("%d ",i);
    }

/******************************** Divisors ****************************************/
Problem #2 -> Given an integer 'n' find all of its Divisors.
  Solution #1:

vector<int> getDivisors(int n){      //O(N)
    vector<int> divs;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            divs.push_back(i);
    }
    return divs;
}


  Solution #1:

-Square root :D

vector<int> getDivisors2(int n){      //O(sqrt(N))
    vector<int> divs;
    int i;
    for(i=1;i*i<n;i++){
        if(n%i==0){
            divs.push_back(i);
            divs.push_back(n/i);
        }
    }
    if(i*i==n)
        divs.push_back(i);
    return divs;
}

/************************************ Primes ******************************************/
Problem #3 -> Given an integer 'n' find if it's prime or not?
bool isPrime(int n){           //O(N)
    for(int i=2;i<n;i++){      //from 2 to n-1
        if(n%i==0)
            return false;
    }
    return true;
}


bool isPrime(int n){           //O(sqrt(n))
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}


bool is_prime[N];
void sieve() {  // O(N) ~= O(N*log(log(N)))
  fill(is_prime, is_prime + N, true);
  is_prime[0] = is_prime[1] = false;

  for (int p = 2; p * p < N; p++) {
    if (is_prime[p]) {
      for (int m = p * p; m < N; m += p) {
        is_prime[m] = false;
      }
    }
  }
}

/********************************** Factors ************************************/

vector<pair<int,int>>factorize(int n){
    vector<pair<int,int>>fact;
    for(int i=2;i*i<=n;i++){
        int power=0;
        while (n%i==0){
            power++;
            n/=i;
        }
        if(power)
            fact.emplace_back(i, power);
    }
    if(n>1)
        fact.emplace_back(n,1);
    return fact;
}