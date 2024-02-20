#include <iostream>
#include <vector>

vector<long long> factorialNumbers(long long n) {
    vector<long long> factorials;
    long long fact = 1;
    int i = 1;
    while (fact <= n) {
        factorials.push_back(fact);
        i++;
        fact *= i;
    }
    return factorials;
}
