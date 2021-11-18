#include "middle_str.h"

string itc_rmFreeSpace(string str)
{
	long long len = itc_len(str);
	string otv = "";
	for (int i = 0; i < len; i++) if (!((str[i] == ' ') && (str[i + 1] == ' '))) otv += str[i];
	return otv;
}
