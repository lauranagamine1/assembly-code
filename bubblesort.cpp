//
// Created by laura on 13/06/2025.
//
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& array){ // dont care
    for(int i=0; i<array.size();++i){ // dont care
        cout<<array[i]<<" "; // dont care
    }
}

vector<int> bubblesort(vector<int>& v){
    print(v); // dont care
    cout<<endl<<"tamaño: "<<v.size()<<endl; // dont care
    for(int j=0; j<v.size();++j){
        for(int i=0; i<v.size()-1;++i){
            if(v[i+1]<v[i]){
                // basicamente un swap
                int a = v[i];
                v[i]=v[i+1];
                v[i+1]= a;
                print(v); // dont care
                cout<<endl; // dont care
            }
        }
        cout<<"nueva iter "<<j+1<<endl; // dont care
    }
    return v;
}

int main(){
    vector<int> v = {5,4,3,2,1};
    auto v2 = bubblesort(v);
    return 0;
}