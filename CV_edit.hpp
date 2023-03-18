#pragma once
#include<bits/stdc++.h>
#include<string>
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

const int MAX_JOBS = 10;
const int MAX_QUALIFICATIONS = 10;

struct Job {
    string position;
    string company;
    string duration;
    string description;
};
struct Qualification {
    string degree;
    string institution;
    string duration;
};
struct CV {
    string name;
    string email;
    string phone;//error to be given in phone number if not number
    vector<Job> jobs;
    vector<Qualification> qualifications;
};