#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv){
    char str[256];
    char str2[256];
    char str1[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *ptr;
    int  count=1;
    int  charcount;
    int  intcount;
    int  strcount;
    int  i=0;
    
    std::cout << "Assignment #2-1, Brenda Tran, bktran8@gmail.com" << endl;
    if(argc >=3 || argc == 0 || argc ==1){
        std::cerr << "ERROR! Program accepts 1 command line argument." << endl;
        return 0;
    }else if(strcmp(argv[1],"0")==0){
        exit(1);
    }else if((atoi(argv[1]))==0){
        std::cerr << "ERROR! Program expected integer argument." << endl;
        return 0;
    }
    int N = (atoi(argv[1]));
    while(i<N){
        std::cout << ">";
        std::cin.getline(str, sizeof(str));
        strcpy(str2,str);
        int charcount = strlen(str);
        ptr = strtok(str, " \n");
        count = 0;
        while (ptr != '\0'){
            count ++;
            ptr = strtok('\0', " \n");
        }
        if (charcount>65){
            cout << "ERROR! Input string too long." << endl;
        }else if (count>2 || count == 0 || str2[0] == ' '){
            cout << "ERROR! Incorrect number of tokens found." << endl;
        }else{
            strcount = 0;
            intcount = 0;
            ptr = strtok(str2, " \n");
            while (ptr != '\0'){
                if(strcasecmp(ptr, "quit") ==0 && count ==1){
                   exit(1);
            }
            while(ptr != '\0') {
            if((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')){
                strcount++;
            }else if(*ptr >= '0' && *ptr <= '9'){
                if(strpbrk(ptr,str1)){ 
                    strcount++;
                }else if(strchr(ptr,'.')){
                    strcount++;
                }else{
                    intcount++;
                }
                }
            
        ptr = strtok('\0', " \n");
        }
    if(intcount == 2 ||strcount == 2 ){
        std::cerr << "ERROR! Expected STR INT." << endl;
        }else if (intcount ==1 && strcount ==1){
            std::cout << "STR INT" << endl;
            continue;
        }
    if(intcount==1 && strcount ==0){
        std::cerr << "ERROR! Expected STR." << endl;
        }else if(intcount == 0 && strcount ==1){
            std::cout << "STR" << endl;
        }else{
            continue;
        }
    }
  }
  i++;   
        
    }
    return 0;
}
        
