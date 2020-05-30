#include <iostream>
using namespace std;
#define f(x) (x) = 42; cout << (x) << endl;
int main() {
    int i = 0, &r = i;
    const int ci = i, &cr = ci;
    //auto->int
    auto a = r;
    auto b = ci;
    auto c = cr;
    //auto->int*
    auto d = &i;
    //auto->const int*
    auto e = &ci;
    //auto->int
    const auto F = ci;
    //auto->const int
    auto &g = ci;
    

    f(a);
    f(b);
    f(c);
    //f(d);//int*
    //f(e);//const int *
    //f(g);//const int 
    system("pause");
    return 0;
}