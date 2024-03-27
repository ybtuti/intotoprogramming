#include <stdio.h>
#include <stdlib.h>

/**int main(){
    int MyNumbers [6] ;
    int index;
    printf("Key in 6 elements");
    for (index = 0; index <6 ; index++){
        scanf("%d", MyNumbers);
    }
    printf("%d\n", MyNumbers[index]);
    return 0;
}
*/
int main()
{
    int firstelement [6];
    int i;
    int largest = 0;
    int mouse = 300;
    int sum = 0;
    printf("Key in six array elements");
    for(i=0;i<=5;i++){
        scanf("%d\n",&firstelement[i]);
        if(firstelement[i]>=largest){
            largest = firstelement[i];
        if(firstelement[i]<=mouse){
            mouse = firstelement[i];

        }
        }
    }
    printf("The first element is:%d\n",firstelement[0]);
    printf("The largest element is:%d\n",largest);
    printf("The smallest element is:%d\n",mouse);
    return 0;
}
