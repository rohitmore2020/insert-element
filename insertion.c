#include<stdio.h>
int main(){
    int a[100],n;
    printf("enter the array elements");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("enter the array a position %d",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("before updating\n");
    
    for (int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    int pos;
    printf("enter the position of element to where you want to insert\n");
    scanf("%d",&pos);

    int num;
    printf("enter the number to insert\n");
    scanf("%d",&num);
    
    int temp=a[pos-1];
    for(int j=n;j>pos-1;j--){
        a[j]=a[j-1];
    }
    a[pos-1]=num;
    printf("after updating\n");
    for (int i=0;i<n+1;i++){
        printf("%d\t",a[i]);
    }
return 0;
}
