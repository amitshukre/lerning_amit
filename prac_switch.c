#include<stdio.h>
int main()
{
	int data,bit,result;

	char input;

INPUT: printf("Enter data:");
       scanf("%d",&data);
BIT:
       printf("Enter BIT:");
       scanf("%d",&bit);
       if(!((bit>=0)&&(bit<=31)))
       {
	       printf("please enter vaild bit postion");
	       goto BIT;
       }

  LOOP:
       printf("\n MENU \n");
       printf("t/T\t Test Bit\n");

       printf("s/S\t Set Bit\n");

       printf("c/C\t Clear Bit\n");
       printf("m/M\t Compliment Bit\n");

       printf("i/I\t Input again\n");

       printf("e/E\t EXIT\n");

       printf("Enter your choice:\n");
       scanf("\n%c",&input);

       switch(input)
       {
	       case 't':
	       case 'T':   result=((data>>bit)&1);
			   printf("result=%d\n",result);
			   goto LOOP;

	      
	      
	       case 's':
	       case 'S':   result=(data|(1<<bit));
			   printf("result=%d\n",result);
			   goto LOOP;




	       case 'c':
	       case 'C':   result=(data&~(1<<bit));
			   printf("result=%d\n",result);
			   goto LOOP;


	       case 'm':
	       case 'M':   result=(data ^(1<<bit));
			   printf("result=%d\n",result);
			   goto LOOP;

	       case 'i':
	       case 'I':  goto INPUT;

	       case 'e':
	       case 'E':return;
       }
}       




