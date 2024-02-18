long reverseBits(long n) {
    // Write your code here.
    long temp2 = n;
    int i = 31;
   vector<int> temp(32,0);
   while(temp2>0){
       int bit = temp2&1;
       temp[i]= bit;
       i--;
       temp2 = temp2>>1;
   }
   reverse(temp.begin(),temp.end());
   long ans = 0;
   int j = 0;
   for(int i = 31;i>=0;i--){
       ans = ans + temp[i]*pow(2,j++);
   }
   return ans;
}
