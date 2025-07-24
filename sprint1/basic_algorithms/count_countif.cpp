#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void PrintWorryCount(const vector<bool>& is_nervous) {
    cout << count(is_nervous.begin(), is_nervous.end(), true) << "\n";
}

bool IsAa(const string& str){
    return !str.empty() && (str[0] == 'A' || str[0] == 'a');
}

int CountStartsWithA(const vector<string>& xs) {
    // посчитайте число строк, начинающихс¤ на букву A или a
    return count_if(xs.begin(), xs.end(), IsAa);
}

int main() {
    // не меняйте содержимое функции main
    PrintWorryCount({true, true, false, true});

    cout << CountStartsWithA({"And"s, "another"s, "one"s, "gone"s, "another"s,
                              "one"s
                              "bites"s,
                              "the"s, "dust"s}) << "\n";
    return 0;
}


