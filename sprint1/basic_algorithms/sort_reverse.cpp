#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

pair<bool, double> Median(vector<double>& vec){

    if (vec.empty()){
        cout << "ERROR: vector mustn't be empty\n";
        return {false, 0.0};
    }

    sort(vec.begin(), vec.end());
    if (vec.size() % 2 == 0)
        return {true, (vec[vec.size() / 2] + vec[vec.size() / 2 - 1]) / 2};
    return {true, vec[vec.size() / 2]};
}


int main(){
    int n; cin >> n;
    vector<pair<int, string>> people;
    people.reserve(n);

    for (int i = 0; i < n; ++i){
        
        string name;
        cin >> name;

        int age;
        cin >> age;

        people.push_back(pair<int, string>(age, name));
    }

    sort(people.begin(), people.end());

    for (const auto& person: people){
        cout << person.second << "\n";
    }


}