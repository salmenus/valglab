#include <cstdlib>
#include <cstdio>
#include <cstring>

#define MAX_LENGTH (12)

int main()
{
	// Allocate 8 byte of memory
	char* str = (char*) malloc( MAX_LENGTH );

	// Copy some data into that memory
	memcpy( str, "I <3 Ruby !", MAX_LENGTH );

	// Display that data
	printf( "%s\n", str );

	// Free the memory
	free( str );

	return 0;
}
