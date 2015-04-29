#include <pthread.h>
#include <cstdio>

int memory = 0;
pthread_mutex_t memoryMutex;

void* doStuff(void* arg)
{
	pthread_mutex_lock(&memoryMutex);

	memory++;
	printf("Memory (after doing some stuff) : %d\n", memory);

	pthread_mutex_unlock(&memoryMutex);
	return NULL;
}

int main (void)
{
	pthread_mutex_init(&memoryMutex, NULL);

	pthread_t child;
	pthread_create(&child, NULL, doStuff, NULL);

	pthread_mutex_lock(&memoryMutex);
	memory++;
	printf("Memory : %d\n", memory);
	pthread_mutex_unlock(&memoryMutex);

	pthread_join(child, NULL);
	return 0;
}

