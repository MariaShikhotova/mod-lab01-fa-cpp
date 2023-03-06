// Copyright 2022 UNN-IASR
#include "fun.h"
unsigned int faStr1(const char *str) {
	int sum = 0;
	bool flag = true;
	for (int i = 0; i < strlen(str) + 1; i++) {
		flag = true;
		if ( (str[i - 1] == ' ' || i == 0) && (str[i] != ' ' && str[i] != '\0') ) {
			while (str[i] != ' ' && str[i] != '\0') {
				if (str[i] >= '0' && str[i] <= '9') {
					flag = false;
				}
				i++;
			}
			if (flag) {
				sum++;
			}
		}
	}
	return sum;
}
unsigned int faStr2(const char *str) {
	int sum = 0;
	bool flag = true;
	for (int i = 0; i < strlen(str) + 1; i++) {
		flag = true;
		if ( (str[i - 1] == ' ' || i == 0) && (str[i] >= 'A' && str[i] <= 'Z') ) {
			i++;
			while (str[i] != ' ' && str[i] != '\0') {
				if (!(str[i] >= 'a' && str[i] <= 'z')) {
					flag = false;
				}
				i++;
			}
			if (flag) {
				sum++;
			}
		}
	}
	return sum;
}
unsigned int faStr3(const char *str) {
	double sum_word = 0;
	double count_letter = 0;
	bool flag = true;
	for (int i = 0; i < strlen(str) + 1; i++) {
		flag = true;
		if ( (str[i - 1] == ' ' || i == 0) && (str[i] != ' ' && str[i] != '\0') ) {
			while (str[i] != ' ' && str[i] != '\0') {
				count_letter++;
				i++;
			}
			sum_word++;
		}
	}
	double res = count_letter / sum_word;
	if ((res - static_cast<int>(res)) < 0.5) {
		return static_cast<int>(res);
	} else {
		eturn static_cast<int>(res) + 1;
	}
}
