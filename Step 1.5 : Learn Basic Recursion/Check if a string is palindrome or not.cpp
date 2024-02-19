
bool solve(string& str,int s,int e){
    if(s>e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    return solve(str, s+1, e-1);
}

bool isPalindrome(string& str) {
    // Write your code here.
    bool ans = solve(str, 0, str.length()-1);
    return ans;
}
