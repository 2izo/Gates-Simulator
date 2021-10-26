#include "gate.h"

void gate::setinput1(bool x, string name1)
{
    input1->value = x; input1->name = name1; input1->flag = 1;
}

void gate::setinput2(bool y, string name2)
{
   input2->value = y; input2->name = name2; input2->flag = 1;
}

void gate::setad1(node *ptr)
{
    input1 = ptr;
}

void gate::setad2(node *ptr)
{
    input2 = ptr;
}

void gate::setad3(node *ptr)
{
    output = ptr;
}

bool gate::getinput1value()
{
    return input1->value;
}

bool gate::getinput2value()
{
    return input2->value;
}

bool gate::getoutputvalue()
{
    return output->value;
}

string gate::getinput1name()
{
    return input1->name;
}

string gate::getinput2name()
{
    return input2->name;
}

string gate::getoutputname()
{
    return output->name;
}

int gate::getinput1flag()
{
    return input1->flag;
}
int gate::getinput2flag()
{
    return input2->flag;
}
void gate::setnames(string name1, string name2, string name3)
{
    input1->name = name1;
    input2->name = name2;
    output->name = name3;
}

node *(gate::ipt1)()
{
    return input1;
}
node *(gate::ipt2)()
{
    return input2;
}
node *(gate::opt)()
{
    return output;
}
