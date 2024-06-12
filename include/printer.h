#ifndef PRINTER_H
#define PRINTER_H
#include<iostream>
#include<ranges>
template<typename T>
extern void print_1d_array(T toprint);

template<typename T>
void print_1d_array(T toprint){
    for (auto it : toprint) {
        std::cout << it << " ";
    }
    //std::copy(toprint.begin(), toprint.end(), std::ostream_iterator<T>(std::cout, " "));
    std::cout << "\n------------------\n";
}

template <typename Container>
requires std::ranges::range<Container> && std::ranges::output_range<std::ostream, typename Container::value_type>
void print_container(const Container& cont) {
    std::copy(cont.begin(), cont.end(), std::ostream_iterator<typename Container::value_type>(std::cout, " "));
    std::cout << '\n';
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