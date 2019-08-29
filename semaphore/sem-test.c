/* - Created Two threads, one prints odd numbers,the other even numbers, up to 10
 * - Each thread posts a semaphore to wake up the other thread
 * - Same lock is acquired by a thread (wait), and released (post) by a 
 *    different thread that did not own it
 * - Mutex cannot be used, since for a mutex the same thread must acquire 
 *    it and release it
 *
 *    gcc -pthread -o sem sem-test.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

sem_t even_sem, odd_sem;
typedef void *(*thread_func)(void *);


void even() {
	int i = 2;
	while (i < 10) {
		sem_wait(&even_sem);
		printf("%d ", i);
		i+=2;
		sem_post(&odd_sem);
	}
}

void odd() {
	int i = 1;
	while (i < 10) {
		sem_wait(&odd_sem);
		printf("%d ", i);
		i+=2;
		sem_post(&even_sem);
	}
	printf("\n");
}

int main() {
	sem_init(&even_sem, 0, 0);
	sem_init(&odd_sem, 0, 1);
	pthread_t threadodd, threadeven;
	pthread_create(&threadodd, NULL, (thread_func)odd, NULL);
	pthread_create(&threadeven, NULL, (thread_func)even, NULL);
	pthread_join(threadodd, NULL);
	pthread_join(threadeven, NULL);
	sem_destroy(&even_sem);
	sem_destroy(&odd_sem);
	return 0;
}

