/*Упражнение 5.20. Напишите программу, которая читает
последовательность строк со стандартного устройства ввода до тех пор,
пока не встретится повторяющееся слово или пока ввод слов не будет
закончен. Для чтения текста по одному слову используйте цикл while.
Для выхода из цикла при встрече двух совпадающих слов подряд
используйте оператор break. Выведите повторяющееся слово, если оно
есть, а в противном случае отобразите сообщение, свидетельствующее о
том, что повторяющихся слов нет.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string current, previous;
    bool found = false;
    cout << "Enter text: " << endl;
    if (cin >> previous) {
        while (cin >> current) {
            if (current == previous) {
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