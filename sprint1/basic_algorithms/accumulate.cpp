#include <iostream>
#include <vector>
#include <numeric>
#include <set>
#include <string>

using namespace std;

double Average(const vector<int>& xs) {
    // посчитайте среднее арифметическое: поделите сумму на размер
    // суммирование начните с 0.0 - тогда результат выражения будет вещественным числом
    if (xs.empty()) return 0.0;

    return (accumulate(xs.begin(), xs.end(), 0.0) / xs.size());

}

string AddTail(string current_string, string b){
    return current_string + "-" + b;
}

string AddStopWords(const string& query, const set<string>& stop_words) {
    return query + accumulate(stop_words.begin(), stop_words.end(), ""s, AddTail);
}

int main() {
    // не меняйте код main
    cout << Average({1, 2, 2}) << endl;
    return 0;
}