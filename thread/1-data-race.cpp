#include <pthread.h>
#include <cstdio>

int memory = 0;

void* doStuff(void* arg)
{
	memory++;
	printf("Memory (after doing some stuff) : %d\n", memory);
	return NULL;
}

int main (void)
{
	pthread_t child;
	pthread_create(&child, NULL, doStuff, NULL);

	memory++;
	printf("Memory : %d\n", memory);

	pthread_join(child, NULL);
	return 0;
}

