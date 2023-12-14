#include<stdio.h>
void main(){
    int size1,size2;
    scanf("%d",&size1);
    scanf("%d",&size2);
    int arr[size1];
    int a[size2];
    int len=0,len1=0;int count=0;
    for(int i=0;i<size1;i++){
        scanf("%d",&arr[i]);
        len++;

    }
    for(int i=0;i<size2;i++){
        scanf("%d",&a[i]);
        len1++;
    }
    int k=0;
    
    for(int i=0;i<len;i++){
        for(int j=0;j<len1;j++){
            if(arr[i]==a[j]){
count++;
break;
            }
        }}
int arrr[count];
for(int i=0;i<len;i++){
        for(int j=0;j<len1;j++){
            if(arr[i]==a[j]){
                arrr[k]=a[j];
                k++;
                break;
            }}}
            for(int i=0;i<count;i++){
                printf("%d",arrr[i]);
            }
            for(int i=0;i<count-1;i++){
                if(arrr[i]==arrr[i+1]){
                    arrr[i+1]=0;
                }
            }
            for(int i=0;i<count;i++){
                if(arrr[i]!=0){
                    printf("\nFinal:");
                    printf("%d",arrr[i]);
                }
            }
    
}