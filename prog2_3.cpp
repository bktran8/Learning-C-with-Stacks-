#include <string>
#include "Stack.hpp"
#include "Tokenizer.hpp"
#include "Stack.hpp"


using namespace std;


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
    Stack<string> test2;
    for( int input_Count = 0; input_Count < N; input_Count++) {
        vector<string> *temp = test.GetTokens();
        if(((*temp).front() =="quit")||((*temp).front() =="quiT")){
            exit(0);

        }
        if(((*temp).front()) == "push"){
            test2.Push((*temp).back());
        }
        if(((*temp).front()) == "pop"){
            test2.Pop();
        }
    }
    test2.Print();
    return 0;
}
