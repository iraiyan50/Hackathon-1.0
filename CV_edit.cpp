#pragma once
#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
// #include "main.cpp"
#include "login_signup.cpp"

using namespace std;


// define the Address structure here
/*struct Address
{
    char House_no[10];
    char Road_no[10];
    char Area[20];
    char city[20];
    char Postcode[15];
    char country[20];
};


struct Skills_and_Achievments
{
    char skill[20];
    char achievments[20];
};
struct Personal_Info
{
    char Name[30];
    char email[30];
    char phone[20];
    char Gender[10];
    char Nationality[20];
    char date_of_birth[15];
    char marital_status[20]; // if possible implement option system
    Address Present_Address;
    Address Permanent_Address;
};
struct Educational_Info
{
    char Institution[30];
    char Passing_year[7];
    char Degree[10];
    char cgpa[6];
};
struct Professional_Info
{
    char position[30];
    char company[30];
    char Start_date[15];
    char End_date[15];
};
*/
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

    cout << "\tEmail: ";
    cin >> personal1.email;
    fprintf(fp, "Email: %s\n", personal1.email);

    cout << "\tPhone No: ";
    cin >> personal1.phone;
    fprintf(fp, "Phone No: %s\n", personal1.phone);

    cout << "\tGender: ";
    cin >> personal1.Gender;
    fprintf(fp, "Gender: %s\n", personal1.Gender);

    cout << "\tNationality: ";
    cin >> personal1.Nationality;
    fprintf(fp, "Nationality: %s\n", personal1.Nationality);

    cout << "\tDate of Birth: ";
    cin >> personal1.date_of_birth;
    fprintf(fp, "Date of Birth: %s\n", personal1.date_of_birth);

    cout << "\tMarital Status: ";
    cin >> personal1.marital_status;
    fprintf(fp, "Marital Status: %s\n", personal1.marital_status);

    cout << "\tPresent Address: \n";
    fprintf(fp, "Present Address: \n");

    cout << "\t\tHouse no: ";
    cin >> personal1.Present_Address.House_no;
    fprintf(fp, "\tHouse no: %s\n", personal1.Present_Address.House_no);

    cout << "\t\tRoad no: ";
    cin >> personal1.Present_Address.Road_no;
    fprintf(fp, "\tRoad no: %s\n", personal1.Present_Address.Road_no);

    cout << "\t\tArea: ";
    cin >> personal1.Present_Address.Area;
    fprintf(fp, "\tArea: %s\n", personal1.Present_Address.Area);

    cout << "\t\tCity: ";
    cin >> personal1.Present_Address.city;
    fprintf(fp, "\tCity: %s\n", personal1.Present_Address.city);

    cout << "\t\tPostcode: ";
    cin >> personal1.Present_Address.Postcode;
    fprintf(fp, "\tPostcode: %s\n", personal1.Present_Address.Postcode);

    cout << "\t\tCountry: ";
    cin >> personal1.Present_Address.country;
    fprintf(fp, "\tCountry: %s\n", personal1.Present_Address.country);

    // Permanent Address
    cout << "\tPermanent Address: \n";
    fprintf(fp, "Present Address: \n");

    cout << "\t\tHouse no: ";
    cin >> personal1.Permanent_Address.House_no;
    fprintf(fp, "\tHouse no: %s\n", personal1.Permanent_Address.House_no);

    cout << "\t\tRoad no: ";
    cin >> personal1.Permanent_Address.Road_no;
    fprintf(fp, "\tRoad no: %s\n", personal1.Permanent_Address.Road_no);

    cout << "\t\tArea: ";
    cin >> personal1.Permanent_Address.Area;
    fprintf(fp, "\tArea: %s\n", personal1.Permanent_Address.Area);

    cout << "\t\tCity: ";
    cin >> personal1.Permanent_Address.city;
    fprintf(fp, "\tCity: %s\n", personal1.Permanent_Address.city);

    cout << "\t\tPostcode: ";
    cin >> personal1.Permanent_Address.Postcode;
    fprintf(fp, "\tPostcode: %s\n", personal1.Permanent_Address.Postcode);

    cout << "\t\tCountry: ";
    cin >> personal1.Permanent_Address.country;
    fprintf(fp, "\tCountry: %s\n", personal1.Permanent_Address.country);

    fclose(fp);
}
void Professional_Info_Scan()
{
    FILE *fp;
    struct Professional_Info profession1;
    char filename[30];
    strcpy(filename, name);
    strcat(filename, "_PfI.txt");
    fp = fopen(filename, "w");
    cout << *"********************************************************" << endl;
    cout << "                    Professional Info Menu                " << endl;
    cout << "*********************************************************" << endl;
    cout << "-------------Please Enter the following informations-----" << endl;
    cout << endl;

    cout << "\tPosition: ";
    cin >> profession1.position;
    fprintf(fp, "Position: %s\n", profession1.position);

    cout << "\tCompany: ";
    cin >> profession1.company;
    fprintf(fp, "Company: %s\n", profession1.company);

    cout << "\tStart Date: ";
    cin >> profession1.Start_date;
    fprintf(fp, "Start: %s\n", profession1.Start_date);

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

    cout << "\tInstitution: ";
    cin >> edu1.Institution;
    fprintf(fp, "Institution: %s\n", edu1.Institution);

    cout << "\tPassing year: ";
    cin >> edu1.Passing_year;
    fprintf(fp, "Passing Year: %s\n", edu1.Passing_year);

    cout << "\tDegree: ";
    cin >> edu1.Degree;
    fprintf(fp, "Degree: %s\n", edu1.Degree);

    cout << "\tCGPA: ";
    cin >> edu1.cgpa;
    fprintf(fp, "CGPA: %s\n", edu1.cgpa);

    fclose(fp);
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
    cout << "\t4.Logout\n";
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
        // start(); change
        break;
    }
}
