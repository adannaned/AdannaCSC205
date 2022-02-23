#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>
/*thread function definiton*/
void* operaPro(void* op){
char *var = (char*) op;
// returning thread id using pthread_self
printf("\n\tThread ID: %ld\t Operation Problem: %s\n", pthread_self(), var);
	}
int main()
{
int num;
int d;
int t;
int c;
int nr;
int nc;
//Dynamically Allocating memory
char **op_array;
op_array = malloc(nr * sizeof(char *));
	if(op_array == NULL)
	{
	  fprintf(stderr, "out of Space\n");
	 //exit or return
	}
for(int j=0; j<nr; j++)
	{
		op_array[j] = malloc(nc * sizeof(char));
	if(op_array[j] == NULL){
		fprintf(stderr, "out of Space\n");
		//exit or return
		}
	}

printf("Enter the number of Operation Problem: ");
scanf("%d", &num);
			
d = (num*(num+1));
/*creating thread id*/
pthread_t thid[d+1];

for(int i=0; i<num; i++){
printf("\nEnter Operation Problem: ");
// "^\n": allows  multiple strings until new line
// "%99": Length of characters in the string 
scanf(" %99[^\n]s", op_array[i]);
		}
printf("            ");
int z = 0;
for(int t=1; t<=num; t++){
	for(int c=1; c<=(2*t); c++){
	int mt;
	// creating thread
	mt = pthread_create(&thid[z], NULL, &operaPro, (void*)op_array[t-1]);
	z+=1;
		}
	}
z = 0;
for(int t=1; t<=num; t++){
	for(int c=1; c<=(2*t); c++){
	pthread_join(thid[z], NULL);
		}	
			}	

pthread_exit(NULL);
return 0;

		}

