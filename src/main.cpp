// Copyright 2022 UNN-IASR
#include "fun.h"

int main() {
    char a[100];
	cin.getline(a, 100);
	char* s = a;
	cout << faStr1(s) << "\n";
	cout << faStr2(s) << "\n";
	cout << faStr3(s) << "\n";
}
