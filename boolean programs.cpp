#include<iostream>
using namespace std;
int main(){
	// Note: Multiple examples included. Uncomment the program you want to run.
/*
int x=10;
int y=34;
cout<<boolalpha;
cout<<(y>x)<<endl;
*/
/*
bool isCodingFun=true;
bool isfishtasty=false;
cout<<isCodingFun<<endl;//output(1)
cout<<isfishtasty<<endl;//output(0)
*/

bool isCodingFun=true;
bool isfishtasty=false;
cout<<boolalpha;
cout<<isCodingFun<<endl;//output(true)
cout<<isfishtasty<<endl;//output(false)
cout << (10 == 15);  // returns 0 (false), because 10 is not equal to 15

//Store the result of x > y in a boolean variable, and print it:
/*int x = 10;
int y = 9;

bool isGreater = x > y;

cout << isGreater; // returns 1 (true)*/
/*
int myAge = 25;
int votingAge = 18;
cout<<boolalpha;
cout << (myAge >= votingAge)<<"! "<< "Yes you are eligible for voting"; // returns 1 (true), meaning 25 year olds are allowed to vote!
*/
return 0;

}
