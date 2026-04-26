#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> ivec = {0, 0, 0, 0, 0};
    vector<int>::size_type cnt = ivec.size();
// присвоить значения элементам size...1 вектораivec
for (vector<int>::size_type ix = 0;ix != ivec.size(); ++ix, --cnt)
ivec[ix] = cnt;
for (int val : ivec) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}