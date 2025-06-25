//
// Created by laura on 17/06/2025.
//
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n <=2){
        return 1;
    }else{ // n>2
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main() {
    //cout<<fibonacci(1)<<endl;
    //cout<<fibonacci(3)<<endl;
    //cout<<fibonacci(0)<<endl;
    cout<<fibonacci(5)<<endl;
    cout<<fibonacci(6)<<endl;
    cout<<fibonacci(7)<<endl;

}