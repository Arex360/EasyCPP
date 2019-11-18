#ifdef easy
#define easy
#include<string>
#include<iostream>
#include "module1.h"
#include "module2.h"
#include "module3.h"
#if defined EXPORT
#define exp __declspec(dllexport)
#else
#define exp __declspec(dllimport)

extern "C"{
   exp int sum(int a, int b);
   exp string isPrime(int num);
   exp int len(string a);
}
#endif
