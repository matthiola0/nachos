#include "syscall.h"

int main(void)
{
	int result = Create("file1");
	if (result != 1) Msg("Creating file failed!");
	
	result = Open("file1");
	if(result < 0) {
		Msg("Opening file failed!");
	}
    
    result = Close();
	if (result != 1) Msg("Closing file failed!");
	
	Msg("Success :)");
}
