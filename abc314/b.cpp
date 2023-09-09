#include <bits/stdc++.h>
using namespace std;

class Person {
    private:
        int numberOfBets;
        vector<int> bets;

    public:
        void setPerson(int numberOfBets, vector<int> bets) {
            this->numberOfBets = numberOfBets;
            bets.resize(numberOfBets);
            this->bets = bets;
        }

        int getNumberOfBets() { return numberOfBets; }
        vector<int> getBets() { return bets; }
};

int main() {
    int numberOfPeople;
    vector<Person> people(numberOfPeople);
    for(auto& person : people) {
        int numberOfBets;
        cin >> numberOfBets;
        vector<int> bets(numberOfBets);
        for(auto& bet : bets) cin >> bet;
        person.setPerson(numberOfBets, bets);
    }

    int outcome;
    cin >> outcome;
    int numberOfPeopleMatched = 0;
    for(auto& person : people) if(std::count(person.getBets().begin(), person.getBets().end(), outcome)) numberOfPeopleMatched++;
    vector<Person> peopleMatched(numberOfPeopleMatched);
    for(auto& personMatched : peopleMatched) {
        
    }

    return 0;
}