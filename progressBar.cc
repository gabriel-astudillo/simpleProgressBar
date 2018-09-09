
//Header obligatarios
#include <string>
#include <cstdlib>
#include <iostream>

//Header para el ejemplo
#include <chrono>
#include <thread>


void printProgress (double percentage){
	
	int PBWIDTH = 50;
	
	std::cerr<<"\r\033[2K" << "[" 
        << std::string(PBWIDTH * percentage, '*')<<std::string( PBWIDTH * (1.0-percentage) , '_')
        <<"]" << (int)(percentage*100)  << "%" << std::flush;
		
}


int main(){
	uint32_t max_iter = 1000;
	for(uint32_t i = 0; i  < max_iter; i++){
		printProgress((float)i / float(max_iter -1 ) );
		std::this_thread::sleep_for(std::chrono::milliseconds(5));	//C++11
	}
	std::cout << std::endl;
  
	return(EXIT_SUCCESS);
}
