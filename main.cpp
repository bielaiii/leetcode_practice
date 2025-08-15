#include <string>

#include <iostream>

using namespace std;

template<typename T>
void print(T t);

template<typename T>
void foo(T value) {
    print(value);
}


struct A {
    string s = "hello";
};

void print(string s) {
    cout << s << endl;
}

void print(int i) {
    cout << i << endl;
}

void print(A a) {
    cout << a.s << endl;
}

int main(int argc, char *argv[])

{
    string s("hello");
    // foo(s); // 编译出错
    // foo(1); // 编译出错
    foo(A());
    return 0;
}
