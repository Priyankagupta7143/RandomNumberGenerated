#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    
    int number, guess, nguesses=1;
    srand(time(0));
    number=rand()%100 + 1; //make random number formula;
    //generate a random number between1 and 100
    // printf("the number is %d\n",number);
    //keep running the loop until the number is guessed 
    do
    {
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("lower number please\n");
        }
        else if(guess<number)
        {
            printf("higher number please\n");
        }
        else
        {
            printf("you guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    } while (guess !=number);
    
    return 0;
}

//..Quick quiz : use a library functon to calculate the area of a square with side a:  
// #include<stdio.h>
// int side(a)

// int main(){
//     int a;
//     side = a 
    
//     return 0;
// }