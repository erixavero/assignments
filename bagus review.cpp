// page 79 no. 2-

#include<iostream>
#include<iomanip>
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
void num13();
void num14();
void num15();
void num16();
void num17();
void num18();

int main(){
	int choice;
	do{
	cout<<"Enter number 2-18 : ";
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
	case 13 : num13();break;
	case 14 : num14();break;
	case 15 : num15();break;
	case 16 : num16();break;
	case 17 : num17();break;
	case 18 : num18();break;
	}}while(choice<=18 && choice>=2);
return 0;}

void num2(){
	const int sales= 8600000;
	int eastCoast= sales*58/100;
	cout <<"East Coast generates $ "<<eastCoast;
	cout<<endl;
}

void num3(){
	const int pay= 95;
	int stateTax= pay*4/100;
	int countryTax= pay*2/100;
	cout << "purchase is $ " <<pay <<" total is $ "
	<<pay+stateTax+countryTax;
	cout<<endl;
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
		cout<<endl;
}

void num5(){
	double sum= 28+32+37+24+33;
	cout <<sum/5;
	cout<<endl;
}

void num6(){
	const double payAmount= 2200.0;
	const double payPeriod= 26;
	double annualPay= 2200.0*26;
	cout<<"Annual pay: $ "<<annualPay;
	cout<<endl;
}

void num7(){
	const double rise= 1.5;
	cout<<"in 5 years sea level will rise by " <<rise*5 <<"mm" <<endl
		<<"in 7 years sea level will rise by " <<rise*7 <<"mm" <<endl
		<<"in 10 years sea level will rise by " <<rise*10 <<"mm" <<endl
		<<"Do something, you monster!";
		cout<<endl;
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
		cout<<endl;
}

void num9(){
	cout<<"char size: " <<sizeof(char) <<" bytes" <<endl
		<<"int size: " <<sizeof(int) <<" bytes" <<endl
		<<"double size: " <<sizeof(double) <<" bytes" <<endl
		<<"float size: " <<sizeof(float)<<" bytes";
		cout<<endl;
}

void num10(){
	const int gallons= 15;
	const int distance= 375;
	int mpg= distance/gallons;
	cout<<"MPG: " <<mpg;
	cout<<endl;
}

void num11(){
	const int gallons= 20;
	const double avgTown= 23.5;
	const double avgHigh= 28.9;
	 
	cout<<"Distance in town: " <<gallons*avgTown <<" miles" <<endl
		<<"Distance on highway: " <<gallons*avgHigh <<" miles";
		cout<<endl;
}

void num12(){
	const double oneAcre= 43560; //sqfeet
	double land= 391876; //sqfeet
	
	double calc= land/oneAcre;
	cout <<"391,876 sq feet equals to " <<calc <<" acres";
	cout<<endl;
}

void num13(){
	const double cost= 14.95;
	double profit= cost*35/100;
	double sell= cost+profit;
	cout<<"selling price is $ " <<sell;
	cout<<endl;
}

void num14(){
	cout <<"name: Ryan Fitzgerald" <<endl
		<<"address: Dreamer 34 st" <<endl
		<<"city: Metropolis" <<endl
		<<"state: MURICA!" <<endl
		<<"ZIP: 1058183" <<endl
		<<"phone: 1-800-BITE-ME" <<endl
		<<"Major: Loser" <<endl;
}

void num15(){
	cout <<setw(4)<<"*"<<endl;
	cout<<setw(5)<<"***"<<endl;
	cout<<setw(6)<<"*****"<<endl;
	cout<<"*******"<<endl;
}

void num16(){
	cout <<setw(4)<<"*"<<endl;
	cout<<setw(5)<<"***"<<endl;
	cout<<setw(6)<<"*****"<<endl;
	cout<<"*******"<<endl;
	cout<<setw(6)<<"*****"<<endl;
	cout<<setw(5)<<"***"<<endl;
	cout <<setw(4)<<"*"<<endl;
}

void num17(){
	const int shares= 750;
	const double price= 35.00;
	double subtotal= shares*price;
	double commission= subtotal*2/100;
	cout<<"Stock subtotal: $ " <<subtotal <<endl
		<<"Stock commission: $ "<<commission <<endl
		<<"Stock total: $ " <<subtotal+commission <<endl;
}

void num18(){
	const int survey= 16500;
	int energyJunkie= 16500*15/100;
	int citrusLover= energyJunkie*58/100;
	
	cout<<"Approx amount of energy drink junkie: " <<energyJunkie <<endl
		<<"Approx amount of citrus lover: " <<citrusLover <<endl;
}
