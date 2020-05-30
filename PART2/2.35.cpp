#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    const int i = 42;
    auto j = i; //auto->int
    const auto &k = i; //auto->const int,k是一个指向常量int的常量引用
    auto *p = &i; //auto->const int,p是一个指向常量int的指针
    const auto j2 = i, &k2 = i; //auto->int, k2是一个指向常量int的引用
    cout << "i is " << typeid(i).name() << endl;
    cout << "j is " << typeid(j).name() << endl;
    cout << "k is " << typeid(k).name() << endl;
    cout << "p is " << typeid(p).name() << endl;
    cout << "j2 is " << typeid(j2).name() << endl;
    cout << "k2 is " << typeid(k2).name() << endl;
    system("pause");
    return 0;
}