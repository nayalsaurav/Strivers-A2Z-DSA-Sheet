
void solve(int x,vector<int> &ans){
    if(x==0){
        return;
    }
    solve(x-1,ans);
    ans.push_back(x);
}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>ans;
    solve(x, ans);
    return ans;


}
