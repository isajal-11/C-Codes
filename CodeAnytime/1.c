//Class on the topic of Data types  

//float can only store upto 8 decimal values approx

//if you dont use '&' with scanf, how will it work?
//hum scanf ko memory location nahi de rahe  

#include<stdio.h>
int main(){

printf("The size of dataype is %d bytes \n", sizeof(int)); //primitive pe sizeof can be used easily
return 0;                //although, when you try it for functions which are non primitive- like arrays pointers functions
                        //it does not work, 'sizeof()'
}


//ctrl+j to open terminal in vs code
//Garbage values???