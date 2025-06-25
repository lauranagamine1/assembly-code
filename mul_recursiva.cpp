//
// Created by laura on 16/06/2025.
//
#include <bits/stdc++.h>
using namespace std;

int mul(int a, int b){
    if(a == 0 || b == 0){
        return 0;
    }
    if(a == 1){
        return b;
    }
    return a + mul(a,b+1);
}

int main() {
    cout<<mul(2,4);

}