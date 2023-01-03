#include<iostream>
using namespace std;


int main(){
	string grade;
	int a=0,b=0,c=0,d=0,f=0,x=0 ;
    cout << "Please input grade of each student (A-F) or input 0 to exit.\n" ;
    do{
		cout << "Student [" << x+1 << "]: ";
		cin >> grade ;
		if(grade == "A") {
			a++;
			x++;
		}else if(grade == "B"){
			b++;
			x++;
		}else if(grade == "C"){
			c++;
			x++;
		}else if(grade == "D"){
			d++;
			x++;
		}else if(grade == "F"){
			f++;
			x++;
		}else if(grade == "0") break;
		else { cout << "Wrong input. Please input again.\n";
		}
	}while(1);
    
	cout << "In total " << x << " students.\n" ;
	cout << "A = " << a <<", ";
	cout << "B = " << b <<", ";	
	cout << "C = " << c <<", ";
	cout << "D = " << d <<", ";	
	cout << "F = " << f ;
	

}
