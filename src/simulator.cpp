#include "simulator.h"


void simulator::sim()
{
    match();
    while(1)
    {
        int flag = 1;
        for(int i = 0; i < last; i ++)
        {
            if(x[i]->getinput1flag() == 1 && x[i]->getinput2flag() == 1)
            {
                x[i]->GetOutput();
            }
            else
            {
                flag = 0;
            }
        }
        if(flag == 1)
        {
            break;
        }
    }
}
void simulator::load(string path)
{
    ifstream f1;
    f1.open(path);
    string s1, s2 ,s3 ,s4;

    while(!f1.eof())
    {
        f1>>s1;
        if (s1 == "AND" || s1 == "and")
        {
            f1>>s2>>s3>>s4;
            ANd(s2, s3 ,s4);
        }
        if(s1 == "sim" || s1 == "SIM")
        {
            sim();
        }
        if(s1 == "or" || s1 == "OR")
        {
            f1>>s2>>s3>>s4;
            Or(s2,s3,s4);
        }
        if(s1 == "xor" || s1 == "XOR")
        {
            f1>>s2>>s3>>s4;
            XOr(s2,s3,s4);
        }
        if(s1 == "NAND" || s1 == "nand")
        {
            f1>>s2>>s3>>s4;
            NANd(s2,s3,s4);
        }
        if(s1 == "xnor" || s1 == "XNOR")
        {
            f1>>s2>>s3>>s4;
            XNOr(s2,s3,s4);
        }
        if(s1 == "nor" || s1 == "NOR")
        {
            f1>>s2>>s3>>s4;
            NOr(s2,s3,s4);
        }
        if(s1 == "set" || s1 == "SET")
        {
            f1>>s2>>s3;
            SEt(s2, s3);
        }
        if(s1 == "out" || s1 == "OUT")
        {
            f1>>s2;
            out(s2);
        }

    }
    f1.close();

}
void simulator::ANd(string s1, string s2,string s3)
{
    x[last] = new AND[1];
    x[last]->setnames(s1, s2, s3);
    last++;
}
void simulator::Or(string s1, string s2,string s3)
{
    x[last] = new OR[1];
    x[last]->setnames(s1,s2,s3);
    last++;
}
void simulator::NOr(string s1, string s2,string s3)
{
    x[last] = new NOR[1];
    x[last]->setnames(s1,s2,s3);
    last++;
}
void simulator::XOr(string s1, string s2,string s3)
{
    x[last] = new XOR[1];
    x[last]->setnames(s1,s2,s3);
    last++;
}
void simulator::XNOr(string s1, string s2,string s3)
{
    x[last] = new XNOR[1];
    x[last]->setnames(s1,s2,s3);
    last++;
}
void simulator::NANd(string s1, string s2,string s3)
{
    x[last] = new NAND[1];
    x[last]->setnames(s1,s2,s3);
    last++;
}
void simulator::SEt(string s2, string s3)
{
    int temp;
    stringstream geek(s3);
    geek>>temp;
    int i = FINd(s2);
    if(x[i]->getinput1name() == s2)
    {
        x[i]->setinput1(temp, s2);
    }
    else if(x[i]->getinput2name() == s2)
    {
        x[i]->setinput2(temp, s2);
    }
}

int simulator::FINd(string name)
{
    for(int i = 0; i < last; i++)
    {
        if(x[i]->getinput1name() == name || x[i]->getinput2name() == name || x[i]->getoutputname() == name)
        {
            return i;
        }
    }
    return -1;
}

void simulator::out(string s)
{
    int i = FINd(s);
    if(i == -1)
    {
        cout<<"a7a ezai";
    }
    if(x[i]->getinput1name() == s)
    {
        cout<<s<<" value is "<<x[i]->getinput1value()<<endl;
    }
    else if(x[i]->getinput2name() == s)
    {
        cout<<s<<" value is "<<x[i]->getinput2value()<<endl;
    }
    else
    {
        cout<<s<<" value is "<<x[i]->getoutputvalue()<<endl;
    }
}

void simulator::match()
{
    int temp;
    for(int i = last - 1; i >= 0; i--)
    {
        temp = FINd(x[i]->getinput1name());
        if(i != temp && temp != -1)
        {
            if(x[i]->getinput1name() == x[temp]->getinput1name())
            {
                x[i]->setad1(x[temp]->ipt1());
            }
            if(x[i]->getinput1name() == x[temp]->getinput2name())
            {
                x[i]->setad1(x[temp]->ipt2());
            }
            if(x[i]->getinput1name() == x[temp]->getoutputname())
            {
                x[i]->setad1(x[temp]->opt());
            }
        }


        temp = FINd(x[i]->getinput2name());
        if(i != temp && temp != -1)
        {
            if(x[i]->getinput2name() == x[temp]->getinput1name())
            {
                x[i]->setad2(x[temp]->ipt1());
            }
            if(x[i]->getinput2name() == x[temp]->getinput2name())
            {
                x[i]->setad2(x[temp]->ipt2());
            }
            if(x[i]->getinput2name() == x[temp]->getoutputname())
            {
                x[i]->setad2(x[temp]->opt());
            }
        }


        temp = FINd(x[i]->getoutputname());
        if(i != temp && temp != -1)
        {
            if(x[i]->getoutputname() == x[temp]->getinput1name())
            {
                x[i]->setad3(x[temp]->ipt1());
            }
            if(x[i]->getoutputname() == x[temp]->getinput2name())
            {
                x[i]->setad3(x[temp]->ipt2());
            }
        }

    }
}
