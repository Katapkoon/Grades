#include <stdio.h>
#include <string.h>
int main()
{
    float score;
    scanf("%f",&score);
    if(score >= 90)
    {
        char grade[10] = "A";
        printf("%s", grade);
    }
    else if(score >= 85)
    {
        char grade[10]  = "B+";
        printf("%s", grade);   
    }
    else if(score >= 80)
    {
        char grade[10]  = "B";
        printf("%s", grade);   
    }
    else if(score >= 75)
    {
        char grade[10]  = "C+";
        printf("%s", grade);   
    }
    else if(score >= 70)
    {
        char grade[10]  = "C";
        printf("%s", grade);   
    }
    else if(score >= 65)
    {
        char grade[10]  = "D+";
        printf("%s", grade);   
    }
    else if(score >= 60)
    {
        char grade[10]  = "D";
        printf("%s", grade);   
    }
    else
    {
        char grade[10]  = "F";
        printf("%s", grade);  
    }
    return 0;
}