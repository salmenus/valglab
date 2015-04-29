#include <pthread.h>
#include <cstdio>

int memory = 0;

void* doStuff(void* arg)
{
	memory++;
	printf("Doing stuff with memory : %d\n", memory);
	return NULL;
}

int main (void)
{
	pthread_t child;
	pthread_create(&child, NULL, doStuff, NULL);

	printf("Will increment memory : %d\n", memory);
	memory++;
	printf("Incremented memory : %d\n", memory);

	pthread_join(child, NULL);
	return 0;
}

