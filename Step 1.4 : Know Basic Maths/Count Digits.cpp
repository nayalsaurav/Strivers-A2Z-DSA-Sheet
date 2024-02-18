int countDigits(int n){
	// Write your code here.
	// vector<int>count;
	int ans =0;
	int temp = n;
	while(temp>0){
		int last = temp%10;
		if(last!=0){
			ans += (n%last==0);
		}
		temp /=10;
	}
	return ans;
}
