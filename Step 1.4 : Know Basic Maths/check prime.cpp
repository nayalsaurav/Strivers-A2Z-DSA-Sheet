bool isPrime(int n)
{
	// Write your code here.
	if(n==0||n==1){
		return false;
	}

	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
