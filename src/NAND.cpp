#include "NAND.h"

    void NAND::GetOutput()
    {
        if (input1->flag == 1 && input2->flag == 1)
        {
            if(input1->value + input2->value == 2)
            {
                output->value = 0;
                output->flag = 1;
                return;
            }
            output->value = 1;
            output->flag = 1;
        }

    }
