#include <stdio.h>
int main (int argc, char** argv)
{
	if(argc > 1){
		int i, loopCount = argc;
		for(i = 0;i<loopCount;i++){
			printf("%s\n", *(argv+i));		
		}
	}
	//test

  return(0);
}
