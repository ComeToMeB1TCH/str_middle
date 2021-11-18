#include "middle_str.h"

bool itc_compare(string s1, string s1)
{
	long long len = itc_len(s1);
	bool r = (len == itc_len(s2));
	if (r == false) {
		return r;
	}
	for (int i = 0; i < len; i++) {
		r = (s1[i] == s2[i]);
		if (r == false) {
			return r;
		}
	}
	return r;
}
