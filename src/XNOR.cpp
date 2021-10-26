#include "XNOR.h"

    void XNOR::GetOutput()
    {
        if (input1->flag == 1 && input2->flag == 1)
        {
            output->value = input1->value == input2->value;
            output->flag = 1;
        }
    }
