#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;


long long itc_len(string str);
int itc_find_str(string str1, string str2);
long long itc_abs(int a);
int itc_len_num(long long a);
string itc_covert_num(int number, int ss);
int itc_pow(int num, int step);
int itc_stoi(string str);

bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string s1, string s2);
int itc_countWords(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string s1, string s2);
string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);
string itc_DecToBin(string str);
string itc_decToBase(int number, int ss);

#endif // MIDDLE_STR_H_INCLUDED
