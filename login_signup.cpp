#pragma once

#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include"main.cpp"

#define ENTER 13
#define TAB 9
#define BCKSPC 8
using namespace std;
char username[30], password[30], name[30];
//void hidePass()
//{
//    int i = 0;
//    while (i<15)
//    {
//        password[i] = getch();
//        if (password[i] == ENTER)
//            break;
//        else
//            printf("*");
//        i++;
//    }
//    password[i] = 0;
//}
void login()
{
    fflush(stdin);
    system("cls");
    FILE *fp;
    int choice;
    char id[30], pass[30];
    cout << *"********************************************************" << endl;
    cout << "                Digital CV Login Menu            " << endl;
    cout << "*********************************************************" << endl;
    cout << "-----------Please enter your Username & Password----------" << endl;
    cout << endl;
    cout << "\t1.Username: ";
    fflush(stdin);
    gets(name);

    cout << "\t2.Password: ";
    gets(password);
    strcpy(username,name);
    strcat(username,".txt");
    fp=fopen(username,"r");
    if(fp==NULL){
        cout<<"Your username doesn't exist.\n";
        cout<<"1.Try Again\n";
        cout<<"2.Goto Main Menu\n";
        switch(choice){
            case 1:
                login();
                break;
            case 2:
                main();
                break;
            default:
                cout<<"Wrong Choice!\nRedirecting to Main Menu...";
                system("pause");
                main();
                break;
        }

    }
    else{
        char checkPass[30];
        fscanf(fp,"%s",checkPass);
        if(strcmp(password,checkPass)==0){
            cout<<"Login Successful!\n";
            system("pause");
            //CV edit function should be called here.
        }
    }
}
void signup()
{
    FILE *fp;
    int c = 0;
    char id[30], pass[30];
    system("cls");
    cout << *"********************************************************" << endl;
    cout << "             Digital CV Signup Menu            " << endl;
    cout << "*********************************************************" << endl;
    cout << "-----------Please enter the Username & Password----------" << endl;
    cout << "-----------------------Avoid Spaces!!--------------------" << endl;

    cout << endl;
    cout << "\t1.Username: ";
    fflush(stdin);
    gets(name);

    cout << "\t2.Password: ";
    gets(password);
    // opening the file in read mode
    strcpy(username, name);
    strcat(username, ".txt");
    fp = fopen(username, "r");
    if (fp == NULL)
    {
        fclose(fp);
        fp = fopen(username, "w");
        fprintf(fp, "%s", password);
        fclose(fp);
        cout << "\n\tCongratulations!! Your signup is complete."
             << endl;
        cout << "\tPlease login with your signup informations.\n"
             << endl;
        system("pause");
            login();
    }
    else
    {
        cout << "This username is not available! Please try another." << endl;
        system("pause");
        signup();
    }
}
