#include <cstdlib>
#include <cstdio>
#include <cstring>

#define STR_LENGTH (12)

int main()
{
        // Allocate memory for a string buffer
        char* str = (char*) malloc( STR_LENGTH  );

        // Put some content in that string buffer
        strcpy( str, "I <3 Ruby !" );

	// Print the copied string
        printf( "%s\n", str );

        return 0;
}

