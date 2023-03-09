#include <iostream>
#include <memory>

int main(){

//Task is to co-manage dynamically allocated array of integers 
    std::shared_ptr<int[]>ptr1(new int[10]);
    auto ptr2 = ptr1;
    //2 pointers pointing to the same piece of memory 
    return 0;
}