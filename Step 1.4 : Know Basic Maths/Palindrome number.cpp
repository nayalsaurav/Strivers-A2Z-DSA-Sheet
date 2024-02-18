bool palindrome(int n)
{
    // Write your code here
    string s = to_string(n);
    int i=0;
    int j = s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
