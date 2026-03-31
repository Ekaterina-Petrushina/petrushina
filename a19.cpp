#include <iostream>
int main() {
    std::cout<<"enter two numbers:"<<std::endl;
    int v1 = 0, v2 = 0, s=0;
    std::cin>>v1>>v2;
    if(v1<v2){
    std::cout<<"range betwen " << v1<< " and "<< v2<< std::endl;
    while (s < v2-1) {
        s=v1+1;
        std::cout << s <<" ";
        ++v1;
    }
}
else{std::cout<<"range betwen " << v2<< " and "<< v1<< std::endl;
    while (s < v1-1) {
        s=v2+1;
        std::cout << s <<" ";
        ++v2;
    }}
    return 0;
}