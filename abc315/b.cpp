#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int numberOfMonth;
    cin >> numberOfMonth;
    std::vector<unsigned int> dayPerMonth(numberOfMonth);
    unsigned int totalDays = 0;
    for ( auto& d : dayPerMonth ) {
        cin >> d;
        totalDays += d;
    }
    unsigned int middleOfYear = (totalDays + 1) / 2;
    unsigned int monthUntilThen = 1;
    unsigned int totalDaysUntilTheMonth = 0;
    unsigned int totalDaysOneMonthAgo = 0;
    for ( auto& d : dayPerMonth ) {
        totalDaysUntilTheMonth += d;
        totalDaysOneMonthAgo += d;
        if( middleOfYear <= totalDaysUntilTheMonth ) {
            totalDaysOneMonthAgo -= d;
            break;
        }
        monthUntilThen++;
    }
    unsigned int theDay = middleOfYear - totalDaysOneMonthAgo;
    cout << monthUntilThen << ' ' << theDay << endl;
    return 0;
}
