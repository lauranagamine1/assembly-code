//
// Created by laura on 23/06/2025.
//
#include <bits/stdc++.h>
using namespace std;

int suma(int a, int b){
    if(a ==0){
        return b;
    }
    return suma(a-1,b+1);
}

int main(){
    int a=0;
    for(int i=1; i<4;++i){
        a += suma(i,2*i); // 1 y 2, 2, 4, 3,6
        cout << a<<endl;
        // i = 1: 1,2 => 3
        // i = 2: 2,4 => 6
        // i = 3: 3,6 => 9
        // = 18
    }
    cout<<"a:"<<a<<endl;
}