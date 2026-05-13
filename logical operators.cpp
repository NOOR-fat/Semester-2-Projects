#include<iostream>
using namespace std;
int main()
// --- PROGRAM 1 (Scholarship Eligibility) ---
{
int marks;
int testscore;
cout<<"Enter your marks="<<endl;
cin>>marks;
cout<<"Enter your test score"<<endl;
cin>>testscore;
if(marks>80&&testscore>70)
cout<<"Congratulations! You are eligible for scholarship";
else if(marks>70||testscore>50)
cout<<"You are provided half fee concession";
else if(marks>50&&testscore>=45)
cout<<"You are provided 30% discount on university fees";
else 
cout<<"Sorry, you are not eligible for any type of scgolarship\n Work hard";
	return 0;
		}
	// --- PROGRAM 2 (Nested If with ! Operator) ---
#include <iostream>
using namespace std;
//nested if
int main() {
    int marks, testscore;
    bool hasCheated = false; //  student ne cheating nahi ki

    cout << "Enter marks: "; 
	cin >> marks;
    cout << "Enter test score: "; 
	cin >> testscore;

    // ! operator use kar ke check karte hain
    // Iska matlab hai: "Agar cheating NAHI ki"
    if (!hasCheated) { //outer if
        if (marks > 80 && testscore > 70)// inner if
            cout << "Eligible for scholarship";
        else if (marks > 70 || testscore > 50)
            cout << "Half fee concession";
        else
            cout << "No scholarship";
    } 
    else {
        cout << "Disqualified due to cheating!";
    }

    return 0;
}
