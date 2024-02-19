long long sumFirstN(long long n) {
    // Write your code here.
    if(n==0){
        return 0;
    }
    return n+sumFirstN(n-1);
}

//you can use sum of natural number fornula.
