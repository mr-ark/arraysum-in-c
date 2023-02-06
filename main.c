include <stdio.h> /*syntax*/
#include <stdlib.h>/*syntax*/
/*main code:*/
int main(void) {
    int sum=0,l,i,a[50];
    printf("Enter array limit:\n");
    scanf("%d",&l);
	printf ("Enter Values:\n");
    for ( i = 0; i < l; i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Total of Values is:\n");
        printf("%d ",sum);
	return EXIT_SUCCESS;
}
