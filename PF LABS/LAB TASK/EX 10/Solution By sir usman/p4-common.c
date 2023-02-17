#include <stdio.h>
int is_exist(int elem,int *p,int size){
    for (int i=0; i<size; i++){
        if (elem == *p)
        return 1;
        *p++;
    }

    return 0;

}
int common(int *p1,int size1,int *p2,int size2,int *p3,int size3){
    int actual_size=0;

    int *p3_dup = p3;
    for (int i=0; i<size1; i++){
        int *p2_dup = p2;

        for (int j=0; j<size2; j++){
           

            if (*p1 == *p2_dup){
                if(!is_exist(*p1,p3_dup,size3))
                {
                *p3 = *p1;
                *p3++;
                actual_size++;
                }
            }


            p2_dup++;

        }

        p1++;
    }

    return actual_size;

}
int main()
{
    
    int arr1[] = {2,5,7,10,1,4,34};
    int arr2[] = {1,2,4,90,7};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    int size3 = size1 > size2 ? size1: size2;
    int arr3[size3];
    printf("%d------",sizeof(arr3));

    int actual_size = common(arr1,size1,arr2,size2,arr3,size3);
    // cout<<size3<<endl;
    printf("Common Elements in both the sets are:\n");
    for (int i =0; i<actual_size; i++){
        printf("%d\t",arr3[i]);
    }
    printf("\n");


return 0;
}