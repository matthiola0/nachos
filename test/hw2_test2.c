#include "syscall.h"

int main(){
	int i, j;
	for(i = 1;i < 8; ++i){
		PrintInt(2);
		for(j = 1;j < 50; ++j);
	}
	Exit(2);
}
