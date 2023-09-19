#include "Ejercicio01.h"
#include<iostream>
#include<ctype.h>

using namespace std;
int n=0;
int m=0;
char Ejercicio01::lower(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return c;

    return (char)(c + 32);
}

bool Ejercicio01::isPalindrome(const char* phrase, int length)
{
    n = length-m;
    string* p = new string[length];
    for (int i = 0; i < length; i++) {
        *(p + i) = *(phrase + i);
    }
    if (n == 1) {
        return true;
    }
    
    


    return false;
}
