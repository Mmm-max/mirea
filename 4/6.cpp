#include <iostream>
#include <vector>

using namespace std;


int main() {
    int scale = 1, answer, l;
    size_t actual_index;
    string wod;
    string romNumb = "IVXLCDM";
    vector<int> arabNumb = {1, 5, 10, 50, 100, 500, 1000};

    cin >> wod;
    l = wod.length();
    answer = 0;
    
    for (int i = 0; i < l; i++) {

        actual_index = romNumb.find(wod[i]);
        if (i + 1 < l && romNumb.find(wod[i + 1]) > actual_index) {
            answer += arabNumb[actual_index] * -1;
        } else if (i + 1 < l && romNumb.find(wod[i + 1]) == actual_index) {
            scale += 1;
        } else {
            answer += arabNumb[actual_index] * scale;
            scale = 1;
            cout << "i: " << i << " index: " << actual_index << " scale: " << scale << " arabNumb: " << arabNumb[actual_index] << " romNumb: " << romNumb[actual_index] << " answer: " << answer << "\n";
        }
    }

    cout << "answer: " << answer << "\n";
}
