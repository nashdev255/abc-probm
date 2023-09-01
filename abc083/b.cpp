#include <bits/stdc++.h>
using namespace std;

int calcDigitSum(int num) {
    int digitSum = 0;
    int digit = num;
    while(digit) {
        digitSum += digit%10;
        digit /= 10;
    }
    return digitSum;
}

int main() {
    int sum = 0;
    int n, a, b;
    cin >> n >> a >> b;
    for(int i=1;i<=n;i++) {
        int digitSum = calcDigitSum(i);
        if(a<=digitSum&&digitSum<=b) sum += i;
    }
    cout << sum << endl;
    return 0;
}
