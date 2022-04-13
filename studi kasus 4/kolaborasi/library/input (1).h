#include <iostream>
#include<fstream>
using namespace std;

class Input {
	private : 
			ofstream tulis_data;
			int b_us,b_uj;
	public : 
		void cetak (){
			cout << "1. Uang Saku	:  \n";
			cin>>b_us;
			cout << "2. Uang jajan	: \n";
			cin>>b_uj;
	}
			void toFile(){
				
				tulis_data.open("../pra data/input.txt");
				tulis_data<<b_us<<endl;
				tulis_data<<b_uj<<endl;
				tulis_data.close();
			}				
};