//write functions to calculate area of a square,rectangle and a circle
#include<stdio.h>
#include<math.h>
float areasquare(float side);
float arearec(float a, float b);
float areacir(float radius);
int main(){
float a=5.002;
float b=3.42;
printf("Area is %f",arearec(a,b));
}

float areasquare(float side){
    return side*side;
}

float arearec(float a, float b){
    return a*b;
}

float areacircle(float radius){
    return 3.14*radius*radius;
}
