#include"header.h"

template<typename T>
void print_2d_array(T toprint)
{
    for (auto it : toprint) {
        for (auto item : it) {
            cout << item <<" -> ";
        }
        cout << endl;
    }
}