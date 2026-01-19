#include <stdio.h>
int main(){

    int TotalVotesA = 0;
    int TotalVotesB = 0;
    int choice;

    do{
        printf("\n--Voting-Menu--");
        printf("\n1. Vote candidate A\n2. Vote candidate B\n3. View Results\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            TotalVotesA += 1;
            printf("\nSuccessfully voted A.\n");
            break;
        case 2:
            TotalVotesB += 1;
            printf("\nSuccessfully voted B.\n");
            break;
        case 3:
            printf("\nTotal Votes A: %d", TotalVotesA);
            printf("\nTotal Votes B: %d", TotalVotesB);
            
            if(TotalVotesA == 0 && TotalVotesB == 0){
                printf("\nResult: No votes recorded.\n");
            } else if(TotalVotesA == TotalVotesB){
                printf("\nResult: Tie.\n");
            } else if(TotalVotesA > TotalVotesB){
                printf("\nCandidate A is the winner.\n");
            } else {
                printf("\nCandidate B is the winner.\n");
            }
            
            break;
        case 4:
            printf("\nThank you for voting.\n");
            break;
        
        default:
            printf("\nInvalid input.\n");
            break;
        }


    }while(choice != 4);

    return 0;
}