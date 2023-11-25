#include <iostream>

using namespace std;


int f(int k) {
    if (k <= 36) {
        return (k - 1) / 4;
    } else {
        return 8 - (k - 37) / 2;
    }
}

int main () {
    vector<int>  v(9, 0);
    int wod, n;
    int ans = 0, curr = 0;
    cout << "ans: " << ans << "curr: " << curr << endl;
    cout << "enter n:";
    cin >> wod;
    for (size_t i = 0; i < wod; i++)
    {
        cin >> n;
        v[f(n)] += 1;
    }

    for (size_t i = 0; i < 9; i++)
    {
       for(int i = 0; i < v.size(); i++)
            std::cout << v[i] << ' ';
        cout << endl;
        if (v[i] == 6) {
            cout << "check 1" << endl;
            curr += 1;
            ans = max(ans, curr);
        } else {
            curr = 0;
        }
    }
    std::cout << "answer: " << ans << endl;
}