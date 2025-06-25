//
// Created by laura on 16/06/2025.
//
#include <iostream>

using namespace std;

int factorial(int a){
    if(a <= 1){
        return 1;
    }
    else{
        return a * factorial(a-1);
    }
}

int main(){
    cout<<factorial(4);
}