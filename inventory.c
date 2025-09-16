#include <stdio.h>
#include <string.h>

struct item {
    int id;
    char name[300];
    int quantity;
    float price;
};

void addItem();
void viewItems();
void searchItem();
void updateItem();
void deleteItem();
void lowStock();
void sortItems();
void priceFilter();
void printItem(struct item b);
void buyItem();

int main() {
    char identity;
    printf(" --------- SAJAL'S INVENTORY MANAGEMENT SYSTEM------------- \n");
    printf("Enter A(For ADMIN ACCESS) or U(For USER ACCESS) \n");

    if (scanf(" %c", &identity) != 1)
        return 0;

    if (identity == 'A' || identity == 'a') {

        char pass[50];
        char adminPass[] = "1234";

        printf("Enter Admin Password: ");
        if (scanf("%49s", pass) != 1)
            return 0;

        if (strcmp(pass, adminPass) != 0) {
            printf("\nIncorrect Password. Access Denied.\n");
            return 0;
        }

        printf("\nLogin Successful. Welcome Admin!\n");

        int choice;
        do {
            printf("\n--- Admin Menu ---\n");
            printf("1. Add Item\n");
            printf("2. View All Items\n");
            printf("3. Search Item\n");
            printf("4. Update Item\n");
            printf("5. Delete Item\n");
            printf("6. Low Stock Alert\n");
            printf("7. Sort Items by Price\n");
            printf("8. Filter Items by Price\n");
            printf("9. Exit\n");
            printf("Enter your choice: ");

            if (scanf("%d", &choice) != 1) {
                while(getchar() != '\n');
                choice = 0;
            }

            switch (choice) {
                case 1: addItem(); break;
                case 2: viewItems(); break;
                case 3: searchItem(); break;
                case 4: updateItem(); break;
                case 5: deleteItem(); break;
                case 6: lowStock(); break;
                case 7: sortItems(); break;
                case 8: priceFilter(); break;
                case 9: printf("Exit\n"); break;
                default: printf("Invalid choice\n");
            }

        } while (choice != 9);
    }

    else if (identity == 'U' || identity == 'u') {

        int choice;
        do {
            printf("\n--- User Menu ---\n");
            printf("1. View All Items\n");
            printf("2. Search Item\n");
            printf("3. Low Stock Alert\n");
            printf("4. Filter Items by Price\n");
            printf("5. Buy Item\n");
            printf("6. Exit\n");
            printf("Enter your choice: ");

            if (scanf("%d", &choice) != 1) {
                while(getchar() != '\n');
                choice = 0;
            }

            switch (choice) {
                case 1: viewItems(); break;
                case 2: searchItem(); break;
                case 3: lowStock(); break;
                case 4: priceFilter(); break;
                case 5: buyItem(); break;
                case 6: printf("Exit\n"); break;
                default: printf("Invalid choice\n");
            }

        } while (choice != 6);
    }

    else {
        printf("Invalid role selection\n");
    }

    return 0;
}


void addItem() {
    struct item it;
    FILE *fp = fopen("inventory.txt", "a");
    if (!fp) { printf("Error opening file for append.\n"); return; }

       printf("Enter item id: ");
     if (scanf("%d", &it.id) != 1) { while(getchar()!='\n'); 
        fclose(fp);
         printf("Invalid id\n");
         return; }
    getchar();

    printf("Enter item name: ");
    if (!fgets(it.name, sizeof(it.name), stdin)) { 
        fclose(fp); 
        return; }
    it.name[strcspn(it.name, "\n")] = 0;



    printf("Enter quantity: ");
    if (scanf("%d", &it.quantity) != 1) {
         while(getchar()!='\n'); fclose(fp); 
         printf("Invalid quantity\n"); 
         return; }

    printf("Enter price: ");
    if (scanf("%f", &it.price) != 1) {
         while(getchar()!='\n');
         fclose(fp); 
        printf("Invalid price\n"); 
        return; }
    getchar();

    fprintf(fp, "%d|%s|%d|%.2f\n", it.id, it.name, it.quantity, it.price);
    fclose(fp);
    printf("Item has been added successfully.\n");
}

void viewItems() {
    FILE *fp = fopen("inventory.txt", "r");
    if (!fp) { printf("No records found.\n"); return; }
    char line[1024];
    printf("\n%-10s %-30s %-10s %-10s\n", "ID", "Name", "Qty", "Price");
    printf("-----------------------------------------------------------------\n");
    while (fgets(line, sizeof(line), fp)) {
        struct item it;
        if (sscanf(line, "%d|%299[^|]|%d|%f", &it.id, it.name, &it.quantity, &it.price) == 4) {
            printf("%-10d %-30s %-10d %-10.2f\n", it.id, it.name, it.quantity, it.price);
        }
    }
    fclose(fp);
}

