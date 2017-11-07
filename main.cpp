#include <iostream>

using namespace std;
/*
 * TODO- Functions!
 */
int totalSales() {
    int allSales;
    //function to keep a tally of total seats sold.
    allSales += 1;
    return allSales;
}

int unsoldCount () {
    int freeSeats;
    // function to return the amount of unsold/free seats total.
    return freeSeats;
}

#include <iostream>
using namespace std;

// asking for the rows
int row = 0;
int getrow()
{
	while (row == 0)
	{
		cout << "plesa input Row number 1-15" << endl;
		cin >> row;
		//cheking the input number is a proper
		//TODO:this needs to ties 1-15 to A-O 
		if (row >= 1 && row <= 15)
		{
			return row;
		}
		else 
		{
			cout << "false input: pleas input a proper input" << endl;
			cout << endl;
			row = 0;
		}
	}
}
//geting the seats
int seat = 0;
int getseat()
{
	while (seat == 0)
	{
		cout << "plesa input Row number 1-30" << endl;
		cin >> seat;
		if (seat >= 1 && seat <= 30)
		{
			return seat;
		}
		else
		{
			cout << "false input: pleas input a proper input" << endl;
			cout << endl;
			seat = 0;
		}
	}
	
}
//ties the prise to the seat
double price;
int getprice()
{
	if (row >= 1 && row <= 5)
	{
		price = 350;
	}
	else if (row >= 6 && row <= 10)
	{
		price = 250;
	}
	else if (row >= 11 && row <= 15)
	{
		price = 150;
	}
	return price;
}
	//geting a respons frome the user 
int check = 2;
int allSales;
	int response()
	{
		cout << "This seat will cost you: $" << price << endl;
		cout << "Would you like to purchase this seat? ENTER 1 = Yes, 2 = No ";
		cin >> check;
		if (check == 1)
		{
			cout << "thank you your seat is" << row << ":" << seat << endl;
			return check;
		}
		else if (check == 2)
		{
            cout << ""
		}
	}



int main() 
{
		int row = getrow();
		int seat = getseat();
		//TODO: create a methed that checks the aray for the row and seat to see if ther taken
		int price = getprice();
		int check = response();
		cout << check;

    //Constant for your rows and constant for your seats with a 2d array pre-defined.
    const ROWS = 15;
    const SEATS = 30;
    int seatIndex [ROWS][SEATS];
    int usrInput; //TODO write code to recieve user input.
    switch (usrInput) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
    }
        /*
         * TODO- a switch statement to call the functions depending on user input.
         */
    return 0;
}
