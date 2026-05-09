/*Упражнение 5.21. Переделайте программу из упражнения раздела 5.5.1
так, чтобы она искала дубликаты только тех слов, которые начинаются с
прописной буквы.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string current, previous;
    bool found = false;
    cout << "Enter text: " << endl;
    if (cin >> previous) {
        while (cin >> current && !current.empty()) {
            if (current == previous && isupper(current[0]) && isupper(previous[0])) {
                found = true;
                break;
            }
            previous = current;
        }
    }
    if (found) {
        cout << "Repeat word: " << current << endl;
    } else {
        cout << "No repeated words" << endl;
    }
    
    return 0;
}