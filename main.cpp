#include "main.h"


int check_args(int argc, char *argv[]){
    if(argc != 2 || std::strcmp(argv[1], "--help") == 0){
      std::cout << "1. and only argument should be a file conataing rotor settings\n"
                   "default file can be found at https://github.com/Mikken2303/enigma\n"
                   "you can also make your own, the program will automatically checks its validity\n";
      return 1;
    }
    return 0;

}
int main(int argc, char *argv[]){

}