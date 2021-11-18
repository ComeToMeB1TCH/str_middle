#include "middle_str.h"

char itc_sameChar(string str)
{
	long long len = itc_len(str);
	for (int i = 0; i < len; i++) {
		for (int L = 1; L < len; L++) {
			if ((L != i) && (str[i] == str[L])){
				return str[i];
			}
		}
	}
}
