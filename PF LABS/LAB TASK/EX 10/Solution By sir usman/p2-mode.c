#include<stdio.h>
void find_mode(int arr[],int length){
    int freq,mode=0,m_freq=1;
    for(int i=0; i<length-1;i++){
        freq= 1;
        for(int j=i+1; j<length;j++){
            if(*(arr+i)==*(arr+j))
            freq++;
        }
        if(freq>m_freq){
        m_freq = freq;
        mode = *(arr+i);
        }
    
    }
    printf("Mode %d\n",mode);
    printf("Count %d\n",m_freq);
    

}
int main(int argc, char const *argv[])
{
    int arr[] = {2,2,15,6,7,8,15,15};
    int mode,length;
    length = sizeof(arr)/sizeof(int);
    find_mode(arr,length);    
    
    return 0;
}
