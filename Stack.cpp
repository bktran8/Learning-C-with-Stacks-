#include <iostream>
#include <vector>
#include "Stack.hpp"

using namespace std;

template <class T>
void Stack<T>::Push(T d){
    data.push_back(d);
}

template <class T>
T Stack<T>::Pop(){
    data.pop_back();
}
template <class t>
void Stack<T>::Print(){
    cout<<"[ ";
    for( int i=0; i<data.size(); i++){
        cout<< data[i] << " ";
    }
    cout << "]"<<endl;

}
