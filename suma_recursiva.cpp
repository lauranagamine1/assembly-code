//
// Created by laura on 16/06/2025.
//

#include <bits/stdc++.h>
using namespace std;

int suma(int a, int b){
    if(a ==0) {
        return b;
    }
    return suma(a-1,b+1);
}

int main() {
    cout<<suma(2,3);
}