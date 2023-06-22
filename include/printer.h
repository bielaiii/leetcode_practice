#ifndef PRINTER_H
#define PRINTER_H
#include<iostream>

template<typename T>
extern void print_1d_array(T toprint);

template<typename T>
void print_1d_array(T toprint){
    for (auto it : toprint) {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    std::cout << "------------------"<<std::endl;
}

template<typename T>
void print_2d_array(T toprint);
template<typename T>
void print_2d_array(T toprint){
    
    for(auto row : toprint){
        for (auto it : row) {
            std::cout << it <<" ";
        }
        std::cout << std::endl;
    }
    std::cout << "------------------"<<std::endl;
}

#endif