
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int markscore;
    printf("Enter markscore: \n");
    scanf("%d", &markscore);

    if (markscore >= 0 && markscore <= 39) {
        printf("Grade E \n");
    }
    else if (markscore >= 40 && markscore <= 49) {
        printf("Grade D \n");
    }
    else if (markscore >= 50 && markscore <= 59) {
        printf("Grade C \n");
    }
    else if (markscore >= 60 && markscore <= 69) {
        printf("Grade B \n");
    }
    else if (markscore >= 70 && markscore <= 100) {
        printf("Grade A \n");
    }
    else {
        printf("Out of bounds \n");
    }

    return 0;
}
