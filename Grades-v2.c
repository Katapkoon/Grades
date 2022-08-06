#include <stdio.h>
#include <string.h>
int main()
{
    int score;
    scanf("%d",&score);
    char grade[10];
    char gradeA[10] = "A";
    char gradeB_plus[10] = "B+";
    char gradeB[10] = "B";
    char gradeC_plus[10] = "C+";
    char gradeC[10] = "C";
    char gradeD_plus[10] = "D+";
    char gradeD[10] = "D";
    char gradeF[10] = "F";
    switch (score / 5)
    {
        case 20:     
        case 19: 
        case 18: 
            strcpy(grade, gradeA);   
            printf("%s",grade);
            break;
        case 17:
            strcpy(grade, gradeB_plus);
            printf("%s",grade);
            break;
        case 16:
            strcpy(grade, gradeB);
            printf("%s",grade);
            break;
        case 15:
            strcpy(grade, gradeC_plus);
            printf("%s",grade);
            break;
        case 14:
            strcpy(grade, gradeC);
            printf("%s",grade);
            break;
        case 13:
            strcpy(grade, gradeD_plus);
            printf("%s",grade);
            break;
        case 12:
            strcpy(grade, gradeD);
            printf("%s",grade);
            break;
        default:
            strcpy(grade, gradeF);
            printf("%s",grade);
    }
    return 0;
}