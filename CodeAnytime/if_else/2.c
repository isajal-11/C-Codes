//Problem Statement:
// People should drink water at different times of the day. Write a
// program that gives hydration reminders based on the current time.
// Task:
// Input time in 24-hour format.
//  If between 6–10 → "Morning hydration"
//  If between 11–16 → "Afternoon hydration"
// If between 17–21 → "Evening hydration"
//  Otherwise → "Time to rest"
#include<stdio.h>
int main(){
    int timehr,timemin;  //time(hr) & time(min) DOUBT
    printf("Enter time in a 24 hour format (HH:MM)");
    scanf("%d:%d",&timehr,&timemin);
    if(timehr>23 || timehr<0 || timemin>59 || timemin<0)
    if(timehr>=6 && timehr<=10)
    printf("Morning Hydration");

    else if(timehr>=11 && timehr<=16)
    printf("Afternoon hydration");
    
    else if(timehr>=17 && timehr<=21){ //silly mistake of using if, therefore i got 2 outputs, i put in 12:34 i.e morning and time to rest due to incorrect
    printf("Evening hydration");       //pairing of if and else in this code block
    }
    
    else {
    printf("Time to rest");
} 
    return 0;

}

//doubt in the scanf value entry of time 
//doubt in how to write in the time (in min format)