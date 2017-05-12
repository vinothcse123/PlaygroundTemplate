#include <sys/sem.h>
#include <cstdio>
#include <unistd.h>

#define SEMAPHORE_COUNT 1

void semaphore_wait(int sem_id);
void semaphore_signal(int sem_id);


int main()
{
   /* 1.Getting the semaphore Key */

   key_t sem_key=ftok("key.txt",'S');

   if(0 >= sem_key)
   {
      perror("Error in getting key: ");
   }
   else
   {
      printf("\nSucessfully generated semaphore key. Value %d ",sem_key);
   }

   /* 2.Attaching the key to semaphore */

   int sem_id = semget(sem_key,SEMAPHORE_COUNT,0);

   struct sembuf sem_inp;
   sem_inp.sem_op=1; /*Semaphore  operation: 1:Increment -1:Decrement */
   sem_inp.sem_num=0;
   sem_inp.sem_flg=SEM_UNDO;

   semop(sem_id,&sem_inp,1);
   /* 3.Utilizing the semaphore on critical sections */

   printf("\n Waiting for semaphore...");
   semaphore_wait(sem_id);
   printf("\n Acquired semaphore...");
   sleep(4);
   semaphore_signal(sem_id);
   printf("\n Released semaphore...");


   return 0;
}


void semaphore_wait(int sem_id)
{
   struct sembuf sem_inp;
   sem_inp.sem_op=-1; /*Semaphore  operation: 1:Increment -1:Decrement */
   sem_inp.sem_num=0;
   sem_inp.sem_flg=SEM_UNDO;

   semop(sem_id,&sem_inp,1);

}

void semaphore_signal(int sem_id)
{
   struct sembuf sem_inp;
   sem_inp.sem_op=1; /*Semaphore  operation: 1:Increment -1:Decrement */
   sem_inp.sem_num=0;
   sem_inp.sem_flg=SEM_UNDO;

   semop(sem_id,&sem_inp,1);
}
