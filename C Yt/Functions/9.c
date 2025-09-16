//write a function to calculate percentage of a student from marks in science, math, sanskrit
#include<stdio.h>
float Calcper(float science,float maths,float sanskrit);
int main(){

float science,maths,sanskrit;

printf("Enter marks in Science:");
scanf("%f",&science);
printf("Enter marks in  maths:");
scanf("%f",&maths);
printf("Enter marks in Sanskrit:");
scanf("%f",&sanskrit);

float percentage=Calcper(science,maths,sanskrit);
printf("Percentage = %.2f%%\n", percentage);


return 0;
}
float Calcper(float science,float maths,float sanskrit){

    float total=maths+science+sanskrit;
float perc=(total/300)*100;

return perc;
    

}