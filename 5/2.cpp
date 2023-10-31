#include <iostream>

using namespace std;

vector<int> Sieve_of_Eratosthenes(int n) {
    vector<int> primes, answer;
    // cout << "check 3 \n";
    for (int i = 0; i <= n; i++) {
        // cout << "i: " << i << " n: " << n << "\n";
        primes.push_back(i);
    }
    // cout << "check 4 \n";
    int i = 2;
    for (size_t i = 2; i <= n; i++)
    {
        if (primes[i] != 0) {
            for (size_t j = i + i; j <= n; j += i)
            {
                primes[j] = 0;
                // cout << "j: " << j << " primes[j]: " << primes[j] << "\n";
            }
            
        }
    }
    
    for (size_t i = 0; i < primes.size(); i++)
    {
        if (primes[i] != 0)
        {
            answer.push_back(primes[i]);
        }
    }
    
    return answer;
    
}
// Решето Эратосфена
int main() {
    vector<int> answer;
    int n;
    cout << "enter number: ";
    cin >> n;
    // cout << "check 1 \n";
    answer = Sieve_of_Eratosthenes(n);
    // cout << "check 2 \n";
    cout << "anser: ";
    for (size_t i = 1; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    
}