#include "Tokenizer.hpp"
#include <string>


std::vector<std::string>* GetTokens(const char* str){
    vector<string>* GetTokens;
    
    bool IN = true;
    int tokens=0;
    
    while(*str != '\0'){
        if(std::isspace(*str)) {
         IN = true;
        }else if(IN){
            tokens++;
            IN = false;
        }
        str++;
    }
    if(tokens>2 || tokens ==0){
        std::cout<<"ERROR! Incorrect number of tokens found." << std::endl;
        
    
    }
    while (tokens != 0){
        GetTokens++;
        tokens--;
    }
    return GetTokens;
    
    
    
 
}
