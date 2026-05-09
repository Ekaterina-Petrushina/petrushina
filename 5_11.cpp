/*Упражнение 5.11. Измените рассматриваемую программу так, чтобы
она подсчитывала также количество пробелов, символов табуляции и
новой строки.*/
#include <iostream>
#include <cctype> 
using namespace std;
int main() {
    char ch;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    int spaceCnt = 0;   // пробелы
    int tabCnt = 0;     // табуляции
    int newlineCnt = 0; // новые строки
    
    while (cin.get(ch)) { 
        switch (ch) {
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++newlineCnt;
                break;
            default:
                char lowerCh = tolower(ch);
                switch (lowerCh) {
                    case 'a':
                        ++aCnt;
                        break;
                    case 'e':
                        ++eCnt;
                        break;
                    case 'i':
                        ++iCnt;
                        break;
                    case 'o':
                        ++oCnt;
                        break;
                    case 'u':
                        ++uCnt;
                        break;
                }
                break;
        }
    }
    cout << "Number of vowel a: \t" << aCnt << '\n'
<< "Number of vowel e: \t" << eCnt << '\n'
<< "Number of vowel i: \t" << iCnt << '\n'
<< "Number of vowel o: \t" << oCnt << '\n'
<< "Number of vowel u: \t" << uCnt << '\n';
    cout << "Number of vowel prodel: \t" << spaceCnt << '\n'
<< "Number of vowel tab: \t" << tabCnt << '\n'
<< "Number of vowel newline: \t" << newlineCnt << endl;
    return 0;
}