// page 79 no. 2-

#include<iostream>
using namespace std;

void num2();
void num3();
void num4();
void num5();
void num6();
void num7();
void num8();
void num9();
void num10();
void num11();
void num12();

int main(){
	int choice;
	cout<<"Enter number 2- : ";
	cin>>choice;
	switch(choice){
	case 2 : num2();break;
	case 3 : num3();break;
	case 4 : num4();break;
	case 5 : num5();break;
	case 6 : num6();break;
	case 7 : num7();break;
	case 8 : num8();break;
	case 9 : num9();break;
	case 10 : num10();break;
	case 11 : num11();break;
	case 12 : num12();break;
	}
return 0;}

void num2(){
	const int sales= 8600000;
	int eastCoast= sales*58/100;
	cout <<"East Coast generates $ "<<eastCoast;
}

void num3(){
	const int pay= 95;
	int stateTax= pay*4/100;
	int countryTax= pay*2/100;
	cout << "purchase is $ " <<pay <<" total is $ "
	<<pay+stateTax+countryTax;
}

void num4(){
	const double pay= 88.67;
	double tax= 88.67*6.75/100;
	double tip= (pay+tax)*20/100;
	double total= pay+tax+tip;
	
	cout<<"your purchase $ " <<pay <<endl
		<<"tax $ " <<tax <<endl
		<<"tip $ " <<tip <<endl
		<<"total $ " <<total;
}

void num5(){
	double sum= 28+32+37+24+33;
	cout <<sum/5;
}

void num6(){
	const double payAmount= 2200.0;
	const double payPeriod= 26;
	double annualPay= 2200.0*26;
	cout<<"Annual pay: $ "<<annualPay;
}

void num7(){
	const double rise= 1.5;
	cout<<"in 5 years sea level will rise by " <<rise*5 <<"mm" <<endl
		<<"in 7 years sea level will rise by " <<rise*7 <<"mm" <<endl
		<<"in 10 years sea level will rise by " <<rise*10 <<"mm" <<endl
		<<"Do something, you monster!";
}

void num8(){
	double item1= 15.95;
	double item2= 24.95;
	double item3= 6.95;
	double item4= 12.95;
	double item5= 3.95;
	double sum= item1+item2+item3+item4+item5;
	double tax= sum*7/100;
	double total= sum+tax;
	cout <<"price1 $ " <<item1 <<endl
		<<"price2 $ " <<item2 <<endl
		<<"price3 $ " <<item3 <<endl
		<<"price4 $ " <<item4 <<endl
		<<"price5 $ " <<item5 <<endl
		<<"subtotal $ " <<sum <<endl
		<<"tax $ " <<tax <<endl
		<<"total $ " <<total;
}

void num9(){
	cout<<"char size: " <<sizeof(char) <<" bytes" <<endl
		<<"int size: " <<sizeof(int) <<" bytes" <<endl
		<<"double size: " <<sizeof(double) <<" bytes" <<endl
		<<"float size: " <<sizeof(float)<<" bytes";
}

void num10(){
	const int gallons= 15;
	const int distance= 375;
	int mpg= distance/gallons;
	cout<<"MPG: " <<mpg;
}

void num11(){
	const int gallons= 20;
	const double avgTown= 23.5;
	const double avgHigh= 28.9;
	 
	cout<<"Distance in town: " <<gallons*avgTown <<" miles" <<endl
		<<"Distance on highway: " <<gallons*avgHigh <<" miles";
}

void num12(){
	const double oneAcre= 43560; //sqfeet
	double land= 391876; //sqfeet
	
	double calc= land/oneAcre;
	cout <<"391,876 sq feet equals to " <<calc <<" acres";
}
