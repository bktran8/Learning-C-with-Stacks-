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
    int char_Count = 0;
    int num_Count = 0;

    for(;;){
        
        cout << "> ";
    
        getline(cin, input);
        stringstream stream(input);
        
        while(getline(stream, token, ' ')){
            num_Tokens++;
            if((token_Length=token.length() > MAXCHARS)){
                break;
            }
            for(int i = 0; i < token.length() ; i++) {
                if(isalpha(token[i])) { //still need to check for decimal
                    char_Count++;
                } else {
                    num_Count++;
                }
            }


            if(char_Count == 0) {
                (*temp).push_back("INT ");
            } else {
                (*temp).push_back("STR ");
            }

            char_Count = 0;
            num_Count = 0;
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

