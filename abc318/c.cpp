#include <bits/stdc++.h>
using namespace std;

int main() {
    int numberOfdays;
    long long amountOfPass, feeOfPass;
    cin >> numberOfdays >> amountOfPass >> feeOfPass;
    vector<int> fare(numberOfdays);
    for(auto& f : fare) cin >> f;
    sort(fare.begin(), fare.end(), greater<int>());
    int boughtPass = 0;
    for(int i=0;i<numberOfdays-1;i++) {
        int feeForDays = 0;
        for(int j=0;j<amountOfPass;j++) feeForDays += fare[i+j];
        if(feeOfPass<feeForDays) {
            boughtPass++;
            for(int j=0;j<amountOfPass;j++) {
                fare[i+j] = 0;
            }
        }
    }
    int sum = accumulate(fare.begin(), fare.end(), 0);
    cout << boughtPass*feeOfPass+sum << endl;
    return 0;
}
