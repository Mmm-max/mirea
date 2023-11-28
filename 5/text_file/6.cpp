// Поиск в тексте слова минимальной длины.
// chearch in the text file minimal size word

#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;


int main () {
    FILE *fp;
    char word[100];
    int i, count = 0, answer = 100000, start_index = 0;
    string answer_word, curr_word;

    fp = fopen("/Users/eugensolopov/code/cpp/mirea_homework/5/text_file/text_19.txt", "r");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        exit(1);
    }

    while (fgets(word, 100, fp)!= NULL) {
        for (i = 0; word[i]!= '\0'; i++) {
            if (isalpha(word[i])) {
                // cout << "test" << i << "count" << count << " word" << word << endl;
                count += 1;
                curr_word += word[i];
            } else if (count > 0 && answer > count) {
                answer = count;
                answer_word = curr_word;
                count = 0;
                curr_word = "";
            } else {
                count = 0;
                start_index = i;
                curr_word = "";
            }
        }
        // printf("%s\n", word);
        printf("answer: %d\n", answer);
        cout << "answer word: " << answer_word << endl;
    }

    fclose(fp);
    return 0;
}