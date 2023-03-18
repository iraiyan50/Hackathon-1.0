#include <bits\stdc++.h>
#include <string.h>
using namespace std;
char name[30], pass[30];
int main()
{
    FILE *fp;
    char uname[30];
    cin >> name;
    strcpy(uname, name);
    strcat(uname, ".txt");

    fp = fopen(uname, "r");
    fscanf(fp, "%s", pass);
    fclose(fp);
    cout<<pass;
    return 0;
}