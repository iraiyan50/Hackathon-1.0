#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
int main()
{
    CV cv;
    char filename[50];

    printf("Enter your name: ");
    fgets(cv.name, sizeof(cv.name), stdin);
    cv.name[strcspn(cv.name, "\n")] = '\0'; // remove newline character

    printf("Enter your email: ");
    fgets(cv.email, sizeof(cv.email), stdin);
    cv.email[strcspn(cv.email, "\n")] = '\0'; // remove newline character

    printf("Enter your phone number: ");
    fgets(cv.phone, sizeof(cv.phone), stdin);
    cv.phone[strcspn(cv.phone, "\n")] = '\0'; // remove newline character

    int choice = 1;
    cv.num_jobs = 0;
    while (choice != 0 && cv.num_jobs < MAX_JOBS)
    {

        printf("Enter the company name (or 0 to finish): ");
        fgets(cv.jobs[cv.num_jobs].company, sizeof(cv.jobs[cv.num_jobs].company), stdin);
        cv.jobs[cv.num_jobs].company[strcspn(cv.jobs[cv.num_jobs].company, "\n")] = '\0';
        if (strcmp(cv.jobs[cv.num_jobs].company, "0") == 0)
        {
            break;
        }

        printf("Enter your job position : ");
        fgets(cv.jobs[cv.num_jobs].position, sizeof(cv.jobs[cv.num_jobs].position), stdin);
        cv.jobs[cv.num_jobs].position[strcspn(cv.jobs[cv.num_jobs].position, "\n")] = '\0';
        printf("Enter the duration of your employment: ");
        fgets(cv.jobs[cv.num_jobs].duration, sizeof(cv.jobs[cv.num_jobs].duration), stdin);
        cv.jobs[cv.num_jobs].duration[strcspn(cv.jobs[cv.num_jobs].duration, "\n")] = '\0';

        printf("Enter a brief description of your job: ");
        fgets(cv.jobs[cv.num_jobs].description, sizeof(cv.jobs[cv.num_jobs].description), stdin);
        cv.jobs[cv.num_jobs].description[strcspn(cv.jobs[cv.num_jobs].description, "\n")] = '\0'; // remove newline character

        cv.num_jobs++;
    }

    choice = 1;
    cv.num_qualifications = 0;
    while (choice != 0 && cv.num_qualifications < MAX_QUALIFICATIONS)
    {
        printf("Enter your degree (or 0 to finish): ");
        fgets(cv.qualifications[cv.num_qualifications].degree, sizeof(cv.qualifications[cv.num_qualifications].degree), stdin);
        cv.qualifications[cv.num_qualifications].degree[strcspn(cv.qualifications[cv.num_qualifications].degree, "\n")] = '\0'; // remove newline character

        if (strcmp(cv.qualifications[cv.num_qualifications].degree, "0") == 0)
        {
            break;
        }

        printf("Enter the institution you received your degree from: ");
        fgets(cv.qualifications[cv.num_qualifications].institution, sizeof(cv.qualifications[cv.num_qualifications].institution), stdin);
        cv.qualifications[cv.num_qualifications].institution[strcspn(cv.qualifications[cv.num_qualifications].institution, "\n")] = '\0'; // remove newline character

        printf("Enter the duration of your degree: ");
        fgets(cv.qualifications[cv.num_qualifications].duration, sizeof(cv.qualifications[cv.num_qualifications].duration), stdin);
        cv.qualifications[cv.num_qualifications].duration[strcspn(cv.qualifications[cv.num_qualifications].duration, "\n")] = '\0'; // remove newline character

        cv.num_qualifications++;
    }

    printf("Enter the name of the file to save your CV to: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0'; // remove newline character

    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error: Unable to create file.\n");
        return 1;
    }

    display(cv, fp);

    fclose(fp);

    return 0;
}