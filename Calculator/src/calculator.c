#include "calculator.h"
#include "operations.h"
int calculator(int operation,int num1,int num2)
{
    int answer;
    char* erro = "operation not specified";
    fptr calc = NULL;
    if ((operation < 0) || (operation > 1))
        return erro;
    else
    {
        switch (operation)
        {
        case 0:
            calc = add;
            break;
        case 1:
            calc = subtract;
            break;
        }
        answer = calc(num1,num2);
        return answer;
    }
}
