#include <string>
#include <cstdlib>

//Este código está escrito "al voleo"
//no está probado...

void printProgress (double percentage){
	
	int PBWIDTH       = 60;
	std::string PBSTR = std::string(PBWIDTH, '*');
	

	int val  = (int) (percentage * 100);
	int lpad = (int) (percentage * PBWIDTH);
	int rpad = PBWIDTH - lpad;
	printf ("\r%3d%% [%.*s%*s]", val, lpad, PBSTR.c_str(), rpad, "");
	fflush (stdout);
}


int main(){
  for(uint32_t i = 0; i  < max_iter; i++){
    printProgress((float)i / float(max_iter -1 ) );
  }
  
  return(EXIT_SUCCESS);
}
