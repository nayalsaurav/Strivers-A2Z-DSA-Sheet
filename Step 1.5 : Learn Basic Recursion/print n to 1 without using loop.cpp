
void solve(int x,vector<int> &ans){
    if(x==0){
        return;
    }
    ans.push_back(x);
    solve(x-1,ans);
}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>ans;
    solve(x, ans);
    return ans;


}
