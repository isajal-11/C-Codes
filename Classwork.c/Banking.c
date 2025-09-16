#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct account {
    int acc_no;
    char name[30];
    float balance;
};

void acc_create();
void money_deposit();
void money_withdraw();
void balance_display();
void enquiry();
void acc_close();
void transaction_display();
void defaulter_identification();

int main() {
    int choice;

    while (1) {
        printf("\n\n--- Banking Services ---\n");
        printf("1. Enquiry\n");
        printf("2. Open Account\n");
        printf("3. Close Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Display Balance\n");
        printf("7. Display Transactions\n");
        printf("8. Identify Defaulter\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: enquiry(); break;
            case 2: acc_create(); break;
            case 3: acc_close(); break;
            case 4: money_deposit(); break;
            case 5: money_withdraw(); break;
            case 6: balance_display(); break;
            case 7: transaction_display(); break;
            case 8: defaulter_identification(); break;
            case 9: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

/*Sajal*/
void acc_create() {
    FILE *fp;
    struct account acc;

    fp = fopen("bank.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &acc.acc_no);
    printf("Enter Name: ");
    scanf("%s", acc.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    fprintf(fp, "%d %s %.2f\n", acc.acc_no, acc.name, acc.balance);
    fclose(fp);

    printf("Account created successfully!\n");
}

void enquiry() {
    FILE *fp;
    struct account acc;

    fp = fopen("bank.txt", "r");
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\nAccount Details:\n");
    while (fscanf(fp, "%d %s %f", &acc.acc_no, acc.name, &acc.balance) == 3) {
        printf("Acc No: %d\tName: %s\tBalance: %.2f\n", acc.acc_no, acc.name, acc.balance);
    }

    fclose(fp);
}

void money_deposit() {
    FILE *fp, *temp;
    struct account acc;
    int num, found = 0;
    float amt;

    fp = fopen("bank.txt", "r");
    temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL) {
        printf("File error!\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &num);

    while (fscanf(fp, "%d %s %f", &acc.acc_no, acc.name, &acc.balance) == 3) {
        if (acc.acc_no == num) {
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amt);
            acc.balance += amt;
            printf("Money Deposited Successfully!\n");
            found = 1;
        }
        fprintf(temp, "%d %s %.2f\n", acc.acc_no, acc.name, acc.balance);
    }

    fclose(fp);
    fclose(temp);

    fp = fopen("bank.txt", "w");
    temp = fopen("temp.txt", "r");
    while (fscanf(temp, "%d %s %f", &acc.acc_no, acc.name, &acc.balance) == 3)
        fprintf(fp, "%d %s %.2f\n", acc.acc_no, acc.name, acc.balance);

    fclose(fp);
    fclose(temp);

    if (!found)
        printf("Account not found.\n");
}

void balance_display() {
    FILE *fp;
    struct account acc;
    int num, found = 0;

    fp = fopen("bank.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &num);
    while (fscanf(fp, "%d %s %f", &acc.acc_no, acc.name, &acc.balance) == 3) {
        if (acc.acc_no == num) {
            printf("Account Balance for %s is %.2f\n", acc.name, acc.balance);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Account not found.\n");
    fclose(fp);
}

/*work2-kush starts*/
void money_withdraw() {
    FILE *fp, *temp;
    struct account acc;
    int num, found = 0;
    float amt;

    fp = fopen("bank.txt", "r");
    temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL) {
        printf("File error!\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &num);

    while (fscanf(fp, "%d %s %f", &acc.acc_no, acc.name, &acc.balance) == 3) {
        if (acc.acc_no == num) {
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amt);
            if (acc.balance >= amt) {
                acc.balance -= amt;
                printf("Amount Withdrawn Successfully!\n");
            } else {
                printf("Insufficient Balance!\n");
            }
            found = 1;
        }
        fprintf(temp, "%d %s %.2f\n", acc.acc_no, acc.name, acc.balance);
    }

    fclose(fp);
    fclose(temp);

    fp = fopen("bank.txt", "w");
    temp = fopen("temp.txt", "r");
    while (fscanf(temp, "%d %s %f", &acc.acc_no, acc.name, &acc.balance) == 3)
        fprintf(fp, "%d %s %.2f\n", acc.acc_no, acc.name, acc.balance);

    fclose(fp);
    fclose(temp);

    if (!found)
        printf("Account not found.\n");
}

void acc_close() {
    FILE *fp, *temp;
    struct account acc;
    int num, found = 0;

    fp = fopen("bank.txt", "r");
    temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL) {
        printf("File error!\n");
        return;
    }

    printf("Enter Account Number to Close: ");
    scanf("%d", &num);

    while (fscanf(fp, "%d %s %f", &acc.acc_no, acc.name, &acc.balance) == 3) {
        if (acc.acc_no != num)
            fprintf(temp, "%d %s %.2f\n", acc.acc_no, acc.name, acc.balance);
        else
            found = 1;
    }

    fclose(fp);
    fclose(temp);

    fp = fopen("bank.txt", "w");
    temp = fopen("temp.txt", "r");
    while (fscanf(temp, "%d %s %f", &acc.acc_no, acc.name, &acc.balance) == 3)
        fprintf(fp, "%d %s %.2f\n", acc.acc_no, acc.name, acc.balance);

    fclose(fp);
    fclose(temp);

    if (found)
        printf("Account closed successfully.\n");
    else
        printf("Account not found.\n");
}

void transaction_display() {
    printf("Transaction history feature not implemented (for simplicity).\n");
}

void defaulter_identification() {
    FILE *fp;
    struct account acc;

    fp = fopen("bank.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return;
    }

    printf("Defaulters (Balance < 1000):\n");
    while (fscanf(fp, "%d %s %f", &acc.acc_no, acc.name, &acc.balance) == 3) {
        if (acc.balance < 1000)
            printf("Acc No: %d\tName: %s\tBalance: %.2f\n", acc.acc_no, acc.name, acc.balance);
    }

    fclose(fp);
}
