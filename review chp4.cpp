#include<iostream>
#include<cmath>
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
void num19();
void num20();
void num21();
void num22();
void num23();
void num24();
void num25();
void num26();
void num27();

int main(){
	
	int choice;
	do{
	cout<<"REVIEW Chapter 4\nenter number(1-27): ";
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
//	case 10 : num10();break;
//	case 11 : num11();break;
//	case 12 : num12();break;
//	case 13 : num13();break;
//	case 14 : num14();break;
//	case 15 : num15();break;
//	case 16 : num16();break;
//	case 17 : num17();break;
//	case 18 : num18();break;
//	case 19 : num19();break;
//	case 20 : num20();break;
//	case 21 : num21();break;
//	case 22 : num22();break;
//	case 23 : num23();break;
//	case 24 : num24();break;
//	case 25 : num25();break;
//	case 26 : num26();break;
//	case 27 : num27();break;
}}while(choice>0 && choice<28);
return 0;}

void num1(){
	cout<<"MIN/MAX" <<endl;
	float a, b;
	
	cout<<"Enter number: "; cin>>a;
	cout<<"Enter number: "; cin>>b;
	
	if(a<b){
		cout<<a <<" < " <<b;
	}
	else{
		cout<<a <<" > " <<b;
	}
cout<<endl;}

void num2(){
	cout<<"ROMAN NUMBER" <<endl;
	int num;
	cout<<"Give number (1-10): "; cin>>num;
	switch(num){
		case 1: cout<<"I"<<endl <<"Input 0 to quit" <<endl;break;
		case 2: cout<<"II"<<endl <<"Input 0 to quit"<<endl;break;
		case 3: cout<<"III"<<endl <<"Input 0 to quit"<<endl;break;
		case 4: cout<<"IV"<<endl <<"Input 0 to quit"<<endl;break;
		case 5: cout<<"V"<<endl <<"Input 0 to quit"<<endl;break;
		case 6: cout<<"VI"<<endl <<"Input 0 to quit"<<endl;break;
		case 7: cout<<"VII"<<endl <<"Input 0 to quit"<<endl;break;
		case 8: cout<<"VIII"<<endl <<"Input 0 to quit"<<endl;break;
		case 9: cout<<"IX"<<endl <<"Input 0 to quit"<<endl;break;
		case 10: cout<<"X"<<endl <<"Input 0 to quit"<<endl;break;
		default: cout<<"INVALID INPUT";
	}
cout<<endl;}

void num3(){
	int date, month, year;
	cout<<"Enter date: "; cin>>date;
	cout<<"Enter month(in number): "; cin>>month;
	cout<<"Enter year(last 2 digits): "; cin>>year;
	if(date*month==year){
		cout<<"Magic date";
	}
	else{
		cout<<"Meh date";
	}
cout<<endl;}

void num4(){
	cout<<"RECTANGLE AREAS" <<endl;
	int leng1, leng2, wid1, wid2;
	cout<<"RECTANGLE 1"<<endl
		<<"enter length: "; cin>>leng1;
	cout<<"enter width: "; cin>>wid1;
	cout<<"RECTANGLE 2"<<endl
		<<"enter length: "; cin>>leng2;
	cout<<"enter width: "; cin>>wid2;
	
	int area1= leng1*wid1, area2= leng2*wid2;
	
	if (area1>area2){
		cout<<"Area 1: " <<area1 <<endl
			<<"Area 2: " <<area2 <<endl
			<<"Rectangle 1 is bigger";
	}
	else if(area1<area2){
		cout<<"Area 1: " <<area1 <<endl
			<<"Area 2: " <<area2 <<endl
			<<"Rectangle 2 is bigger";
	}
	else{
		cout<<"Area 1: " <<area1 <<endl
			<<"Area 2: " <<area2 <<endl
			<<"Same size";
	}
cout<<endl;}

void num5(){
	cout<<"BMI COUNTER"<<endl;
	float weight, height;
	cout<<"Your weight: "; cin>>weight;
	cout<<"Your height: "; cin>>height;
	double bmi= weight*703/pow(height,2);
	
	cout<<"BMI: " <<bmi <<endl;
	if(bmi<=25 && bmi>=18.5){
		cout<<"Optimal";
	}
	else if(bmi<18.5){
		cout<<"Underweight";
	}
	else{
		cout<<"Overweight";
	}
cout<<endl;}

void num6(){
	cout<<"NEWTON'S LAW" <<endl;
	float mass;
	cout<<"Object mass: "; cin>>mass;
	
	float weight= mass*9.8;
	cout<<"Object weight: " <<weight <<" N" <<endl;
	
	if(weight>1000){
		cout<<"Too heavy";
	}
	else if(weight<10){
		cout<<"Too light";
	}
	else{
		cout<<"Fair nuff";
	}
cout<<endl;}

void num7(){
	cout<<"TIME MACHINE"<<endl;
	double second;
	cout<<"Enter second: "; cin>>second;
	cout<<fixed <<setprecision(2);
	if(second>=60 && second<3600){
		cout <<second/60 <<" minute(s)";
	}
	else if(second>=3600 && second<86400){
		cout<<second/3600 <<" hour(s)";
	}
	else if(second>=86400){
		cout<<second/86400 <<" day(s)";
	}
	else{
		cout<<second <<" seconds";
	}
cout<<endl;}

void num8(){
	cout<<"COLOR MIXER"<<endl;
	string color1, color2;
	cout<<"Enter color(blue/red/yellow): "; cin>>color1;
	cout<<"Enter color(blue/red/yellow): "; cin>>color2;
	
	if(color1=="blue" && color2=="red" || color2=="blue" && color1=="red"){
		cout<<"You get purple";
	}
	else if(color1=="yellow" && color2=="red" || color2=="yellow" && color1=="red"){
		cout<<"You get orange";
	}
	else if(color1=="yellow" && color2=="blue" || color2=="yellow" && color1=="blue"){
		cout<<"You get green";
	}
	else if(color1=="yellow" && color2=="yellow" || color2=="yellow" && color1=="yellow"){
		cout<<"Still yellow";
	}
	else if(color1=="blue" && color2=="blue" || color2=="blue" && color1=="blue"){
		cout<<"Still blue";
	}
	else if(color1=="red" && color2=="red" || color2=="red" && color1=="red"){
		cout<<"Still red";
	}
	else{
		cout<<"Invalid color";
	}
cout<<endl;}

void num9(){
	cout<<"DOLLAR COUNTER" <<endl;
	float penny= 0.01, nickel= 0.05, dime= 0.1, quarter= 0.25;
	int nPenny, nNickel, nDime, nQuarter;
	cout<<"Penny inserted: "; cin>>nPenny;
	cout<<"Nickel inserted: "; cin>>nNickel;
	cout<<"Dime inserted: "; cin>>nDime;
	cout<<"Quarter inserted: "; cin>>nQuarter;
	
	float dollar= nPenny*penny + nNickel*nickel + nDime*dime + nQuarter*quarter;
	cout<<setprecision(2);
	if(dollar>1){
		cout <<"$ " <<dollar <<" Ballin'";
	}
	else if(dollar<1){
		cout<<"$ " <<dollar <<" You broke?";
	}
	else{
		cout <<"$ " <<dollar <<" Jackpot";
	}
cout<<endl;}


