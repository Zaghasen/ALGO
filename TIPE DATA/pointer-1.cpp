// Pointer.cpp : Defines the entry point for the console application.

#include <malloc.h>
#include <iostream>
using namespace std;

int main()
{  int *p,*q, n;
   p=(int *) malloc(sizeof(int));
   q=(int *) malloc(sizeof(int));
   n = 10;  *p = 30;  *q = 50;
   *q = n;   q = p;
   p = &n;
   printf("Alamat n = %d\n",&n);
   printf("Alamat p = %d\n",p);
   printf("Alamat q = %d\n",q);
   printf("n  = %d\n",n);
   printf("*p = %d\n",*p);
   printf("*q = %d\n",*q);
   getchar();
}
