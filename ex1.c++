#include<iostream>
using namespace std;
	class Myclass{
	public:
		Myclass(); //constructeur
	   ~Myclass(); //destructeur
	};
	Myclass::Myclass()
	{
		cout<<"cest moi le constructeur"<<endl;
}
	Myclass:: ~Myclass()
	{
		cout<<"c'est moi' le destructeur"<<endl;
}
int main()
{
	Myclass H;
	cout<<"fin"<<endl;
	}
	


		
	
	
	 
	