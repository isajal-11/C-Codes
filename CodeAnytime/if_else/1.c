//Books are printed in such a way that left pages are even numbers,
//and right pages are odd numbers. Write a program to identify which
//side of the book a given page belongs to.
//Task-Input a page number.
// If divisible by 2 → print "Left Page"
//Else → print "Right Page"

#include<stdio.h>
int main(){
    int pgno;
    printf("Enter Page Number:");
    scanf("%d",&pgno);

    if(pgno%2==0)
    printf("Left page");
    else printf("Right page");
    
    return 0;
}