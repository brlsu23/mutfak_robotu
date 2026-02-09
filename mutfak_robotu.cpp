
#include<iostream>
using namespace std;
class Motor{
	public:
		Motor(){ 
		cout<< "motor sistemi hazir!"<< endl; 
		}
		
		~Motor(){
		 cout<<"motor durduruldu"<< endl;
		 	}
			
};


class Isitici{
	public:
Isitici(){	cout<<"isitici sistemi hazir!"<<endl;	}
	
		~Isitici(){	cout<<"İsitici kapatildi!"<<endl;	}
	
	
	
};
class MutfakRobotu:public Motor,public Isitici{
	 public:
	MutfakRobotu (){
	 		cout<<"Mutfak robotu calismaya basladi!"<< endl; }
		 
		 	~MutfakRobotu(){	cout<< "Mutfak robotu kapatildi!"<< endl;	 }
	 	 void getmessage(){
	 	 	cout<<"robot su an yemek hazirliyor.."<< endl;
		  }
};


int main(){
	
	MutfakRobotu  MF;
	MF.getmessage();
	
	return 0;
 	}












