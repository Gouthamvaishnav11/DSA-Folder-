#include <stdio.h>
#include <stdbool.h>
#include <pthread.h>
#include <unistd.h>

int turn;
bool flag[2] = {false, false};
int shared = 0;

void *process0(void *args) {
    while (1) {
        printf("process 0 is wants to enter in the critical section\n ");
        flag[0] = true;
        turn = 1;
        while (flag[1] && turn == 1);

        // Critical Section
        printf("Process 0 in critical section\n");
        shared++;
        printf("Shared variable updated by P0: %d\n", shared);
        sleep(1);

        // Exit Section
        flag[0] = false;
        printf("Process 0 in remainder section\n");
        sleep(1);
    }
    return NULL;
}

void *process1(void *args) {
    while (1) {
        printf("process 1 is wants to enter in the critical section\n ");
        flag[1] = true;
        turn = 0;  
        while (flag[0] && turn == 0);

        // Critical Section
        printf("Process 1 in critical section\n");
        shared++;
        printf("Shared variable updated by P1: %d\n", shared);
        //sleep(1);

        // Exit Section
        flag[1] = false; 
        printf("Process 1 in remainder section\n");
        sleep(1);
    }
    return NULL;
}

int main() {
    pthread_t p0, p1;
 

    pthread_create(&p0, NULL, process0, NULL);
    pthread_create(&p1, NULL, process1, NULL);

    pthread_join(p0, NULL);
    pthread_join(p1, NULL);

    return 0;
}
