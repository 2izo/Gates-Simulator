#include "OR.h"

    void OR::GetOutput()
    {
       if (input1->flag == 1 && input2->flag == 1)
       {
            if(getinput1value() < getinput2value())
            {
                output->value = input2->value;
                output->flag = 1;
                return;
            }
            output->value = input1->value;
            output->flag = 1;
        }

    }
