#include <iostream>
#include <string>
#include <type_traits>
#include <utility>

using std::cout;
using std::endl;


template<typename T>
struct is_int_reference : std::false_type{};


template<>
struct is_int_reference<int&> : std::true_type{};

template<typename T>
typename std::enable_if<std::is_floating_point_v<T> && !std::is_reference_v<T>, void>::type Printer(T t)
{
    cout << "is float\n";
}

template<typename T>
typename std::enable_if<is_int_reference<T>::value, void>::type Printer(T && t)
{
    cout << "either lvalue or rvalue\n";
}


/* template<typename T>
typename std::enable_if<is_int_reference<T>::value, void>::type Printer(T && t)
{
    cout << "either lvalue or rvalue\n";
} */


int main() {
    std::string str = "-1231";
    cout << std::stoi(str) << "\n";
    return 0;
}
