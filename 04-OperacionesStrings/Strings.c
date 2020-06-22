/*
Darío Nahuel Gatica
163-855-5
2020 06 22
*/
#include "Strings.h"
#include <stdio.h>

bool IsEmpty(const String string){
    return string[0] == '\0';
}

unsigned GetLength(const String string){
    return IsEmpty(string) ? 0
                           : 1 + GetLength(string + 1);

}

String Concat(const String str1, const String str2){
    String result;
    String start = result;

    result = str1;
    for (char* ptr = str1; *ptr != '\0'; ptr++) {
        *result = *ptr;
        result++;
    }

    for (char* ptr = str2; *ptr != '\0'; ptr++) {
        *result = *ptr;
        result++;
    }

    *result = '\0';
    return start;
}

String Power(const String str, const unsigned n){
    return n == 0 ? ""  :
           n == 1 ? str :   
                    Concat(str, Power(str, n-1));
}

bool AreEqual(const String str1, const String str2){
    if(GetLength(str1) != GetLength(str2)) return false;

    for(unsigned i = 0; i < GetLength(str1); ++i) {
        if (str1[i] != str2[i]) return false;
    }

    return true;
}
