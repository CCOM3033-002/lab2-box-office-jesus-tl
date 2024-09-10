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
    int adultPRICE, childPRICE, ADULTtickets, CHILDtickets;
    double TOTALadult, TOTALchild, gross, net, distributor;
    adultPRICE = 10.00;
    childPRICE = 6.00;

    //Get values
    cout << "Enter the name of the movie: " << setw(2);
    cin >> movie;

    cout << "\nEnter the amount of adult tickets sold: ";
    cin >> ADULTtickets;

    cout << "\nEnter the amount of child tickets sold: ";
    cin >> CHILDtickets;

    //Calculate the values
    TOTALadult = ADULTtickets * adultPRICE; //Adult tickets amount

    TOTALchild = CHILDtickets * childPRICE; //Child tickets amount 

    gross = TOTALadult + TOTALchild; //Gross Box Office Profit amount

    net = gross * 0.20; //Net Box Office Profit amount

    distributor = gross - net; //Amount paid to distributor

    //Display the results
    cout << "\nMovie Name:" << setw(19) << '"' << movie << '"' << endl;

    cout << "Adult Tickets Sold:";
    cout << setw(15) << ADULTtickets << endl;

    cout << "Child Tickets Sold:"; 
    cout << setw(15) << CHILDtickets << endl;

    cout << "Gross Box Office Profit:"; 
    cout << setw(6) << "$" << setw(9) << setprecision(2) << fixed << gross << endl;

    cout << "Net Box Office Profit:";
    cout << setw(8) << "$" << setw(9) << setprecision(2) << fixed << net << endl;

    cout << "Amount Paid to Distributors:";
    cout << setw(2) << "$" << setw(9) << setprecision(2) << fixed << distributor << endl;

return 0;

}