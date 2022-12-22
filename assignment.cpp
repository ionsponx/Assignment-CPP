//Programming C++ Group Assignment Ian,Bryan and Alex
#include<iostream>
using namespace std;
int main() {

	int candinum, lim=0, jun=0 , prab=0 , vin=0 , ah=0 ;
	cout << "****************************\n";
	cout << "Welcome to the Programme Representative election.\n";
	cout << "Press 1 to Vote for candidate Lim Guan Yu 22WMR42592.\n";
	cout << "Press 2 to Vote for candidate Jun Chun Ah 22WMR62184.\n";
	cout << "Press 3 to Vote for candidate Prabhu A/L Abhishek 22WMR63938.\n";
	cout << "Press 4 to Vote for candidate Vinod A/L Sivam 22WMR48246.\n";
	cout << "Press 5 to Vote for candidate Ahmad bin Ruslan 22WMR72348.\n";
	cout << "Key in the selected number for a candidate that you wish to vote for: ";
	cin >> candinum;

	switch (candinum) {
	case 1:
		cout << "\nYou have voted for candidate Lim Guan Yu 22WMR42592";
		lim++;
		break;
	case 2:
		cout << "\nYou have voted for candidate Jun Chun Ah 22WMR62184";
		jun++;
		break;
	case 3:
		cout << "\nYou have voted for candidate Prabhu A/L Abhishek 22WMR63938";
		prab++;
		break;
	case 4:
		cout << "\nYou have voted for candidate Vinod A/L Sivam 22WMR48246";
		vin++;
		break;
	case 5:
		cout << "\nYou have voted for candidate Ahmad bin Ruslan 22WMR72348";
		ah++;
		break;
	default:
		cout << "\n You have entered an invalid number!!";

	}
	if (lim > jun && jun >= prab && prab >= vin && vin >= ah)
		cout << "\nLim Guan Yu is the winner of this election!!";
	else if (jun > lim && lim >= prab && prab >= vin && vin >= ah)
		cout << "\nJun Chun Ah is the winner of this election!!";
	else if (prab > lim && prab >= jun && prab >= vin && prab >= ah)
		cout << "\nPrabhu A/L Abhishek is the winner of this election!!";
	else if (vin > lim && vin >= jun && vin >= prab && vin >= ah)
		cout << "\nVinod A/L Sivam is the winner of this election!!";
	else if (ah > lim && ah >= jun && ah >= prab && ah >= vin)
		cout << "\nAhmad bin Ruslan is the winner of this election!!";
	else
		cout << "\nThis election ended with a draw!!";




	 
	return 0;
}