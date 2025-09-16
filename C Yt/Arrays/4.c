//write a function to count the number of odd numbers in an array
#include<stdio.h>
void Oddnos(int arr[], int n);
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("%d", countOdd(arr, 6));
    return 0;
}
void Oddnos(int arr[],int n){
    if(n%2==0){ //base case
        return 0    ;
    }

    int count=0;
     for(int i=0;i=n;i++){

        if(arr[i]%2 !=0){
            printf("The odd numbers in an array are: %d",arr[i]);
        
        }
        else{
            printf("The even numbers of an array are: %d",arr[i]);
        }

     }

}