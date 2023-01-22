#include <stdint.h>

unsigned int conta_spazi(const char* s) {



	if (s == NULL) {

		return NULL;
	}

	unsigned int res = 0;

	for (unsigned int i = 0; s[i]; i++) {

		if (s[i] == ' ') {

			res += 1;
		}

	}

	return res;
}