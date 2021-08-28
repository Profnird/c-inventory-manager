#include <stdio.h>
#include <stdlib.h>

/*
first project in c language
building project while learning some basic concepts
#input and output and functions etc..

"""This is an inventory management system.
followed up project @itsourcecode.com

*/

//menu function
void menuwin(){
int choice;
printf("\n");
printf("\n\t\t\t\t ________________________________________");
printf("\n\t\t\t\t| Menu                                   |");
printf("\n\t\t\t\t|________________________________________|");
printf("\n\t\t\t\t| [1] ADD PRODUCT                        |");
printf("\n\t\t\t\t|________________________________________|");
printf("\n\t\t\t\t| [2] Delete PRODUCT                     |");
printf("\n\t\t\t\t|________________________________________|");
printf("\n\t\t\t\t| [3] Modify PRODUCT                     |");
printf("\n\t\t\t\t|________________________________________|");
printf("\n\t\t\t\t| [4] View PRODUCT                       |");
printf("\n\t\t\t\t|________________________________________|");
printf("\n\t\t\t\t| [5] Exit                               |");
printf("\n\t\t\t\t|________________________________________|");

printf("\n\t\t\t\t CHOOSE A NUMBER IN THE MENU: ");
scanf("%d",& choice);
if(choice == 2){
    deletemenu();
}
}

//deletemenu function
void deletemenu(){
//clrscr();
int choice;
printf("\nHow would you like to delete items?");
printf("\n\t 1. Product Number");
printf("\n\t 2. Item Name");
printf("\n\t 3. Remove Expired Goods");

printf("\n\t Enter Choice: ");
scanf("%d",&choice);

switch(choice){
case 1: printf("product deleted");//deleteProductNumber();
break;
case 2: printf("deleted name"); //deleteName();
break;
case 3: printf("delete date");//deleteDate();
break;
default:
printf("\nInvalid Choice!");
deletemenu();
}

}

//update
//update/modify function
/*void updateList(){
int choice;
printf("\nOptions\n");
printf("\n\t 1. Update Price");
printf("\n\t 2. Update Quantity");

printf("\n\t Enter Choice:\n");
scanf("%d",&choice);

switch(choice){
case 1: updatePrice();
break;
case 2: updateQuantity();
break;
default:
printf("\nInvalid Choice!");
updateList();
}

}
*/
int main(){
menuwin();
//printf("Hello this is Amankwa from Africa :) ");

return 0;
}

