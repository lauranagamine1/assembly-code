//
// Created by laura on 17/06/2025.
//
#include <bits/stdc++.h>
using namespace std;

int f91(int n){
    if(n>= 101){
        return n-10;
    }
    if(n<= 100){
        return f91(f91(n+11));
    }
}
int main() {
    cout<<f91(60);
}