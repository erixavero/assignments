#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

void num1();
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
	cout<<"REVIEW Chapter 3\nenter number: ";
	cin>>choice;
	switch(choice){
	case 1 : num1();break;	
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
//	case 15 : num15();break;
//	case 16 : num16();break;
//	case 17 : num17();break;
//	case 18 : num18();break;
	}}
	while(choice>0 && choice<25);
return 0;}

void num1(){
	double gallons, distance;
	cout<<"GAS MILEAGE" <<endl;
	cout<<"enter gallons of gas: "; cin>>gallons;
	cout<<"enter distance driven: "; cin>>distance;
	
	double mileage= distance/gallons;
	cout<<"distance achieved per gallon: " <<mileage <<" miles/gallon";
cout<<endl;}

void num2(){
	cout<<"TICKET COUNTER\n";
	int classA= 15;
	int classB= 12;
	int classC= 9;
	
	int ticketA, ticketB, ticketC;
	cout<<"Class A tickets sold: "; cin>>ticketA;
	cout<<"Class B tickets sold: "; cin>>ticketB;
	cout<<"Class C tickets sold: "; cin>>ticketC;
	
	double income= classA*ticketA +classB*ticketB + classC*ticketC;
	cout<<fixed <<setprecision(2) <<showpoint;
	cout<<"total income: $ " <<income;
cout<<endl;}

void num3(){
	cout<<endl <<"SCORE COUNTER\n";
	double score, total;
	for(int i=0; i<5;i++){
		cout<<"insert score "; cin>>score;
		total= total+score;
	}
	cout<<fixed <<setprecision(1) <<showpoint;
	cout<< "average score: " <<total/5;
cout<<endl;}

void num4(){
	cout<<"RAIN RATE\n";
	string month[3];
	double rain[3];
	for(int i=0; i<3; i++){
		cout<<"enter month "; cin>>month[i];
		cout<<"enter rain rate "; cin>>rain[i];
	}
	cout<<fixed <<setprecision(2) <<showpoint;
	cout<<"average rainfall for " <<month[0] 
	<<", " <<month[1] <<", " <<month[2]
	<<" is " <<(rain[0]+rain[1]+rain[2])/3 <<" inches";
cout<<endl;}

void num5(){
	cout<<"GENDER STATS\n";
	float male, female;
	cout<<"Male students: "; cin>>male;
	cout<<"Female students: "; cin>>female;
	float total= male+female;
	cout<<fixed <<setprecision(0);
	cout<<"Male percentage: " <<male/total*100 <<"%" <<endl
		<<"Female percentage: " <<female/total*100 <<"%";
cout<<endl;}

void num6(){
	cout<<"LET'S MAKE A COOKIE\n";
	float sugar= 1.5, butter= 1, flour= 2.75;
	float cookie= 48;
	float cookiesGoal;
	cout<<"Cookies goal: "; cin>>cookiesGoal;
	
	cout<<fixed <<setprecision(1) <<showpoint;
	cout<<"Sugar needed: " <<cookiesGoal/cookie*sugar <<" cups" <<endl
		<<"Flour needed: " <<cookiesGoal/cookie*flour <<" cups" <<endl
		<<"Butter needed: " <<cookiesGoal/cookie*butter <<" cups" <<endl;
cout<<endl;}

void num7(){
	cout<<"THEATER\n";
	string movie;
	double adultPrice= 10, childPrice= 6;
	int adultSold, childSold;
	
	cout<<"Movie name: " <<setw(17) <<" "; cin>>movie; //somehow can't enter string with getline
	cout<<"Adult tickets sold: "<<setw(9) <<" "; cin>>adultSold;
	cout<<"Child tickets sold: "<<setw(9) <<" "; cin>>childSold;
	
	float gross= adultPrice*adultSold + childPrice*childSold;
	float net= gross*20/100;
	cout<<fixed <<setprecision(2) <<showpoint;
	cout<<"Gross Box Office Profit:"<<setw(5) <<"$ "<<gross <<endl
		<<"Net Box Office Profit: " <<setw(6) <<"$ " <<net <<endl
		<<"Amount for distributor: " <<setw(5) <<"$ " <<gross-net;
	
cout<<endl;}

void num8(){
	float widgetWeight= 12.5, palletWeight, total;
	
	cout<<"Pallet weight: "; cin>>palletWeight;
	cout<<"Total weight: "; cin>>total;
	
	//total= widget*widgetweight+palletweight
	int widget= (total-palletWeight)/widgetWeight;
	cout<<"Widget amount: " <<widget;
	
cout<<endl;}

void num9(){
	cout<<"COOKIE CALORIE\n";
	int cookiesEaten;
	int cookie= 30, serving=10, cals= 300;
	double cookiesPerServ= cookie/serving;
	double calsPerServ= cals/serving;
	double calsPerCookie= calsPerServ/cookiesPerServ; 
	cout<<"Amount of cookies eaten: "; cin>>cookiesEaten;
	double calsGained= calsPerCookie*cookiesEaten;
	cout<<"Calories gained: " <<calsGained;
cout<<endl;}

void num10(){
	double repCost;
	cout<<"Insurance Fraud" <<endl;
	cout<<"Enter replacement cost: $ "; cin>>repCost;
	double insurance= repCost*80/100;
	cout<<"Minimum property insurance insurance: $ " <<insurance;
cout<<endl;}

void num11(){
	double loan, insure, gas, oil, tires, maintenance;
	cout<<"Car Expenses" <<endl;
	cout<<"Loan: " <<setw(10)<<"$ "; cin>>loan;
	cout<<"Insurance: " <<setw(5)<<"$ "; cin>>insure;
	cout<<"Gas: " <<setw(11)<<"$ "; cin>>gas;
	cout<<"Oil: " <<setw(11)<<"$ "; cin>>oil;
	cout<<"Tires: " <<setw(9)<<"$ "; cin>>tires;
	cout<<"Maintenance: " <<setw(3)<<"$ "; cin>>maintenance;
	
	double monthlyPay= loan+insure+gas+oil+tires+maintenance;
	cout<<"Monthly cost: $ " <<monthlyPay <<endl;
	cout<<"Annual cost:  $ " <<monthlyPay*12;
cout<<endl;}

void num12(){
	cout<<"Temper Conver" <<endl;
	float celcius;
	cout<<"Temperature in celcius: "; cin>>celcius;
	float fahr= celcius*9/5+32;
	cout<<"In Fahrenheit: " <<fahr <<" F";
cout<<endl;}

void num13(){
	cout<<"C.R.E.A.M: Cash Rules Everything Around Me\n";
	const float YEN_PER_DOLLAR= 98.93,
				EUROS_PER_DOLLAR= 0.74;
	int dollar;
	cout<<"Enter your money: $ "; cin>>dollar;
	cout<<"in Yen: " <<dollar*YEN_PER_DOLLAR <<endl;
	cout<<"in Euro: " <<dollar*EUROS_PER_DOLLAR;
cout<<endl;}

void num14(){
	
	
cout<<endl;}
