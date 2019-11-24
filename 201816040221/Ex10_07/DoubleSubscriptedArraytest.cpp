#include<iostream>

#include "DoubleSubscriptedArray.h"

#include<stdexcept>

#include<iomanip>

using namespace std;



int main()

{

	DoubleSubscriptedArray chessBorard(3, 5);



    cout<<"请输入数据\n";
	cin>>chessBorard;

	cout<<chessBorard;

   //cout<<"请输入你想查找的数据的位置\n"<<"x=:"<<"y=:";


	cout<<chessBorard(2,1);

}
