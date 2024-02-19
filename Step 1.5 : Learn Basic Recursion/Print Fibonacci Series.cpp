
// time complexity = O(n*2^n)
int solve(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return solve(n-1)+solve(n-2);
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int>ans;
    for(int i=0;i<n;i++){
        ans.push_back(solve(i));
    }
    return ans;

}

// to reduce time complexity we need to use dp
