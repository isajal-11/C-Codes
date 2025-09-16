//given an array of n integers,find the sum of even integers and the sum of odd integers
#include<stdio.h>
int main(){
int arr[10], n;
int evennumSum = 0, oddnumSum = 0;
printf("Enter number of elements:");
scanf("%d",&n);
 for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);

    if(arr[i]%2 ==0 ){
        evennumSum= evennumSum+arr[i] ;
    }
    else{
        oddnumSum=oddnumSum+arr[i];
    }
 }
printf("%d\n", evennumSum);
printf("%d\n", oddnumSum);
 return 0;
}






#include <stdio.h>

#define MAX_EVENTS 3
#define MAX_PARTICIPANTS 5
#define MAX_NAME_LEN 20

void assignStudent(int eventChoice, char participants[MAX_EVENTS][MAX_PARTICIPANTS][MAX_NAME_LEN], int *count);

int main() {
    char events[MAX_EVENTS][20] = {"Hackathon", "CulturalFest", "SportsMeet"};
    char participants[MAX_EVENTS][MAX_PARTICIPANTS][MAX_NAME_LEN]; // 3D array for event->students
    int count[MAX_EVENTS] = {0}; // count of participants per event
    int choice;
    char cont = 'y';

    while (cont == 'y') {
        printf("\nAvailable Events:\n");
        for (int i = 0; i < MAX_EVENTS; i++) {
            printf("%d. %s (%d/%d registered)\n", i + 1, events[i], count[i], MAX_PARTICIPANTS);
        }

        printf("Enter event number to register: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > MAX_EVENTS) {
            printf("Invalid event choice!\n");
        } else {
            assignStudent(choice - 1, participants, count);
        }

        printf("Do you want to add another student? (y/n): ");
        scanf(" %c", &cont);
    }

    // Display final registrations
    printf("\n--- Final Event Registrations ---\n");
    for (int i = 0; i < MAX_EVENTS; i++) {
        printf("\n%s:\n", events[i]);
        if (count[i] == 0)
            printf("No participants.\n");
        else {
            for (int j = 0; j < count[i]; j++) {
                printf("%d. %s\n", j + 1, participants[i][j]);
            }
        }
    }

    return 0;
}

// Function to assign student (pass by reference for count)
void assignStudent(int eventChoice, char participants[MAX_EVENTS][MAX_PARTICIPANTS][MAX_NAME_LEN], int *count) {
    if (count[eventChoice] >= MAX_PARTICIPANTS) {
        printf("Event full! Cannot register more participants.\n");
        return;
    }

    printf("Enter student name: ");
    scanf("%s", participants[eventChoice][count[eventChoice]]);
    count[eventChoice]++; // Update count by reference
    printf("Student added successfully!\n");
}
