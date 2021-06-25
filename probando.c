#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int login()
{
    char username[15];
    char password[12];
 
    printf("Enter your username:\n");
    //scanf("%s", &username);
    scanf("%s", username);
 
 
    printf("Enter your password:\n");
  //  scanf("%s", &password);
    scanf("%s", password);
 
 
    if (strcmp(username, "chaitu") == 0) {
        if (strcmp(password, "123") == 0) {
 
 
            printf("\nWelcome.Login Success\nd!");
            return 0;
 
 
        }
        else {
            printf("\nwrong password\n");
            return -23;
        }
    }
    else {
        printf("\nUser doesn't exist\n");
        //system("exit");
        return -44; 
         
    }
}

void menu (void)
{
    
    int option = 0;
    
    // do while loops always run at lest once before exiting
    // you do not have to change your code this is just
    // a representation of how it could look
    
    while (option != 6 )
    {
         printf("here\n");
         
        printf("\nStaff MENU\n\n");
        printf("\t1 -> Display Staff Details\n");
        printf("\t2 -> Add Staff\n");
        printf("\t3 -> Modify Staff\n");
        printf("\t4 -> Delete Staff\n");
        printf("\t5 ->Search Staff\n");
        printf("\t 6-> Exit\n");
        printf(" > ");
        //rewind(stdin);
         printf("here\n");
        scanf("%d", &option);
        
        // commented out due to 
        // lack of functions in switch
 
 /*
        switch (option) {
        case 1: displayStaff(); break;
        case 2: addStaff(); break;
        case 3: modifyStaff(); break;
        case 4: deleteStaff(); break;
        case 5: searchStaff();
        case 6: break;
        default:
            printf("Invalid choice....\n\n");
        }
        */
         printf("here\n");
    } 
   // system("pause");
    
    
    
}
//void main() this is so not I changed it. 
int main(void)
{
      
   
    int flag = login();
    
    if ( flag != -44 && flag != -23)
        menu();
    else
        printf("flag %d\n\n", flag);
    
   
    return 0;
}