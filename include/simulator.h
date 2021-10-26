#ifndef SIMULATOR_H
#define SIMULATOR_H
#include <fstream>
#include "and.h"
#include "OR.h"
#include "XOR.h"
#include "XNOR.h"
#include "NOR.h"
#include "NAND.h"
#include <sstream>
#include <stdio.h>
#include <iostream>
using namespace std;
class simulator
{
    gate *x[1000];
    int last = 0;
public:
    void load(string path);
    void ANd(string s1, string s2, string s3);
    void Or(string s1, string s2, string s3);
    void XOr(string s1, string s2, string s3);
    void XNOr(string s1, string s2, string s3);
    void NOr(string s1, string s2, string s3);
    void NANd(string s1, string s2, string s3);
    void SEt(string s2, string s3);
    void match();
    int FINd(string name);
    void out( string s);
    void sim();
};

#endif // SIMULATOR_H
