#pragma once
#pragma warning(disable : 4996)
#include <ctime>
#include <fstream>
#include <iostream>
using namespace std;

char* get_time()
{
	time_t ct;
	time(&ct);
	char* time;
	time = ctime(&ct);
	return time;
}//��ȡʱ��ĺ���

void log_add(string log_what)
{
	ofstream log("log.txt", ios::app);
	log << get_time() << " log::" << log_what << endl << endl;
}//��־����