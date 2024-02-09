#include <iostream>
#include <list>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    list<int> people;
    for (int i = 1; i <= n; ++i) people.push_back(i);

    auto it = people.begin();
    cout << "<";
    while (!people.empty()) {
        for (int count = 1; count < k; ++count) {
            ++it;
            if (it == people.end()) it = people.begin();
        }
        if(people.size() == 1) cout << *it;
        else
            cout << *it << ", ";
        it = people.erase(it);
        if (it == people.end()) it = people.begin();
    }
    cout << ">";
    return 0;
}
