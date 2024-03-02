/******************************
class Admin
Implemented by Joaane Chong Aie Ying (79681)
****************************/

#ifndef ADMIN_H
#define ADMIN_H

#include<string>
#include<iostream>
#include<fstream>
#include"file.h"
#include"Customer.h"
#include"Order.h"
using namespace std;
class Admin
{
	public:
		Admin();		//constructor
		~Admin();
		void setAdminName(string);
		void setAdminPassword(string);
		void setAdminId(string);
		string getAdminName();
		string getAdminWord();
		string getAdminId();
		void addExtraFee();		//add data
		void checkProduct();
		void view_order();
		void adminMenu();
		
	private:
		string adminName;
		string adminWord;
		string adminId;
};

#endif
