#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main (){

    int room_number;
    char name[50];
    int hotel_class, week_OR_Days, food_option, food;
    int lodge_Days, pay_Check, code_Confirm;
    double lodge_Fee;

    printf("\033[1;100m...............................................  L.......L............................................\033[0m\n");
    printf("\033[1;101m...............................................  L.......L............................................\033[0m\n");
    printf("\033[1;100m...............................................  L.......L............................................\033[0m\n");
    printf("\033[1;101m...............................................  L.......L............................................\033[0m\n");
    printf("\033[1;100m...............................................  L.......L............................................\033[0m\n");

    printf("................................................WELCOME TO CRYSTAL HOTEL............................................\n");

    printf(">>> KINDLY ENTER YOUR NAME PLEASE:\n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("%s, YOU ARE WELCOME TO CRYSTAL HOTEL\n", name);

    printf(">>> WHICH CLASS OF HOTEL ARE YOU SIGNING IN?\n");
    printf(" 1. Executive Class   - ₦80,000\n");
    printf(" 2. Local Class       - ₦60,000\n");
    printf(" 3. Normal Class      - ₦30,000\n");
    printf("Enter your choice (1-3): ");

    scanf("%d", &hotel_class);
    printf("HOTEL CLASS: %d\n", hotel_class);

    if(hotel_class==1){

        printf("%s, welcome to the EXECUTIVE class\n", name);
        printf("YOU ARE REQUIRED TO PAY N 80,000 FOR A DAY\n");

        printf(">>WILL YOU LIKE TO SPEND WEEKS OR DAYS?\n");
        printf("1. for weeks\n");
        printf("0. for days\n");
        printf("ENTER(1-0): ");
        scanf("%d", &week_OR_Days);

        if(week_OR_Days == 0){

            printf(">> HOW MANY DAYS WILL YOU LIKE TO LODGE?\n");
            printf("> NUMBER OF DAYS: \n");
            scanf("%d", &lodge_Days);

            if(lodge_Days >= 1){
                lodge_Fee = lodge_Days * 80000;
                printf("\nTOTAL COST: N%.2lf K", lodge_Fee);
            }

        }

        printf("\n> HAVE YOU MADE YOUR PAYMENT?\n PRESS 1 IF YES, 0 IF NO: ");
        scanf("%d", &pay_Check);

        if(pay_Check == 1){

            printf("> ENTER 6 DIGITS CONFIRMATION CODE: "); // I AM TRYING TO GENERATE A RANDOMNUMBER, BUT DON'T EVEN KNOW HOW TO GO ABOUT IT FOR NOW
            scanf("%d", &code_Confirm);

            if(code_Confirm == 123456){

                printf("YOU CAN BEGIN THE PROCESS NOW\n");

                printf("WHICH DO YOU WANT FOOD OR SNACKS\n CLICK 1 FOR FOOD AND 0 FOR SNACK: ");
                scanf("%d", &food_option);

                if (food_option==1){

                    printf("\nFOOD MENU\n");
                    printf("1. BEANS AND RICE\n");
                    printf("2. JOLLOF RICE\n");
                    printf("3. FRIED RICE\n");
                    printf("4. AMALA WITH EGUSI SOUP\n");
                    printf("5. MOINMOIN\n");

                    printf("ENTER NUMBER CHOICE OF FOOD: ");
                    scanf("%d", &food);

                    if(food==1){
                        printf("YOU REQUESTED FOR RICE WITH BEEF, YOUR ORDER IS ON THE WAY\n");
                    }
                }

                else if(food_option==0){

                    printf("\nSNACK MENU\n");
                    printf("1. MEATPIE\n");
                    printf("2. FRUIT SALAD\n");
                    printf("3. FRUIT JUICE\n");
                    printf("4. EGG ROLL\n");
                    printf("5. PUFF PUFF\n");
                    printf("6. BISCUIT\n");
                    printf("7. YAM CHIPS\n");
                    printf("8. POTATO CHIPS\n");
                }
            }

            else{
                printf("ERROR CODE!!! YOU HAVE TO MAKE YOUR PAYMENT\n");
            }
        }

        else{
            printf("YOU HAVE TO MAKE YOUR PAYMENT\nNOT PROCESSING...\n");
        }
    }

    else if(hotel_class==2){

        printf("%s, welcome to the LOCAL class\n", name);
        printf("YOU ARE REQUIRED TO PAY N 60,000 FOR A DAY\n");

        printf(">>WILL YOU LIKE TO SPEND WEEKS OR DAYS?\n");
        printf("1. for weeks\n");
        printf("0. for days\n");
        scanf("%d", &week_OR_Days);

        if(week_OR_Days==0){

            printf(">> HOW MANY DAYS WILL YOU LIKE TO LODGE?\n");
            scanf("%d", &lodge_Days);

            if(lodge_Days >= 1){
                lodge_Fee = lodge_Days * 60000;
                printf("\nTOTAL COST: N%.2lf K", lodge_Fee);
            }

        }

        printf("> HAVE YOU MADE YOUR PAYMENT ?\n PRESS 1 IF YES, 0 IF NO: ");
        scanf("%d", &pay_Check);

        if(pay_Check==1){

            printf("> ENTER 6 DIGITS CONFIRMATION CODE: ");
            scanf("%d", &code_Confirm);

            if(code_Confirm==123456){
                printf("YOU CAN BEGIN THE PROCESS NOW\n");
            }

            else{
                printf("YOU HAVE TO MAKE YOUR PAYMENT\n");
            }
        }

        else{
            printf("YOU HAVE TO MAKE YOUR PAYMENT\nNOT PROCESSING...\n");
        }
    }

    else if(hotel_class==3){

        printf("%s, welcome to the NORMAL class\n", name);
        printf("YOU ARE REQUIRED TO PAY N 30,000 FOR A DAY\n");

        printf(">>WILL YOU LIKE TO SPEND WEEKS OR DAYS?\n");
        printf("1. for weeks\n");
        printf("0. for days\n");
        scanf("%d", &week_OR_Days);

        if(week_OR_Days==0){

            printf(">> HOW MANY DAYS WILL YOU LIKE TO LODGE?\n");
            scanf("%d", &lodge_Days);

            if(lodge_Days >= 1){
                lodge_Fee = lodge_Days * 30000;
                printf("\nTOTAL COST: N%.2lf", lodge_Fee);
            }
        }

        printf("> HAVE YOU MADE YOUR PAYMENT ?\n PRESS 1 IF YES, 0 IF NO: ");
        scanf("%d", &pay_Check);

        if(pay_Check==1){

            printf("> ENTER 6 DIGITS CONFIRMATION CODE: ");
            scanf("%d", &code_Confirm);

            if(code_Confirm==123456){
                printf("YOU CAN BEGIN THE PROCESS NOW\n");
            }

            else{
                printf("YOU HAVE TO MAKE YOUR PAYMENT\n");
            }
        }

        else{
            printf("YOU HAVE TO MAKE YOUR PAYMENT\nNOT PROCESSING...\n");
        }
    }

    else{
        printf("ENTER RIGHT INPUT!!!\n");
    }

    return 0;
}
