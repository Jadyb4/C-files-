/*
MOCHIRE BOAZ
BSE-05-0005/2024
c++ code that calculates the bonus amd total salary of workers
22 MAY 2025
version 1
*/  

#include<iostream> //cput, cin
using namespace std;

int main(){
	float salary,years_of_service,bonus,total_salary;
	
	cout<<"enter your salary:"<<endl;
	cin>>salary;
	
	cout<<"enter years of service:"<<endl;
	cin>>years_of_service;
	
	/*cout<<"enter your years of service:"<<endl;
	cin>>salary>>years_of_service;
	*/
    if(years_of_service>10){
    	bonus= 0.06 * salary;
    	total_salary = bonus + salary;
	}
	else if (years_of_service>=6 && years_of_service<=10){
	bonus = 0.08 * salary;
	total_salary = salary = bonus;
	}
	else if (years_of_service<6){
		bonus = 0.06 * salary;
		total_salary = salary + bonus;
	}
    cout<<"the net bonus is: "<<bonus<<endl;
    cout<<"the total salary is :"<<total_salary<<endl;
    
    return 0;

	}   