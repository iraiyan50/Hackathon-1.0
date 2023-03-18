#pragma once
#include<bits/stdc++.h>
#include<string>
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

#define MAX_JOBS 10
#define MAX_QUALIFICATIONS 10

typedef struct job
{
    char position[50];
    char company[50];
    char duration[20];
    char description[500];
}job;
typedef struct qualification
{
    char degree[50];
    char institution[50];
    char duration[20];
}qualification;
typedef struct CV
{
    char name[50];
    char email[50];
    char phone[15];//48 - 0
    struct job jobs[MAX_JOBS];
    int num_jobs;
    qualification qualifications[MAX_QUALIFICATIONS];
    int num_qualifications;
}CV;
void display(struct CV cv, FILE *fp)
{
    fprintf(fp, "Name: %s\n", cv.name);
    fprintf(fp, "Email: %s\n", cv.email);
    fprintf(fp, "Phone: %s\n", cv.phone);
    fprintf(fp, "\nWork Experience:\n");
    for (int i = 0; i < cv.num_jobs; i++)
    {
        fprintf(fp, "Position: %s\n", cv.jobs[i].position);
        fprintf(fp, "Company: %s\n", cv.jobs[i].company);
        fprintf(fp, "Duration: %s\n", cv.jobs[i].duration);
        fprintf(fp, "Description: %s\n", cv.jobs[i].description);
    }
    fprintf(fp, "\nEducation:\n");
    for (int i = 0; i < cv.num_qualifications; i++)
    {
        fprintf(fp, "Degree: %s\n", cv.qualifications[i].degree);
        fprintf(fp, "Institution: %s\n", cv.qualifications[i].institution);
        fprintf(fp, "Duration: %s\n", cv.qualifications[i].duration);
    }
}
void CVinput();
void Jobinput();
void Eduinput();