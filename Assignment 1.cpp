#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
	int n, lp, choice= 0;
	double *data, n2, n3;
	do
	{
		lp=0, n2=0;
		cout<<endl;
		if (choice!=0) system ("pause");
		system ("cls");
		cout<<"STATISTICS ANALYSING PROGRAM"<<endl<<endl;
		cout<<"1. showChoice"<<endl;
		cout<<"2. enterData"<<endl;
		cout<<"3. displayMean"<<endl;
		cout<<"4. displayLowestHighest"<<endl;
		cout<<"5. displayStd"<<endl;
		cout<<"6. displayStdCategory"<<endl;
		cout<<"7. exit."<<endl<<endl;
		cout<<"Please select one of the options above. If you are unfamiliar with this program, please select the first choice. (Number): ";
		cin>>choice;
		switch (choice)
		{
			case 1: cout<<endl<<"1. showChoice           : This option shows the options to the user and explains how to enter data."<<endl;
					cout<<"2. enterData            : This option prompts and get the data based on the number of data specified by the user."<<endl;
					cout<<"3. displayMean          : This option displays the mean of the set of data."<<endl;
					cout<<"4. displayLowestHighest : This option displays the lowest value and highest value from the set of data."<<endl;
					cout<<"5. displayStd           : This option displays the standard deviation of the set of data."<<endl;
					cout<<"6. displayStdCategory   : This option determines and displays the standard deviation category. Option 6 has to be executed first."<<endl;
					cout<<"7. exit                 : This option closes the program."<<endl;
					break;
			case 2:	cout<<endl<<"Please enter the number of data to be keyed in: ";
					cin>>n;
					data= new double [n];
					for (lp; lp!=n; lp++)
					{
					cout<<"Please key in data "<<lp+1<<": ";
					cin>>data[lp];
					}
					break;
			case 3: for (lp; lp!=n; lp++) n2= n2 + data[lp];
					cout<<endl<<"The mean of the set of data is "<<fixed<<setprecision(2)<<n2/n<<"."<<endl;
					break;
			case 4: n2=data[0], n3=data[0];
					for (lp; lp!=n; lp++)
					{
						if (data[lp]<= n2) n2= data[lp];
						if (data[lp]>= n3) n3= data[lp]; 
					}
					cout<<endl<<"The lowest value from the set of data is "<<fixed<<setprecision(2)<<n2<<" and the highest is "<<fixed<<setprecision(2)<<n3<<"."<<endl;
					break;
			case 5: n3=0;
					for (lp; lp!=n; lp++) n2= n2 + data[lp];
					for (lp=0; lp!=n; lp++) n3= n3 + pow(data[lp]-n2/n,2);
					cout<<endl<<"The standard deviation of the set of data is "<<fixed<<setprecision(2)<<sqrt(n3/n)<<"."<<endl;
					break;
			case 6: cout<<endl<<"The standard deviation category is ";
					if (n3==0) cout<<"No difference";
					else if ((n3>0) && (n3<1)) cout<<"Medium difference";
					else cout<<"Big difference";
					cout<<"."<<endl;
					break;
			case 7: cout<<endl<<"Program ended. Press any key to close program."<<endl;
					break;
			default:cout<<endl<<"Your input is invalid. Please try again."<<endl;
					break;
		}
	}
	while (choice!=7);
	return 0;
}
