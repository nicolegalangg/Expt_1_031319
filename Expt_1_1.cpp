#include <iostream>
#include <conio.h>
using namespace std;
int main ()

{
	int box = 250;
	int	sideline = 100;
	int premium = 50;
	int gen_ad = 25;
	double solda;
	double soldb;
	double soldc;
	double soldd; 

	cout << "Please enter Box ticket price: \n";
	cin >> box;
	cout << "Please enter Sideline ticket price: \n";
	cin >> sideline;
	cout << "Please enter Premium ticket price: \n";
	cin >> premium;
	cout << "Please enter General Admission Price: \n";
	cin >> gen_ad;

	cout << "Please enter Box tickets sold: \n";
	cin >> solda;
	cout << "Please enter Sideline tickets sold: \n";
	cin >> soldb;
	cout << "Please enter Premium tickets sold: \n";
	cin >> soldc;
	cout << "Please enter General Admission tickets sold: \n";
	cin >> soldd;

	cout << "Ticket Price"  "\t" "Number of Tickets Sold" << endl;
	cout << "$" << box << "\t" "\t" << solda << endl; 
	cout << "$" << sideline << "\t" "\t" << soldb  << endl; 
	cout << "$" << premium << "\t" "\t" << soldc  << endl;
	cout << "$" << gen_ad << "\t" "\t" << soldd << endl;
	cout << "Total Sale Amount = " << box*solda + sideline*soldb + premium*soldc + gen_ad*soldd << endl;
		
		_getch();
		return 0;

}