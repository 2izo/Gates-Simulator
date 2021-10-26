#ifndef GATE_H
#define GATE_H
#include "struct.h"


class gate
{
protected:
    node *input1 = new node[1];
    node *input2 = new node[1];
    node *output = new node[1];

public:
    virtual void GetOutput() = 0;
    void setnames(string name1, string name2, string name3);
    void setinput1(bool x, string name1);
    void setinput2(bool y, string name2);
    void setad1(node *ptr);
    void setad2(node *ptr);
    void setad3(node *ptr);
    bool getinput1value();
    bool getinput2value();
    bool getoutputvalue();
    string getinput1name();
    string getinput2name();
    string getoutputname();
    int getinput1flag();
    int getinput2flag();
    bool print()
    {
        return output->value;
    }
    node *ipt1();
    node *ipt2();
    node *opt();
};

#endif // GATE_H
