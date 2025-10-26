#include <stdio.h>
#include <stdbool.h>
#include <pthread.h>
#include <unistd.h>

bool flag[2] = {false, false};// flags to show interest in entering CS


int turn = 0;  // whose turn is it to enter


// Dekker's algorithm lock
void lock(int i) {
    int j = 1 - i;
    flag[i] = true;
    while (flag[j]) {
        if (turn == j) {
            flag[i] = false;
            while (turn == j); // busy wait
            flag[i] = true;
        }
    }
}

// Dekker's algorithm unlock
void unlock(int i) {
    int j = 1 - i;
    turn = j;
    flag[i] = false;
}

// Critical section
void critical_section(int i) {
    printf("Process %d entered critical section\n", i);
    sleep(1);  // simulate work
    printf("Process %d exiting critical section\n", i);
}

// Thread function
void* process(void* arg)
 {
int i = *(int*)arg;

for (int k = 0; k < 7; k++)
 { // repeat to see alternating access

        lock(i);
        critical_section(i);
        unlock(i);
        sleep(1);  // simulate remainder section
    
}
    return NULL;
}

int main() {
    pthread_t t1, t2;
    int p0 = 0, p1 = 1;

    pthread_create(&t1, NULL, process, &p0);
    pthread_create(&t2, NULL, process, &p1);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("Both processes finished.\n");
    return 0;
}



