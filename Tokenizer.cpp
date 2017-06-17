#include <vector>
#include <iostream>
#include <sstream>
#include <cstring>
#include <stdlib.h>
#include "Tokenizer.hpp"

using namespace std;

vector<string>* Tokenizer::GetTokens() {
    vector<string>* temp = new vector<string>;
    string input;
    string token;
    static int input_Count = 0;


    for(;;) {
        cout << "> ";
        int num_Tokens = 0;
        int token_Length = 0;
        int str_Count = 0;
        int int_Count = 0;
        int char_Count = 0;
        int num_Count = 0;

        getline(cin, input);
        stringstream stream(input);


        while (getline(stream, token, ' ')) {
            num_Tokens++;
            if((token_Length = token.length()) > MAXCHARS) {
                break;
            }
            if ((num_Tokens > MAXTOKENS) || (num_Tokens == 0)) {
                break;
            }
            for(int i = 0; i < token.length() ; i++) {
                if(isalpha(token[i])) {
                    token[i]=tolower(token[i]);
                    char_Count++;
                } else {
                    num_Count++;
                }
            }
            if(char_Count == 0) {
                int_Count++;
            } else {
                str_Count++;
            }
            if(char_Count == 0) {
                (*temp).push_back("INT");
            } else {
                (*temp).push_back("STR");
            }
            input_Count++;
            
            char_Count = 0;
            num_Count = 0;

        }

        if(token_Length > MAXCHARS) {
            cout << "Input string too long." << endl;
            (*temp).clear();
            continue;
        }

        if ((num_Tokens > MAXTOKENS) || (num_Tokens == 0)) {
            cout << "ERROR! Incorrect number of tokens found." << endl;
            (*temp).clear();
            continue;
        } else if (num_Tokens==1){
            if(!strncmp(&token[0],"quit",4)) {
               (*temp).clear();
               (*temp).push_back("quit");
               break;
            }
        }
        if((int_Count == 2)|| (str_Count ==2)){
            cout<<"ERROR! Expected STR INT."<<endl;
            (*temp).clear();
            continue;
        }
        if((int_Count == 1) && (str_Count == 0)){
            cout<<"ERROR! Expected STR."<<endl;
            (*temp).clear();
            continue;
        }
        break;

    }
    return temp;
}

