#include<stdio.h>
int main(){
	int i,j,a[3][3],b[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter elements in a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
    }
    for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		    printf("%d ",a[i][j]);
		}
        printf("\n");
    }
printf("After transposing:=>\n");

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
		}
        printf("\n");
    }
    return 0;
}
		