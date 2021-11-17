#include <stdio.h>
#include <pthread.h>
/* thread definition function */
void *threadFunction(void* args)
{
   while(1)
   {
      printf("I am on threadFunction.\n");
   }
}
int main()
{
    /*creating thread id*/
    pthread_t id;
    int ret;
    
    /*creating thread*/
    ret = pthread_create(&id,NULL,&threadFunction,NULL);
    if(ret==0){
        printf("Thread created successfully.\n");
        pthread_create(&id,NULL,&threadFunction,NULL);
    }
    else{
        printf("Thread not created.\n");
        return 0; /*return from main*/
    }
    
    return 0;
}
