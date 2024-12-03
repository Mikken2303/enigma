#include "main.h"

int check_csv();
int check_args(int argc, char *argv[]){
    std::string help= "> 1. and only argument should be a file conataing rotor settings\n"
                "> default file can be found at https://github.com/Mikken2303/enigma\n"
                "> you can also make your own, the program will automatically checks its validity\n"
                "> use argument --help to show this message\n";
    if(argc != 2 || std::strcmp(argv[1], "--help") == 0){
      std::cout << help;
      return 1;
    }
    std::ifstream inFile(argv[1]);
    if(!inFile){
      std::cout << "> could not open file\n" << help;
      return 1;
    }
    return 0;
}


int main(int argc, char *argv[]){
	check_args(argc,argv);
    std::cout << "[1]. run by string\n"
    	"[2]. run by char\n"
    	"[3]. setup\n"
    	"[4]. sudo setup\n";
    int mode;
	if (std::cin >> mode) {
    	switch (mode) {
        	case 1:
        		std::cout << "Running by string...\n";
        		break;
    		case 2:
        		std::cout << "TODO\n";
                return 0;
        		break;
    		case 3:
        		std::cout << "TODO\n";
                return 0;
        		break;
    		case 4:
        		std::cout << "TODO\n";
                return 0;
        		break;
    		default:
        		std::cout << "Invalid input\n";
        		break;
    	}
    } else {
    	std::cout << "Invalid input\n";
    	std::cin.clear();  // Clear error flags
    	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clear input buffer
	}
    return 0;
}