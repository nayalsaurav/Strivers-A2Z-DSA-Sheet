bool checkArmstrong(int n){
	//Write your code here
	int temp =n;
	int newNum = 0;
	string s = to_string(n);
	int size = s.length();
	while(temp>0){
		int last = temp%10;
		newNum += pow(last,size);
		temp/=10;
	}
	return n==newNum;
}
