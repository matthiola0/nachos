#include "syscall.h"

int main(void)
{
	char *test = "1234";
	int i, count, result, size = (sizeof(test)/sizeof(test[0]));
	char read[100];
	
	result = Open("file1");
	if(result < 0) {
		Msg("Opening file failed!");
	}
	for (i = 0; i < size; ++i) {
		count = Write(test + i, 1);
		if (count != 1) Msg("Writing file failed!");
	}
	result = Close();
	if (result != 1) Msg("Closing file failed!");


	result = Open("file1");
	if(result < 0) {
		Msg("Opening file failed!");
	}
	count = Read(read, size);
	if (count != size) Msg("Reading file failed!");
	
	result = Close();
	if (result != 1) Msg("Closing file failed!");
	
	for (i = 0; i < size; ++i) {
		if (read[i] != test[i]) Msg("Reading wrong result:'(");
	}
	Msg("=====Congratulations!!!=====");
}
