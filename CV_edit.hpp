#pragma once
#include<bits/stdc++.h>
#include<string>
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;



struct Address
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
} ;
struct Educational_Info
{
    char Institution[30];
    char Passing_year[7];
    char Degree[10];
    char cgpa[6];
} ;
struct Professional_Info
{
    char position[30];
    char company[30];
    char Start_date[15];
    char End_date[15];
} ;
void Personal_Info_scan();
void Professional_Info_Scan();
void Educational_Info_Scan();
void DataEntry();
