#include <vector>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include "Tokenizer.hpp"
#include "Stack.hpp"


using namespace std;
int input_Count;

int main(int argc, char** argv) {
    cout << "Assignment #2-3, Brenda Tran, bktran8@gmail.com" << endl;
    if (argc >= 3 || argc == 0 || argc == 1) {
        cerr << "ERROR! Program accepts 1 command line argument." << endl;
        return 0;
    } else if (strcmp(argv[1], "0") == 0) {
        exit(1);
    } else if ((atoi(argv[1])) == 0) {
        cerr << "ERROR! Program expected integer argument." << endl;
        return 0;
    }
    int N = (atoi(argv[1]));
    Tokenizer test;
    while (input_Count <= N) {
        vector<string> *temp = test.GetTokens();
        if(((*temp).front() =="quit")||((*temp).front() =="quiT")){
            exit(0);
        }
        for (int i = 0; i < (*temp).size(); i++) {
            if(i !=(*temp).size()-1){
                cout<< " ";
            } 
        }
        cout<<endl;
        continue;
    }
    return 0;
}
