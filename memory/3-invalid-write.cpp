#include <cstdlib>
#include <cstdio>
#include <cstring>

int main()
{
	// Get the size of the memory block to allocate
	unsigned short size = strlen( "I love Ruby !" );

	// Allocate memory for a string buffer
	char* str = (char*) malloc( size  );

	// Put some content in that string buffer
	memcpy( str, "I love Ruby !", size );

	printf( "%s\n", str );

	// Free allocated memory
	free( str );

	return 0;
}
