#include "middle_str.h"

long long itc_len(string str)
{
    long long i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int itc_find_str(string str1, string str2)
{
	long long ind = 0, st1 = itc_len(str1), st2 = itc_len(str2), otv = -1;
	for (int i = 0; i < st1; i++) {
		if (str1[i] == str2[0]) {
			otv = i;
			for (int j = 0; j < st2; j++) {
				if (str1[j + i] == str2[ind]) {
					ind++;
				}
				else {
					ind = 0;
					break;
				}
			}
		}
		if (ind == st2) {
			break;
		}
	}
	return(otv);
}

string itc_covert_num(int number, int ss)
{
	string otv1 = "", otv2 = "";
	if ((ss > 16) || (ss < 2) || (number < 0)) {
		return "-1";
	}
	else if (ss < 10) {
		while (number > 0) {
			otv1 += ('0' + (number % ss));
			number /= ss;
		}
	}
	else {
		while (number > 0) {
			if (number % ss >= 10) otv1 += ('A' + (number % ss) - 10);
			else otv1 += ('0' + (number % ss));
			number /= ss;
		}
	}
	int i = itc_len(otv1);
	while (i > 0) {
		i--;
		otv2 += otv1[i];
	}
	return otv2;
}

int itc_len_num(long long a)
{
	a = itc_abs(a);
	int nol = 0;
	if (a == 0) return 1;
	while (a > 0) {
		a = a / 10;
		nol++;
	}
	return (nol);
	return -1;
}

long long itc_abs(int a)
{
	if (a < 0) return (a * -1);
	return a;
}

int itc_pow(int num, int step)
{
	int result = 1;
	long long chislo = num;
	int iterationsCount = step;
	if (step == 0) {
		return 1;
	}
	else if (step < 0) {
		return -1;
	}
	while (result < iterationsCount)
	{
		num = num * chislo;
		result++;
	}
	if (step > 0) {
		return num;
	}
	return -1;
}

int itc_stoi(string str)
{
	int number = 0, len = itc_len(str);
	for (int i = 0; i < len; i++) {
		if ((number == 0) && (str[i] > '0') && (str[i] <= '9')) number = str[i] - 48;
		else number = number * 10 + (str[i] - 48);
	}
	return number;
}
