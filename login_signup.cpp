#pragma once

#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define ENTER 13
#define TAB 9
#define BCKSPC 8
using namespace std;
char username[30], password[30], name[30];
// void hidePass()
//{
//     int i=0;
//     while(1){
//         password[i]=getch();
//         if(password[i]==ENTER) break;
//         else printf("*");
//         i++;
//     }
//     password[i]=0;
//
// }
void login()
{
    fflush(stdin);
    system("cls");
    printf("*****************");
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
    // hidePass();
    gets(password);
    // opening the file in read mode
    strcpy(username, name);
    strcat(username, ".txt");
    fp = fopen(username, "r");
    if (fp == NULL)
    {
        fclose(fp);
        fp = fopen(username, "w");
        fprintf(fp, "%s %s ", name, password);
        fclose(fp);
        cout << "\n\tCongratulations!! Your signup is complete."
             << endl;
        cout << "\tPlease login with your signup informations.\n"
             << endl;
        system("pause");
        // login();
        
    }
    else
    {
        cout << "This username is not available! Please try another." << endl;
        system("pause");
        signup();
    }
}
