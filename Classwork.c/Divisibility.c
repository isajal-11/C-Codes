#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 2 == 0)
        printf("%d is Even\n", x);
    else
        printf("%d is Odd\n", x);

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
void assignStudent(int eventChoice, char participants[MAX_EVENTS][MAX_PARTICIPANTS][MAX_NAME_LEN], int *count) {
    if (count[eventChoice] >= MAX_PARTICIPANTS) {
        printf("Event full! Cannot register more participants.\n");
        return;
    }

    printf("Enter student name: ");
    scanf("%s", participants[eventChoice][count[eventChoice]]);
    count[eventChoice]++; 
    printf("Student added successfully!\n");
}









