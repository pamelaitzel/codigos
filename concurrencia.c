#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 4

void *hello(void *threadid) {
    long tid;
    tid = (long)threadid;
    printf("Hola desde el hilo %ld\n", tid);
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    int rc;
    long t;
    for (t = 0; t < NUM_THREADS; t++) {
        printf("Creando hilo %ld\n", t);
        rc = pthread_create(&threads[t], NULL, hello, (void *)t);
        if (rc) {
            printf("Error: código de retorno desde pthread_create() es %d\n", rc);
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
