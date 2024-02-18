int sumOfAllDivisors(int n) {
    int ans = 0; // Initialize the answer to 0

    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {
        // For each i, add i times the number of times i divides n
        ans += i * (n / i);
    }

    return ans; // Return the final answer
}

Approach : Harmonic lemma
int sumOfAllDivisors(int n) {
    int ans = 0; // Initialize the answer to 0
    int l = 1;   // Start with l = 1

    // Loop while l is less than or equal to n
    while (l <= n) {
        int val = n / l; // Calculate n divided by l

        // Find the largest r such that n/r is the same as n/l
        int r = n / val;

        // Calculate the sum of numbers from l to r
        // and multiply it by n/l, then add it to the answer
        ans += ((r * (r + 1)) / 2 - (l * (l - 1)) / 2) * val;

        // Move to the next range by setting l to r + 1
        l = r + 1;
    }

    return ans; // Return the final answer
}
