#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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
void display(const CV& cv, ofstream& fout) {
    fout << "Name: " << cv.name << endl;
    fout << "Email: " << cv.email << endl;
    fout << "Phone: " << cv.phone << endl << endl;
    fout << "Work Experience:" << endl;
    for (const auto& job : cv.jobs) {
        fout << "Position: " << job.position << endl;
        fout << "Company: " << job.company << endl;
        fout << "Duration: " << job.duration << endl;
        fout << "Description: " << job.description << endl;
    }
    fout << endl << "Education:" << endl;
    for (const auto& qualification : cv.qualifications) {
        fout << "Degree: " << qualification.degree << endl;
        fout << "Institution: " << qualification.institution << endl;
        fout << "Duration: " << qualification.duration << endl << endl; // Add extra endl here
    }
}
void DataEntry(){
    
    int choice;
    cout<<"*********************************************************" << endl;
    cout << "              Digital CV Data Entry Menu                " << endl;
    cout << "*********************************************************" << endl;
    cout << "\t1.Add info\n";
    cout << "\t2.Logout\n";
    cout << endl;
    cout << "Please Enter your choice: ";
    cin >> choice;
    switch(choice){
        case 1:
        
    }


}
void Jobinput(){

}
void Eduinput(){

}

int main() {
    CV cv;
    //cv inputs
    cout << "Enter your name: ";
    getline(cin, cv.name);

    cout << "Enter your email: ";
    getline(cin, cv.email);

    cout << "Enter your phone number: ";
    getline(cin, cv.phone);
    int choice = 1;
    while (choice != 0 && cv.jobs.size() < MAX_JOBS) {
        cout << "1. Add a new job" << endl;
        cout << "0. Finish" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();//fflush

        if (choice == 0) {//switch case diye korbo
            break;
        }
        else if (choice != 1) {
            cout << "Invalid choice. Try again." << endl;
            continue;
        }
        //job inputs
        Job job;

        cout << "Enter your job position: ";
        getline(cin, job.position);

        cout << "Enter the company name: ";
        getline(cin, job.company);

        cout << "Enter the duration of the job (e.g. May 2018 - Jul 2020): ";
        getline(cin, job.duration);

        cout << "Enter a description of your role and responsibilities: ";
        getline(cin, job.description);

        cv.jobs.push_back(job);

        cout << endl;
    }
    //qualifications
    choice = 1;
    while (choice != 0 && cv.qualifications.size() < MAX_QUALIFICATIONS) {
        cout << "1. Add a new qualification" << endl;
        cout << "0. Finish" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 0) {
            break;
        }
        else if (choice != 1) {
            cout << "Invalid choice. Try again." << endl;
            continue;
        }

        Qualification qualification;

        cout << "Enter your degree: ";
        getline(cin, qualification.degree);

        cout << "Enter the institution name: ";
        getline(cin, qualification.institution);

        cout << "Enter the duration of the degree (e.g. Sep 2014 - Jun 2018): ";
        getline(cin, qualification.duration);


    while (true) {
        cout << "Enter 1 to add work experience or 2 to add qualification (or 0 to finish): ";
        cin >> choice;
        cin.ignore(); // ignore the newline character left in the input stream

        if (choice == 0) {
            break;
        } else if (choice == 1 && cv.jobs.size() < MAX_JOBS) {
            Job job;

            cout << "Enter your job position: ";
            getline(cin, job.position);

            cout << "Enter the company name: ";
            getline(cin, job.company);

            cout << "Enter the duration of the job (e.g. May 2018 - Jul 2020): ";
            getline(cin, job.duration);

            cout << "Enter a description of your role and responsibilities: ";
            getline(cin, job.description);

            cv.jobs.push_back(job);
        } else if (choice == 2 && cv.qualifications.size() < MAX_QUALIFICATIONS) {
            Qualification qualification;

            cout << "Enter your degree: ";
            getline(cin, qualification.degree);

            cout << "Enter the institution name: ";
            getline(cin, qualification.institution);

            cout << "Enter the duration of the degree (e.g. Sep 2014 - Jun 2018): ";
            getline(cin, qualification.duration);

            cv.qualifications.push_back(qualification);
        } else {
            cout << "Invalid choice or maximum number of items reached." << endl;
        }
    }

    string filename;
    cout << "Enter the output file name: ";
    getline(cin, filename);

    ofstream fout(filename);
    if (!fout.is_open()) {
        cerr << "Error: Unable to create file." << endl;
        return 1;
    }

    display(cv, fout);
    cout << "CV saved to " << filename << "." << endl;

    return 0;
}
}
