#include "Tokenizer.hpp"



std::vector<std::string>* GetTokens(const char *str, char d = ' '){
    vector<string>* result;
    const char *start = str;
    int count = 1;
    while (*str != d && *str != '\0'){
        str++;
        count++;
        result->push_back(string(start,str));
    }
    if (count>2 || count == 0 || str[0] == ' '){
            cout << "ERROR! Incorrect number of tokens found." << endl;
    }
    return result;
    
    
    
   
    
    
  
}
