#include <stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
       switch(iNo)
     { case 1:
        printf("One \n");
        break;
        case 2:
        printf("Two \n");
        break;
        case 3:
        printf("Three \n");
        break;
        case 4:
        printf("Four \n");
        break;
        case 5:
        printf("Five \n");
        break;
        case 6:
        printf("Six \n");
        break;
        case 7:
        printf("Seven \n");
        break;
        case 8:
        printf("Eight \n");
        break;
        case 9:
        printf("Nine \n");
        break;
        case 10:
        printf("Ten \n");
        break;

        default:
        printf("Invalid  \n");
        break;

     }
}
//  tOime complexity O(N).
int main()
{
    int iValue=0;
    printf("Enter the number : (from 1 to 10) \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}