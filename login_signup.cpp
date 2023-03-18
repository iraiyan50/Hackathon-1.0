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
char username[30],password[30];
void hidePass()
{
    char b;
    int j;
    while (1)
    {
        b = getch();

        if (b == ENTER)
        {
            password[j] = NULL;
            break;
        }
        else if (b == TAB)
        {
            continue;
        }
        else if (b == BCKSPC)
        {
            if (j > 0)
            {
                j--;
                printf("\b \b");
            }
        }
        else
        {
            password[j] = b;
            j++;
            printf("*");
        }
    }
}
void login()
{
    fflush(stdin);
    system("cls");
    printf("");
}
void signup()
{
    FILE *fp;
    int c = 0;
    char id[30], pass[30];
    system("cls");
    cout << "*********************************************************" << endl;
    cout << "             Sales-Representative Signup Menu            " << endl;
    cout << "*********************************************************" << endl;
    cout << "-----------Please enter the Username & Password----------" << endl;
    cout << endl;
    cout << "\t1.Username: ";
    cin >> username;
    cout << "\t2.Password: ";
    hidePass();
    cin >> password;
    // opening the file in read mode
    strcat(username,".txt");
    fp = fopen(username, "w+");
    while ((fscanf(fp, "%s %s ", &id, &pass)) != EOF)
    {
        if (strcmp(username, id) == 0 && strcmp(password, pass) == 0)
        // compares the info with database
        {
            cout << "\tCongratulations!! Your signup is complete.\n"
                 << endl;
            cout << "\tPlease login with your signup informations.\n"
                 << endl;
            c = 1;
            break;
        }
    }
    fclose(fp);
    if (c != 1)
    {
        cout << "\tSignup Failed! Please try again" << endl;
        signup();
    }
    else if (c == 1)
    {
        login();
    }
}
