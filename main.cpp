#pragma once

#include<bits/stdc++.h>
#include <iostream>
#include<stdlib.h>
#include <string.h>
#include <conio.h>
#include "login_signup.hpp"
using namespace std;

int main()
{
    int choice;
    cout<<"*********************************************************" << endl;
    cout << "              Digital CV Login/Signup Menu                " << endl;
    cout << "*********************************************************" << endl;
    cout << "\t1.Login\n";
    cout << "\t2.Signup\n";
    cout << "\t3.Exit\n";
    cout << endl;
    cout << "Please Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:
        signup();
        break;
    case 3:
        system("cls");
        cout << "You have made a mistake. Please try again. Thank you!!\n";
        main();
    }
}