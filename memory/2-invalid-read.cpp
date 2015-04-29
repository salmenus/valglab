#include <cstdlib>
#include <cstdio>
#include <cstring>

#define MAX_LENGTH (12)

int main()
{
	// Allocate memory for a string buffer
	char* str = (char*) malloc( MAX_LENGTH );

	// Put some content in that string buffer
	memcpy( str, "! ybuR 3< I", MAX_LENGTH );

	// Perform an invalid read operation
	unsigned short i;
	for( i = MAX_LENGTH; i > 0; i-- )
	{
		printf( "%c", str[i]  );
	}

	printf( "\n" );

	// Free allocated memory
	free( str );

	return 0;
}
