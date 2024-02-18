int calcGCD(int n, int m)   //O(min)
{
    int ans = 1;
    for (int i = 1; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}
// O(log(min))
int calcGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