void searchItem() {
    FILE *fp = fopen("inventory.txt", "r");
    if (!fp) { printf("No records found.\n");
         return; }
    int id, found = 0;
    printf("Enter item id to search: ");
    if (scanf("%d", &id) != 1) { while(getchar()!='\n'); 
        fclose(fp); 
        printf("Invalid id\n"); 
        return; }
    getchar();
    char line[1000];
    while (fgets(line, sizeof(line), fp)) {
        struct item it;
        if (sscanf(line, "%d|%299[^|]|%d|%f", &it.id, it.name, &it.quantity, &it.price) == 4) {
            if (it.id == id) {
                printItem(it);
                found = 1;
                break;
            }
        }
    }
    if (!found) printf("Item not found.\n");
    fclose(fp);
}

void updateItem() {
    FILE *fp = fopen("inventory.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (!fp || !temp) { if(fp) fclose(fp); 
        if(temp) fclose(temp); 
        printf("Error opening files for update.\n"); 
        return; }
    int id, found = 0;
    printf("Enter item id to update: ");
    if (scanf("%d", &id) != 1) {
         while(getchar()!='\n'); 
         fclose(fp);
              fclose(temp);
          printf("Invalid id\n"); return; }
    getchar();
    char line[1024];
    while (fgets(line, sizeof(line), fp)) {
        struct item it;
        if (sscanf(line, "%d|%299[^|]|%d|%f", &it.id, it.name, &it.quantity, &it.price) == 4) {
            if (it.id == id) {
                printf("Enter new quantity: ");
                if (scanf("%d", &it.quantity) != 1) { 
                    while(getchar()!='\n'); }
                printf("Enter new price: ");
                if (scanf("%f", &it.price) != 1) { 
                    while(getchar()!='\n'); }
                getchar();
                found = 1;
            }
            fprintf(temp, "%d|%s|%d|%.2f\n", it.id, it.name, it.quantity, it.price);
        }
    }
    fclose(fp);
    fclose(temp);
    if (remove("inventory.txt") != 0 || rename("temp.txt", "inventory.txt") != 0) {
        printf("Error replacing inventory file.\n");
        return;
    }
    if (found) printf("Item updated successfully.\n"); else printf("Item not found.\n");
}

void deleteItem() {
    FILE *fp = fopen("inventory.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (!fp || !temp) { if(fp) fclose(fp); if(temp) fclose(temp); 
        printf("Error opening files for delete.\n"); return; }
    int id, found = 0;
    printf("Enter item id to delete: ");
    if (scanf("%d", &id) != 1) {
         while(getchar()!='\n'); 
         fclose(fp); fclose(temp);
          printf("Invalid id\n");
           return; }
    getchar();
    char line[1024];
    while (fgets(line, sizeof(line), fp)) {
        struct item it;
        if (sscanf(line, "%d|%299[^|]|%d|%f", &it.id, it.name, &it.quantity, &it.price) == 4) {
            if (it.id != id) {
                fprintf(temp, "%d|%s|%d|%.2f\n", it.id, it.name, it.quantity, it.price);
            } else 
            found = 1;
        }
    }
    fclose(fp);
    fclose(temp);
    if (remove("inventory.txt") != 0 || rename("temp.txt", "inventory.txt") != 0) {
        printf("Error replacing inventory file.\n");
        return;
    }
    if (found) printf("Item deleted successfully.\n"); else printf("Item not found.\n");
}

void lowStock() {
    FILE *fp = fopen("inventory.txt", "r");
    if (!fp) { printf("No records found.\n"); return; }
    int limit;
    printf("Enter quantity limit: ");
    if (scanf("%d", &limit) != 1) {
         while(getchar()!='\n');
          fclose(fp); 
          printf("Invalid limit\n"); 
          return; }
    getchar();
    char line[1024];
    int found = 0;
    printf("\nItems with quantity less than %d:\n", limit);
    printf("%-10s %-30s %-10s %-10s\n", "ID", "Name", "Qty", "Price");
    printf("-----------------------------------------------------------------\n");
    while (fgets(line, sizeof(line), fp)) {
        struct item it;
        if (sscanf(line, "%d|%299[^|]|%d|%f", &it.id, it.name, &it.quantity, &it.price) == 4) {
            if (it.quantity < limit) {
                printf("%-10d %-30s %-10d %-10.2f\n", it.id, it.name, it.quantity, it.price);
                found = 1;
            }
        }
    }
    if (!found) printf("No low stock items found.\n");
    fclose(fp);
}

