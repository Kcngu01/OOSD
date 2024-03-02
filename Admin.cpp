/******************************
class Admin
Implemented by Joaane Chong Aie Ying (79681)
****************************/

#include "Admin.h"

//class object
Customer c;
Order or_d;

Admin::Admin()
{
}

//display operation available for admin
void Admin::adminMenu(){
	system("cls");
	cout<<"\t|=======================================================|"<<endl;
	cout<<"\t|		1) Add extra charge\t\t\t|"<<endl;
	cout<<"\t|		2) View list of product\t\t\t|"<<endl;
	cout<<"\t|               3) View order\t\t\t\t|"<<endl;
	cout<<"\t|		4) Logout\t\t\t\t|"<<endl;
	cout<<"\t|=======================================================|"<<endl;
	cout<<"Choo an option:";
}


//add extra fee charged on the product like shipping fee and tax
void Admin::addExtraFee(){
	string tax,shipFee;
	cout<<"Set the tax charged on product(%):";
	cin>>tax;
	cout<<"Set the shipping fee(RM):";
	cin>>shipFee;
	ofstream ofs;
	ofs.open(charge_file,ios::out);
	ofs<<tax<<endl<<shipFee;
	cout<<endl<<endl<<"\t------------------------------------------"<<endl;
	cout<<"\t\tAdded successfully."<<endl;
	cout<<"\t------------------------------------------"<<endl;
	ofs.close();
		
}

//display product 
void Admin::checkProduct(){
	c.browseProduct();
}

//display all order created
void Admin::view_order(){
	or_d.adminViewOrder();
}

void Admin::setAdminName(string name){
	adminName=name;
}

void Admin::setAdminPassword(string password){
	adminWord=password;
}

void Admin::setAdminId(string id){
	adminId=id;
}

string Admin::getAdminName(){
	return adminName;
}

string Admin::getAdminWord(){
	return adminWord;
}

string Admin::getAdminId(){
	return adminId;
}

Admin::~Admin()
{
}
