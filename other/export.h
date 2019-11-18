#ifdef easyCPP
#define easyCPP
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
   exp string type(int a);
   exp string type(double a);
   exp string type(string a);
   exp string type(bool a);
}
#endif
