#include <vector>
#include <iostream>
using namespace std;

template <class T>
class Stack{
public:
    vector<T> data;


    void Push(T);
    T Pop();
    void Print();


};

template <class T>
void Stack<T>::Push(T){
    data.push_back(T);
}

template <class T>
T Stack<T>::Pop(){
    data.pop_back();
}
template <class T>
void Stack<T>::Print(){
    cout<<"[ ";
    for( int i=0; i<data.size(); i++){
        cout<< data[i] << " ";
    }
    cout << "]"<<endl;

}





