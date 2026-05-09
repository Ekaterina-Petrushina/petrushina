/*Упражнение 5.10. Программа подсчета гласных имеет одну проблему:
она не учитывает заглавные буквы как гласные. Напишите программу,
которая подсчитывает гласные буквы как в верхнем, так и в нижнем
регистре. То есть значение счетчика aCnt должно увеличиваться при
встрече как символа 'a', так и символа 'A' (аналогично для остальных
гласных букв).*/
#include<iostream>
#include<string>
using namespace std;
int main(){
// инициализировать счетчики для каждой гласной
unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0,uCnt = 0;
char ch;
while (cin >> ch) {
    char lower = std::tolower(ch);
// если ch - гласная, увеличить соответствующий
if(lower== 'a')
++aCnt;
if(lower== 'e')
++eCnt;
if(lower== 'i')
++iCnt;
if(lower== 'o')
++oCnt;
if(lower== 'u')
++uCnt;}
// вывод результата
cout << "Number of vowel a: \t" << aCnt << '\n'
<< "Number of vowel e: \t" << eCnt << '\n'
<< "Number of vowel i: \t" << iCnt << '\n'
<< "Number of vowel o: \t" << oCnt << '\n'
<< "Number of vowel u: \t" << uCnt << endl;
return 0;
}