#include<cstdio>
#include<iostream>
#include "HelloClass.h"

using namespace std;

HelloClass::HelloClass()
{
	cout<<"I'm being created."<<endl;
}

HelloClass::~HelloClass()
{
	cout<<"I'm being destoryed."<<endl;
}

void HelloClass::sayHello()
{
	cout<<"Hello Class!"<<endl;
}
