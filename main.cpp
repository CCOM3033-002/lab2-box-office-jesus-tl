// Jesus M Torres Luquis, jesus-tl, 801 20 3215
#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    //Display purpose of program
    cout << "This program will calculate the Gross and Net Box Office Profit\n" 
    "and the Distributor's Profit of a movie playing in the theater.\n" << endl;

    //Display instruction to users
    cout << "Please, enter the following:\n" << endl;

    //Initialize variables
    string movie;
    double adultPRICE, childPRICE, ADULTtickets, CHILDtickets, TOTALadult, TOTALchild, gross, net, distributor;
    adultPRICE = 10.00;
    childPRICE = 6.00;

    //Get values
    cout << "Enter the name of the movie: ";
    cin >> movie;

    cout << "\nEnter the amount of adult tickets sold: ";
    cin >> ADULTtickets;

    cout << "\nEnter the amount of child tickets sold: ";
    cin >> CHILDtickets;

    //Calculate the values
    TOTALadult = ADULTtickets * adultPRICE; //Adult tickets amount total

    TOTALchild = CHILDtickets * childPRICE; //Child tickets amount total

    gross = TOTALadult + TOTALchild;

    net = gross * 0.20;

    distributor = gross - net;

    //Display the results
    cout << "Adult Tickets Sold: " << setw(8) << ADULTtickets << endl;

    cout << "Child Tickets Sold: " << setw(8) << CHILDtickets << endl;

    cout << "Gross Box Office Profit: " << setprecision(2) << setw(8) << gross << endl;

    




return 0;

}
