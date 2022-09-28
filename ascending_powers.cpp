#include <iostream>

#include <vector>

#include <bits/stdc++.h>

using namespace std;

long long countDigit(long long number) {
    long long count = 0;
    while (number != 0) {
        number = number / 10;
        count++;
    }
    return count;
}

unsigned long long integerPower(unsigned long long x, long long y) {
    unsigned long long e = 1;

    for (unsigned long long i = 1; i <= y; i++) {
        e *= x;
    }

    return e;
}

void numberSplit(long long i, vector < int > & v) {
    //split number to array
    for (; i; i /= 10) {
        v.push_back(i % 10);
    }
    reverse(v.begin(), v.end());
    return;
}

bool AscP(unsigned long long i, vector < int > & v) {
    unsigned long long sum = 0;

    numberSplit(i, v);

    for (int j = 1; j <= countDigit(i); j++) {
        sum += integerPower(v[j - 1], j);
    }
    cout << sum << endl;
    return i == sum;
}

int main() {
    unsigned long long i = 0;

    while (true) {
        i++;
        vector < int > v;
        if (AscP(i, v) == true) {
            cout << i << endl;
        };
        cout << i << "\r";
    }
}

// inspired by https://twitter.com/engineers_feed/status/1397538007251525633
