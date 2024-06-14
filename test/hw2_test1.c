#include "syscall.h"

int main(){
	int i, j;
	for(i = 1;i < 10; ++i){
		PrintInt(1);
		for(j = 1;j < 50; ++j);
	}
	Exit(1);
}
