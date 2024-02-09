
 -Fast Powering.
 -Modular Arithmetic.
 -GCD(a, b) -> Greatest common divisor "The greatest number that divides both 'a' and 'b'".
 -LCM(a, b) -> Least Common Multiple "The smallest number that's divisible by both 'a' and 'b'".

/********************************* Modular Arithmetic *******************************/

Modular Arithmetic:
  (a + b) % m = ((a % m) + (b % m)) % m
  (a * b) % m = ((a % m) * (b % m)) % m
  (a - b) % m = ((a % m) – (b % m)) % m

  int add(int a, int b, int m){
      return (a%m + b%m) % m;
  }

  int sub(int a, int b, int m){
      return (a%m - b%m) % m;
  }

  int mul(int a, int b, int m){
      return (a%m * b%m) % m;
  }

/********************************** Powring **************************************/

int power(int a,int b){             //O(b)
    if(b==0)
        return 1;
    return a* power(a,b-1);
}

// Fast Power, Fast Exponentiation
int fpower(int a,int b){            //O(log(b))
    if(b==0)
        return 1;
    int p= fpower(a,b>>1);       //fpower(a,b/2)
    return (b&1) ? p*p*a : p*p;
}
/********************************* GCD & LCM *******************************/

int gcd(int a,int b){          //can use built-in function __gcd(a, b)
    if(b==0)
        return a;
    return gcd(b,a%b);
}


int LCM(int a,int b){
    return a*(b/ gcd(a,b));    //return (a*b)/gcd(a,b)
}