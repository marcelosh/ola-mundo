#include <iostream>
#include <unistd.h>
//#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {	
	if(argc == 1) {
		std::cout << "Olá, mundo!\n";
	}
	else {
		int opt;
		
		opt = getopt(argc, argv, "bcdlnt");
		
		switch(opt) {
			case 'b':
				std::cout << "Good Morning, Good Morning!\n";
				break;
			case 'c':
				std::cout << "Good Morning, Captain\n";
				break;
			case 'd':
				std::cout << "Bom dia!\n";
				break;
			case 'l':
				std::cout << "Bom lia!\n";
				break;
			case 'n':
				std::cout << "Boa noite!\n";
				break;
			case 't':
				std::cout << "Boa tarde!\n";
				break;
			default: /* '?' */
				std::cout << "Hm.\n";
				break;
		}
	}
	return 0;
}