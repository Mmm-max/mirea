#include <iostream>
#include <vector>

using namespace std;

double multipy_matrixx(vector<vector<int>> a, vector<vector<double>> b, int n, int m, int cnt_iter) {
    double answer = 0;
    for (int i = 0; i < cnt_iter; i++) {
        answer += a[n][i] * b[i][m];
    }
    return answer;
}

void print_matrixx(vector<vector<double>> matrixx) {
    size_t n, m;
    n = matrixx.size();
    m = matrixx[0].size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrixx[i][j] << "\t";
        }
        cout << "\n";
    }
}


int main() {
    vector<vector<int>> a(3, vector<int>(4));
    vector<vector<double>> b(4, vector<double>(2));
    vector<vector<double>> c(3, vector<double>(2));
    a = {{5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0}};
    b = {{1.2, 0.5}, {2.8, 0.4}, {5, 1}, {2, 1.5}};

    // cout << "size: " << a.size();
    for (int n = 0; n < a.size(); n++) {
        for (int m = 0; m < b[0].size(); m++) {
            c[n][m] = multipy_matrixx(a, b, n, m, a[0].size());
        }
    }

    print_matrixx(c);
}