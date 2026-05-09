/*Упражнение 5.9. Напишите программу, использующую серию
операторов if для подсчета количества гласных букв в тексте,
прочитанном из потока cin.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
// инициализировать счетчики для каждой гласной
unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0,uCnt = 0;
char ch;
while (cin >> ch) {
// если ch - гласная, увеличить соответствующий
if(ch== 'a')
++aCnt;
if(ch== 'e')
++eCnt;
if(ch== 'i')
++iCnt;
if(ch== 'o')
++oCnt;
if(ch== 'u')
++uCnt;}
// вывод результата
cout << "Number of vowel a: \t" << aCnt << '\n'
<< "Number of vowel e: \t" << eCnt << '\n'
<< "Number of vowel i: \t" << iCnt << '\n'
<< "Number of vowel o: \t" << oCnt << '\n'
<< "Number of vowel u: \t" << uCnt << endl;
return 0;
}