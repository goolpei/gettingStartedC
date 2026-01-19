#include <stdio.h>
int main() {
int choice;
char settingChoice;
do {
    printf("\n MAIN MENU\n");
    printf("1. Start\n");
    printf("2. Settings\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
        printf("Program started\n");
        break;
    case 2:
        do {
            printf("\nSETTINGS MENU \n");
            printf("A. Audio Settings\n");
            printf("V. Video Settings\n");
            printf("B. Back to Main Menu\n");
            printf("Enter choice: ");
            scanf(" %c", &settingChoice);

            if (settingChoice == 'A' || settingChoice == 'a') {
                printf("Audio settings opened\n");
                }
            else if (settingChoice == 'V' || settingChoice == 'v') {
                printf("Video settings opened\n");
                }
            else if (settingChoice == 'B' || settingChoice == 'b') {
                printf("Returning to main menu...\n");
                }
            else {
                printf("Invalid option \n");
                }

        } while (settingChoice != 'B' && settingChoice != 'b');
        break;
    case 3:
        printf("Exiting program \n");
        break;
    default:
        printf("Invalid choice\n");
        }
} while (choice != 3);
return 0;
}