#include<stdio.h>
int main()
{
int pack_height,  pack_width ,  pack_length ,  box_height ,  box_width ,  box_length;
	printf("Enter height of box \n");
	scanf("%d",&box_height);
	printf("Enter length of box \n");
	scanf("%d",&box_length );
	printf("Enter width of box \n");
	scanf("%d",&box_width);
	printf("Enter height of pack \n");
	scanf("%d",&pack_height);
	printf("Enter length of pack \n");
	scanf("%d",&pack_length );
	printf("Enter width of pack \n");
	scanf("%d",&pack_width);
	char a = 0; 
	if((box_height*box_length*box_width)==(pack_height*pack_length*pack_width))
		{
			a='y';
		
		}	
    	else	
		{
			a='n'; 
		
		}
			printf(" %c \n",a);	
	return 0;
}
