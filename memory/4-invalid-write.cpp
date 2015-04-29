#include <cstdlib>
#include <cstdio>
#include <cstring>

#define MAX_PASS_LENGTH (15)

int main( int argc, char* arg[] )
{
	if( argc <= 1 )
	{
		printf( "Please enter a password !\n" );
		return -1;
	}

	char* userPassword = (char*) malloc( MAX_PASS_LENGTH );
	char* password = (char*) malloc ( MAX_PASS_LENGTH );

	strcpy( password, "LHR15" );
	strcpy( userPassword, arg[1] );

	if( memcmp( userPassword, password, strlen(password) ) == 0 )
	{
		printf( "You are authenticated !\n" );
	}
	else
	{
		printf( "Wrong password !\n" );
	}

	free( userPassword );
	free( password );

	return 0;
}
