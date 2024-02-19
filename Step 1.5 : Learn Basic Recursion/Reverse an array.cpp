void solve(int n, vector<int> &nums,int start,int end){
    if(start>end){
        return;
    }
    swap(nums[start],nums[end]);
    solve(n, nums, start+1, end-1);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    solve(n, nums, 0, nums.size()-1);
    return nums;

}
