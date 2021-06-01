#include <stdio.h>
#include <stdlib.h>

void loggedinOrNot(int userAllowed);
int checkCridentials( int userID, int userPin);

int main()
{
    int userID;
    int userPin;

    printf("Enter User Id: ");
    scanf("%d", &userID);

    printf("Enter User Pin: ");
    scanf("%d", &userPin);

    int userAllowed = checkCridentials( userID, userPin);


//    printf("%d", userAllowed);


    loggedinOrNot(userAllowed);


    return 0;
}

int checkCridentials( int userID, int userPin){
    int userAllowed;

    int user1Id = 123;
    int user1Pin = 123;

    int user2Id = 456;
    int user2Pin = 456;

    int user3Id = 789;
    int user3Pin = 789;

    if(userID == user1Id && userPin == user1Pin || userID == user2Id && userPin == user2Id || userID == user3Id && userPin == user3Id){
        int userAllowed = 1;
        return userAllowed;

    }else{
        int userAllowed = 0;
        return userAllowed;

    }

}

void loggedinOrNot(int userAllowed){
    if(userAllowed == 1){
        printf("you are logged in");
    }else{
        printf("Invalid Username or password");
    }
}