void sortItems() {
    struct item list[1000];
    int count = 0;
    FILE *fp = fopen("inventory.txt", "r");
    if (!fp) { printf("No records found.\n"); return; }
    char line[1024];
    while (fgets(line, sizeof(line), fp) && count < 1000) {
        if (sscanf(line, "%d|%299[^|]|%d|%f", &list[count].id, list[count].name, &list[count].quantity, &list[count].price) == 4) {
            count++;
        }
    }
    fclose(fp);

    if (count == 0) { printf("No records to sort.\n"); return; }
 
    for (int i = 0; i < count - 1; i++) {   //help bubble sort
        for (int j = i + 1; j < count; j++) {
            if (list[i].price > list[j].price) {
                struct item tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
    }

    printf("\nItems sorted by price (low to high):\n");
    printf("%-10s %-30s %-10s %-10s\n", "ID", "Name", "Qty", "Price");
    printf("-----------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-10d %-30s %-10d %-10.2f\n", list[i].id, list[i].name, list[i].quantity, list[i].price);
    }
}

void buyItem() {
    FILE *fp = fopen("inventory.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (!fp || !temp) { if(fp) fclose(fp); if(temp) fclose(temp); printf("Error opening files for purchase.\n"); 
        return; }
    struct item it;
    int id, qty, found = 0;

    printf("Enter Item ID to buy: ");
    if (scanf("%d", &id) != 1) { while(getchar()!='\n'); fclose(fp); fclose(temp); printf("Invalid id\n"); return; }
    getchar();

    char line[1024];
    while (fgets(line, sizeof(line), fp)) {
        if (sscanf(line, "%d|%299[^|]|%d|%f", &it.id, it.name, &it.quantity, &it.price) == 4) {
            if (it.id == id) {
                found = 1;
                printf("Enter quantity to buy: ");
                if (scanf("%d", &qty) != 1) { 
                    while(getchar()!='\n');
                     printf("Invalid quantity\n"); }
                getchar();
                if (qty <= it.quantity && qty > 0) {
                    it.quantity -= qty;
                    printf("Purchase Successful. Total cost = %.2f\n", qty * it.price);
                } else if (qty <= 0) {
                    printf("Invalid purchase quantity.\n");
                } else {
                    printf("Not enough stock.\n");
                }
            }
            fprintf(temp, "%d|%s|%d|%.2f\n", it.id, it.name, it.quantity, it.price);
        }
    }

    fclose(fp);
    fclose(temp);

    if (remove("inventory.txt") != 0 || rename("temp.txt", "inventory.txt") != 0) {
        printf("Error replacing inventory file after purchase.\n");
        return;
    }

    if (!found) printf("Item not found.\n");
}

void priceFilter() {
    FILE *fp = fopen("inventory.txt", "r");
    if (!fp) { printf("No records found.\n"); return; }
    float min, max;
    printf("Enter minimum price: ");
    if (scanf("%f", &min) != 1)
     { while(getchar()!='\n'); 
        fclose(fp);
         printf("Invalid input\n");
         
         return; }
    printf("Enter maximum price: ");
    if (scanf("%f", &max) != 1) 
    { while(getchar()!='\n');
         fclose(fp); printf("Invalid input\n"); 
         return; }
    getchar();
    char line[1024];
    int found = 0;
    printf("\nItems within price range %.2f - %.2f:\n", min, max);
    printf("%-10s %-30s %-10s %-10s\n", "ID", "Name", "Qty", "Price");
    printf("-----------------------------------------------------------------\n");

    while (fgets(line, sizeof(line), fp)) {
        struct item it;
        if (sscanf(line, "%d|%299[^|]|%d|%f", &it.id, it.name, &it.quantity, &it.price) == 4) {
            if (it.price >= min && it.price <= max) {
                printf("%-10d %-30s %-10d %-10.2f\n", it.id, it.name, it.quantity, it.price);
                found = 1;
            }
        }
    }
    if (!found) printf("No items found in this range.\n");
    fclose(fp);
}
void printItem(struct item b) {
    printf("\n--------Receipt---------\n");
    printf("Item ID - %d\n", b.id);
    printf("Name    - %s\n", b.name);
    printf("Quantity- %d\n", b.quantity);
    printf("Price   - %.2f\n", b.price);
    printf("------------------------\n");
}
