/*Упражнение 5.12. Измените рассматриваемую программу так, чтобы
она подсчитывала количество встреченных двухсимвольных
последовательностей: ff, fl и fi.*/
#include <iostream>
#include <cctype> 
using namespace std;
int main() {
    char ch;
    char current, previous = '\0'; 
    int ffCnt = 0, flCnt = 0, fiCnt = 0;
    while (std::cin.get(current)) {
        // Подсчет двухсимвольных последовательностей
        if (previous == 'f') {
            switch (current) {
                case 'f':
                    ++ffCnt;
                    break;
                case 'l':
                    ++flCnt;
                    break;
                case 'i':
                    ++fiCnt;
                    break;
            }

        }
        previous = current;
    }
    cout << "Number of vowel ff: \t" << ffCnt << '\n'
<< "Number of vowel fl: \t" << flCnt << '\n'
<< "Number of vowel fi: \t" << fiCnt << endl;
    return 0;
}