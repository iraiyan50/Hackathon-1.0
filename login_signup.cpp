#pragma once

#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<string>
#include<windows.h>
#include<comutil.h>
#include<oleauto.h>

#include "CV_edit.hpp"

using namespace std;
char username[30], password[30], name[30];
// void hidePass()
//{
//     int i = 0;
//     while (i<15)
//     {
//         password[i] = getch();
//         if (password[i] == ENTER)
//             break;
//         else
//             printf("*");
//         i++;
//     }
//     password[i] = 0;
// }
void exits()
{
    system("exit"); 
}
void Personal_Info_scan()
{
    FILE *fp;
    struct Personal_Info personal1;
    char filename[30];
    strcpy(filename, name);
    strcat(filename, "_PI.txt");
    fp = fopen(filename, "w");
    cout << *"********************************************************" << endl;
    cout << "                    Personal Info Menu                " << endl;
    cout << "*********************************************************" << endl;
    cout << "-------------Please Enter the following informations-----" << endl;
    cout << endl;

    cout << "\tName: ";
    cin >> personal1.Name;
    fprintf(fp, "Name: %s\n", personal1.Name);

    fflush(stdin);
    cout << "\tEmail: ";
    cin >> personal1.email;
    fprintf(fp, "Email: %s\n", personal1.email);

    fflush(stdin);
    cout << "\tPhone No: ";
    cin >> personal1.phone;
    fprintf(fp, "Phone No: %s\n", personal1.phone);

    fflush(stdin);
    cout << "\tGender: ";
    cin >> personal1.Gender;
    fprintf(fp, "Gender: %s\n", personal1.Gender);

    fflush(stdin);
    cout << "\tNationality: ";
    cin >> personal1.Nationality;
    fprintf(fp, "Nationality: %s\n", personal1.Nationality);

    fflush(stdin);
    cout << "\tDate of Birth: ";
    cin >> personal1.date_of_birth;
    fprintf(fp, "Date of Birth: %s\n", personal1.date_of_birth);

    fflush(stdin);
    cout << "\tMarital Status: ";
    cin >> personal1.marital_status;
    fprintf(fp, "Marital Status: %s\n", personal1.marital_status);

    fflush(stdin);
    cout << "\tPresent Address: \n";
    fprintf(fp, "Present Address: \n");

    fflush(stdin);
    cout << "\t\tHouse no: ";
    cin >> personal1.Present_Address.House_no;
    fprintf(fp, "\tHouse no: %s\n", personal1.Present_Address.House_no);

    fflush(stdin);
    cout << "\t\tRoad no: ";
    cin >> personal1.Present_Address.Road_no;
    fprintf(fp, "\tRoad no: %s\n", personal1.Present_Address.Road_no);

    fflush(stdin);
    cout << "\t\tArea: ";
    cin >> personal1.Present_Address.Area;
    fprintf(fp, "\tArea: %s\n", personal1.Present_Address.Area);

    fflush(stdin);
    cout << "\t\tCity: ";
    cin >> personal1.Present_Address.city;
    fprintf(fp, "\tCity: %s\n", personal1.Present_Address.city);

    fflush(stdin);
    cout << "\t\tPostcode: ";
    cin >> personal1.Present_Address.Postcode;
    fprintf(fp, "\tPostcode: %s\n", personal1.Present_Address.Postcode);

    fflush(stdin);
    cout << "\t\tCountry: ";
    cin >> personal1.Present_Address.country;
    fprintf(fp, "\tCountry: %s\n", personal1.Present_Address.country);

    // Permanent Address
    fflush(stdin);
    cout << "\tPermanent Address: \n";
    fprintf(fp, "Present Address: \n");

    fflush(stdin);
    cout << "\t\tHouse no: ";
    cin >> personal1.Permanent_Address.House_no;
    fprintf(fp, "\tHouse no: %s\n", personal1.Permanent_Address.House_no);

    fflush(stdin);
    cout << "\t\tRoad no: ";
    cin >> personal1.Permanent_Address.Road_no;
    fprintf(fp, "\tRoad no: %s\n", personal1.Permanent_Address.Road_no);

    fflush(stdin);
    cout << "\t\tArea: ";
    cin >> personal1.Permanent_Address.Area;
    fprintf(fp, "\tArea: %s\n", personal1.Permanent_Address.Area);

    fflush(stdin);
    cout << "\t\tCity: ";
    cin >> personal1.Permanent_Address.city;
    fprintf(fp, "\tCity: %s\n", personal1.Permanent_Address.city);

    fflush(stdin);
    cout << "\t\tPostcode: ";
    cin >> personal1.Permanent_Address.Postcode;
    fprintf(fp, "\tPostcode: %s\n", personal1.Permanent_Address.Postcode);

    fflush(stdin);
    cout << "\t\tCountry: ";
    cin >> personal1.Permanent_Address.country;
    fprintf(fp, "\tCountry: %s\n", personal1.Permanent_Address.country);

    fflush(stdin);
    fclose(fp);
}
void Professional_Info_Scan()
{
    FILE *fp;
    struct Professional_Info profession1;
    char filename[30];
    strcpy(filename, name);
    strcat(filename, "_PFI.txt");
    fp = fopen(filename, "w");
    cout << *"********************************************************" << endl;
    cout << "                    Professional Info Menu                " << endl;
    cout << "*********************************************************" << endl;
    cout << "-------------Please Enter the following informations-----" << endl;
    cout << endl;

    fflush(stdin);
    cout << "\tPosition: ";
    cin >> profession1.position;
    fprintf(fp, "Position: %s\n", profession1.position);

    fflush(stdin);
    cout << "\tCompany: ";
    cin >> profession1.company;
    fprintf(fp, "Company: %s\n", profession1.company);

    fflush(stdin);
    cout << "\tStart Date: ";
    cin >> profession1.Start_date;
    fprintf(fp, "Start: %s\n", profession1.Start_date);

    fflush(stdin);
    cout << "\tEnd Date: ";
    cin >> profession1.End_date;
    fprintf(fp, "End Date: %s\n", profession1.End_date);

    fclose(fp);
}
void Educational_Info_Scan()
{
    FILE *fp;
    char filename[30];
    struct Educational_Info edu1;
    strcpy(filename, name);
    strcat(filename, "_EI.txt");
    fp = fopen(filename, "w");
    cout << *"********************************************************" << endl;
    cout << "                    Educational Info Menu                " << endl;
    cout << "*********************************************************" << endl;
    cout << "-------------Please Enter the following informations-----" << endl;
    cout << endl;

    fflush(stdin);
    cout << "\tInstitution: ";
    cin >> edu1.Institution;
    fprintf(fp, "Institution: %s\n", edu1.Institution);

    fflush(stdin);
    cout << "\tPassing year: ";
    cin >> edu1.Passing_year;
    fprintf(fp, "Passing Year: %s\n", edu1.Passing_year);

    fflush(stdin);
    cout << "\tDegree: ";
    cin >> edu1.Degree;
    fprintf(fp, "Degree: %s\n", edu1.Degree);

    fflush(stdin);
    cout << "\tCGPA: ";
    cin >> edu1.cgpa;
    fprintf(fp, "CGPA: %s\n", edu1.cgpa);

    fclose(fp);
}
void txt_to_doc(){
    
}
void industrial(){
    FILE *fp,*pi,*pfi,*ei;
    char filename[30],fn2[30],c;
    strcpy(filename,name);
    strcat(filename,"_ind_CV.txt");
    fp=fopen(filename, "a");
    fprintf(fp,"\t-----Personal Info------\n\n");
    //Personal Info Append
    strcpy(fn2,name);
    strcat(fn2,"_PI.txt");
    pi=fopen(fn2,"r");
    c=fgetc(pi);
    while(c!=EOF){
        fputc(c,fp);
        c=fgetc(pi);
    }
    fprintf(fp,"\n");
    fprintf(fp,"**********************************************\n");
    fclose(pi);
    fprintf(fp,"\t-----Professional Info------\n\n");
    //Professional Info Append
    strcpy(fn2,name);
    strcat(fn2,"_PFI.txt");
    pfi=fopen(fn2,"r");
    c=fgetc(pfi);
    while(c!=EOF){
        fputc(c,fp);
        c=fgetc(pfi);
    }
    fprintf(fp,"\n");
    fprintf(fp,"**********************************************\n");
    fclose(pfi);
    fprintf(fp,"\t-----Academic Info------\n\n");
    //Educational Info
    strcpy(fn2,name);
    strcat(fn2,"_EI.txt");
    ei=fopen(fn2,"r");
    c=fgetc(ei);
    while(c!=EOF){
        fputc(c,fp);
        c=fgetc(ei);
    }
    fprintf(fp,"\n");
    fclose(ei);

    fclose(fp);
}
void Academic(){
    FILE *fp,*pi,*pfi,*ei;
    char filename[30],fn2[30],c;
    strcpy(filename,name);
    strcat(filename,"_acd_CV.txt");
    fp=fopen(filename, "a");

    fprintf(fp,"\t*****Personal Info*****\n\n");
    //Personal Info Append
    strcpy(fn2,name);
    strcat(fn2,"_PI.txt");
    pi=fopen(fn2,"r");
    c=fgetc(pi);
    while(c!=EOF){
        fputc(c,fp);
        c=fgetc(pi);
    }
    fprintf(fp,"\n");
    fprintf(fp,"**********************************************\n");
    fclose(pi);
    fprintf(fp,"\t-----Academic Info------\n\n");
    //Educational Info
    strcpy(fn2,name);
    strcat(fn2,"_EI.txt");
    ei=fopen(fn2,"r");
    c=fgetc(ei);
    while(c!=EOF){
        fputc(c,fp);
        c=fgetc(ei);
    }
    fprintf(fp,"\n");
    fclose(ei);

    fprintf(fp,"\n");
    fprintf(fp,"**********************************************\n");
    fprintf(fp,"\t-----Professional Info------\n\n");
    //Professional Info Append
    strcpy(fn2,name);
    strcat(fn2,"_PFI.txt");
    pfi=fopen(fn2,"r");
    c=fgetc(pfi);
    while(c!=EOF){
        fputc(c,fp);
        c=fgetc(pfi);
    }
    fclose(pfi);

    fclose(fp);
}
void CreateCV()
{
    int choice;
    cout << "*********************************************************" << endl;
    cout << "                   CV Creation Menu                " << endl;
    cout << "*********************************************************" << endl;
    cout << "---------------Enter your Required CV-type---------------\n";
    cout << "\t1.Industrial type\n";
    cout << "\t2.Academic Type\n";
    cout<<"\t3.Exit\n";
    cout << endl;
    cout << "Please Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        industrial();
        break;
    case 2:
        Academic();
        break;
    case 3:
        exits();
        break;
    }
}
void DataEntry()
{

    int choice;
    cout << "*********************************************************" << endl;
    cout << "              Digital CV Data Entry Menu                " << endl;
    cout << "*********************************************************" << endl;
    cout << "\t1.Add Personal info\n";
    cout << "\t2.Add Professional info\n";
    cout << "\t3.Add Educational info\n";
    cout<<"\t4.Create CV";
    cout << "\t5.Logout\n";
    cout << endl;
    cout << "Please Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        Personal_Info_scan();
        break;
    case 2:
        Professional_Info_Scan();
        break;
    case 3:
        Educational_Info_Scan();
        break;
    case 4:
        CreateCV();
        break;

    case 5:
        exits();
        // start();
        break;
    }
}
void login()
{
    // fflush(stdin);
    // system("cls");
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
    strcpy(username, name);
    strcat(username, ".txt");
    fp = fopen(username, "r");
    if (fp == NULL)
    {
        cout << "Your username doesn't exist.\n";
        cout << "1.Try Again\n";
        cout << "2.Goto Main Menu\n";
        switch (choice)
        {
        case 1:
            login();
            break;
        case 2:
            // start();
            break;
        default:
            cout << "Wrong Choice!\nRedirecting to Main Menu...";
            system("pause");
            // start();
            break;
        }
    }
    else
    {
        char checkPass[30];
        fscanf(fp, "%s", checkPass);
        if (strcmp(password, checkPass) == 0)
        {
            cout << "Login Successful!\n";
            system("pause");
        }
        else
        {
            cout << "Invalid password!! Please try again.";
        }
    }
}
void signup()
{
    fflush(stdin);
    system("cls");
    FILE *fp;
    int c = 0;
    char id[30], pass[30];

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

    
    // void start(){
    //     fflush(stdin);
    //     system("cls");
    //     int choice;

    //     cout << "*********************************************************" << endl;
    //     cout << "              Digital CV Login/Signup Menu                " << endl;
    //     cout << "*********************************************************" << endl;
    //     cout << "\t1.Login\n";
    //     cout << "\t2.Signup\n";
    //     cout << "\t3.Exit\n";
    //     cout << endl;
    //     cout << "Please Enter your choice: ";
    //     cin >> choice;
    //     switch (choice)
    //     {
    //     case 1:
    //         login();
    //         break;
    //     case 2:
    //         signup();
    //         break;
    //     case 3:
    //         //exits();change
    //         break;
    //     default:
    //         // system("cls");
    //         cout << "You have made a mistake. Please try again. Thank you!!\n";
    //         system("pause");
    //         //start();
    //     }
    // }
