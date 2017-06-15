#include <iostream>

using namespace std;

class Stack{
  
        int data;
        void Push(int d);
        int Pop();
        void Print();
        
        
};

template class Stack<int>;
void Stack::Push(int d){
    this ->data.push_back(int d);
}

template class Stack<int>;
int Stack<int>::Pop(){
    if(this->data.size() ==0){
        return -1;
    }
    int ret = this ->data[this-.data.size()-1];
    this->data.pop_back();
    return ret;
}
template class Stack<int>;
void Stack<int>::Print(){
    cout<<"[ ";
    for( int i=0; i<this-.data.size(); i++){
        cout<<this->data[i] << " ";
    }
    cout << "]"<<endl;
    
}
