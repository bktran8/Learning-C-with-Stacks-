#include <vector>
#include <iostream>
#include <sstream>
#include "Tokenizer.hpp"

using namespace std;

vector<string>* Tokenizer::GetTokens(){
    vector<string>* temp = new vector<string>;
    string input;
    string token;
    int num_Tokens = 0;
    int token_Length = 0;
    
    for(;;){
        getline(cin, input);
        stringstream stream(input);
        
        while(getline(stream, token, ' ')){
            num_Tokens++;
            if((token_Length=token.length() > MAXCHARS)){
                break;
            }
            //code for STR/INT
        }
        if(token_Length > MAXCHARS) {
            cout << "ERROR! Input string too long." << endl;
            num_Tokens = 0;
            (*temp).clear();
            continue;
        }

        if ((num_Tokens > MAXTOKENS) || (num_Tokens == 0)) {
            cout << "ERROR! Incorrect number of tokens found." << endl;
            num_Tokens = 0;
            (*temp).clear();
            continue;
        } else {
            break;
        }

    }
    return temp;
}

