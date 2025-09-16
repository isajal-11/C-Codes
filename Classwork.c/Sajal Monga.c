else if (choice == 2) {
            if (studentCount == 0) {
                printf("No students registered yet!\n");
                continue;
            }

            printf("Enter student name: ");
            gets(name);

     
            int found = 0;
            for (i = 0; i < studentCount; i++) {
                if (strcmp(students[i], name) == 0) {
                    found = 1;
                    break;
                }
            }

            if (found == 0) {
                printf("Student not found! Register first.\n");
                continue;
            }


            printf("\nAvailable Events:\n");
            for (i = 0; i < MAX_EVENTS; i++) {
                printf("%d. %s (%d/%d filled)\n", i + 1, events[i], eventCount[i], MAX_PARTICIPANTS);
            }

            printf("Choose event number (1-%d): ", MAX_EVENTS);
            scanf("%d", &eventChoice);
            getchar();

            if (eventChoice < 1 || eventChoice > MAX_EVENTS) {
                printf("Invalid event number!\n");
                continue;
            }

            int index = eventChoice - 1;

            if (eventCount[index] >= MAX_PARTICIPANTS) {
                printf("Sorry, this event is full!\n");
            } else {
                strcpy(participants[index][eventCount[index]], name);
                eventCount[index]++;
                printf("%s has been added to %s!\n", name, events[index]);
            }
        }