#include<iostream>
#include "lec5-proj-func.h"

using namespace std;

int main(void)
{
    int myage;

    cout << "Enter your age: ";
    cin >> myage;

    legalVote(myage)?cout<<"Good to Vote!\n":cout<<"Not Yet to Vote!\n";
    legalWine(myage)?cout<<"Good to Drink!\n":cout<<"Not Yet to Drink!\n";;
    legalDrive(myage)?cout<<"Good to Drive!\n":cout<<"Not Yet to Drive!\n";;

    return 0;
}


// create folder
// create codes
// add folder to workspace
// save workspace
// edit tasks.json: change arg $(files) to $(workspaceFolder)\\*.cpp +\\*.h
