/*
Darío Nahuel Gatica
163-855-5
2020 06 22
*/
#include "Strings.h"
#include <assert.h> //cassert
#include <stdio.h>

void IsEmptyTests(){
    assert(IsEmpty(""));
    assert(!IsEmpty(" "));
    assert(!IsEmpty(" aa"));
    assert(!IsEmpty("aa"));
}

void GetLengthTests(){
    assert(0 == GetLength(""));
    assert(1 == GetLength(" "));
    assert(4 == GetLength("a  a"));
    assert(3 == GetLength("aaa"));
}

void AreEqualTests(){
    assert( AreEqual(     "",""));
    assert( AreEqual(   "aa","aa"));
    assert( AreEqual("ab aa","ab aa"));
    assert(!AreEqual(     ""," "));
    assert(!AreEqual(   "  "," "));
    assert(!AreEqual(    "b","a"));
    assert(!AreEqual(  "baa","a"));
    assert(!AreEqual(    "a","abb"));
    assert(!AreEqual(   "bs","a"));
    assert(!AreEqual(    "a","b"));
}

void ConcatTests(){
    assert(AreEqual("aza", Concat("a","za")));
    assert(AreEqual("aa", Concat("","aa")));
    assert(AreEqual("bb", Concat("bb","")));
    assert(AreEqual("", Concat("","")));
    assert(AreEqual("  ", Concat("","  ")));
}

void PowerTests(){
    assert(AreEqual("bababa", Power("ba", 3)));
    assert(AreEqual(    "ba", Power("ba", 1)));
    assert(AreEqual(      "", Power("ba", 0)));
}

int main()
{
    IsEmptyTests();
    GetLengthTests();
    AreEqualTests();
    ConcatTests();
    PowerTests();
}