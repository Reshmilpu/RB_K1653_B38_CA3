#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
 
#define MAX 5
#define N 10

typedef struct

{

int process_id, arrival_time, burst_time, priority;

int q, ready;

}process_structure;

int Queue(int t1)

{

if (t1 == 0 || t1 == 1 || t1 == 2 || t1 == 3)

{

return 1;

}

else

{

return 2;

}

}

int main()

{

int limit, count, temp_process, time, j, y;

process_structure temp;

printf("Enter Total Number of Processes:\t");

scanf("%d", &limit);

process_structure process[limit];

for(count = 0; count < limit; count++)

{

printf("\nProcess ID:\t");

scanf("%d", &process[count].process_id);

printf("Arrival Time:\t");





scanf("%d", &process[count].arrival_time);

printf("Burst Time:\t");

scanf("%d", &process[count].burst_time);

printf("Process Priority:\t");

scanf("%d", &process[count].priority);

temp_process = process[count].priority;

process[count].q = Queue(temp_process);

process[count].ready = 0;

}

time = process[0].burst_time;

for(y = 0; y < limit; y++)

{

for(count = y; count < limit; count++)

{

if(process[count].arrival_time < time)

{

process[count].ready = 1;

