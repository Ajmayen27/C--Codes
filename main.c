﻿#include <stdio.h>
#include <string.h>


char name[20];
int pass[10];
int id[10];
char input_name[20];
int input_pass[10];
int choice;
int depo;
int total = 0;
int money_out;
int current;
char fname[20];
int fid[10];
int select = 0;


int Deposite()
{
    printf("Deposite ==>\n\n");
    printf("\nEnter your deposit amount :\n");
    scanf("%d", &depo);
    system("cls");
    total = total + depo;
    printf("\n>>>You have successfully Deposited tk : %d \n",total);
    printf("\nCurrent balance : %d\n\n\n", total);
    return total;
}
int transfer()
{




    system("cls");
    printf("Balance : %d\n\n", total);


    printf("MONEY Transfer ==>\nEnter the Transfer amount :\n\n");
    scanf("%d", &money_out);
    if (total >= money_out)
    {
        total = total - money_out;
        printf("Balance %d Transfer Successfull\n",money_out);
        printf("\nCurrent Balance : %d\n\n", total);


    }
    else
    {
        printf("== > You do not have sufficient balance ???\n\n");
    }


    return total;
}


int withdraw()
{
    system("cls");
    printf("Current Balance : %d\n", total);
    printf("\nMONEY WITHDRAW ==>\nEnter the withdrawal amount :\n");
    scanf("%d", &money_out);
    if (total >= money_out)
    {
        total = total - money_out;
        system("cls");
        printf("\n>>>Balance %d withdraw successful...\n",money_out);
        printf("\nCurrent Balance %d\n\n", total);


    }
    else
    {
        printf("==> You do not have sufficient balance in your account\n\n");
    }


    return total;
}


void viewbalance()
{
    printf("\n\nYour Current Balance : %d\n\n", total);
}


void Registration()
{
    printf("\nRegistration :\n\n");
    printf("Enter Username:\n\n");
    scanf("%s", &name);
    printf("\nEnter user id:\n\n");
    scanf("%d", &id);
    printf("\nEnter your password:\n\n");
    scanf("%d", &pass);
    system("cls");
    printf("\n>>>Your Registration is Completed!!!!<<<\n\n");


}


void forgetPass()
{
    printf("Forget Password\n\n");
    printf("Username :\n");
    scanf("%s", &fname);
    printf("\nId:\n");
    scanf("%d", &fid);
    system("cls");
    if (strcmp(name, fname) == 0 && id[0] == fid[0])
    {
        printf("\nId Recovery successful!!!!!!\n\n*******Welcome %s**********\n\n", input_name);
        while (select != 5)
        {
            printf("1.Deposit Balance\n2.Withdraw Balance\n3.Transfer Balance\n4.View Balance\n5.Exit\n");
            scanf("%d", &select);
            system("cls");
            switch (select)
            {
            case 1:
            {
                Deposite();
                break;
            }
            case 2:
            {
                withdraw();
                break;
            }
            case 3:
            {
                transfer();
                break;
            }
            case 4:
            {
                viewbalance();
                break;
            }
            case 5:
            {
                printf("Exiting\n");
                break;
            }
            default:
            {
                printf("Enter a valid option\n");
            }
            }
        }
    }
    else
    {
        printf("==> Wrong user or Id??\nEnter the correct user or id\n");
    }
}


void Login()
{
    printf("\nLog in :\n\n");
    printf("\nName:\n\n");
    scanf("%s", &input_name);
    printf("\nPassword :\n\n");
    scanf("%d", &input_pass);
    system("cls");


    if (strcmp(input_name, name) == 0 && input_pass[0] == pass[0])
    {
        printf("\n>>>>> Log in successful <<<<<\n\n******* Welcome %s **********\n\n", input_name);
        while (select != 5)
        {
            printf("1. Deposit Balance\n\n2. Withdraw Balance\n\n3. Transfer Balance\n\n4. View Balance\n\n5. Exit\n\n");
            scanf("%d", &select);
            system("cls");
            switch (select)
            {
            case 1:
            {
                Deposite();
                break;
            }
            case 2:
            {
                withdraw();
                break;
            }
            case 3:
            {
               transfer();
                break;
            }
            case 4:
            {
                viewbalance();
                break;
            }
            case 5:
            {
                printf("Exiting\n");
                break;
            }
            default:
            {
                system("cls");
                printf("==>Enter a valid option\n");


            }
            }
        }
    }
    else
    {
        printf("==> Wrong user or password??\nEnter the correct user or password\n");
    }
}


int main()
{
    printf("\n\n************ Welcome to Smart Bank Portal ***********\n\n");
    while (choice != 4)
    {
        printf("\n>>>> Enter your choice <<<<\n\n\n1.Registration\n\n2.Log in\n\n3.Forget Password\n\n4.Exit\n\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            system("cls");
            Registration();
            break;
        }
        case 2:
        {
            system("cls");
            Login();
            break;
        }
        case 3:
        {
            system("cls");
            forgetPass();
            break;
        }
        case 4:
        {
            printf("Exiting....\n");
            break;
        }
        default:
        {
            system("cls");
            printf("==> Enter a valid option:\n");
            break;
        }
        }
    }


    return 0;
}
