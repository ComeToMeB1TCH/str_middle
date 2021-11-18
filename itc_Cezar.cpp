#include "middle_str.h"

string itc_Cezar(string str, int k)
{
	long long len = itc_len(str);
	if (k == 0) return str;
	else if (k > 0) for (int i = 0; i < len; i++) { if ((str[i] + k) % 123 < 97) str[i] = (str[i] + k) % 122 + 97; else str[i] = str[i] + k; }
	else for (int i = 0; i < len; i++) { if (str[i] + k < 97) str[i] = 123 - (97 - (k + str[i])); else str[i] = str[i] + k; }
	return str;
}
