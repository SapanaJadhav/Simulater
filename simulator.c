	#include<stdio.h>
        #include<math.h>
        #include<string.h>
int decimal(int num);

	int main()
	{
	FILE *fp;
	int i=0,k=0,stor=0,var1=0,new_var=0;
	char buff[33]={0},temp_buff[20][32];
	char ch,opcode[13],code[13];
	char buff1[32],op1[10],op2[9],reg[5],mem[100];
	fp=fopen("a.txt","r");
	 if(fp==NULL)
	 printf("Not Found\n");
	while(fscanf(fp,"%s",temp_buff[i++])!=EOF);    int k1=i,o=0;
         fp=fopen("a.txt","r");
	   if(fp==NULL)
             printf("File not exist\n");
// while(k1!=0)
 //     {
	i=0;
	fscanf(fp,"%s",buff);
         k1--;
	o=0;
	printf("\n%s",buff);
        for(i=0;i<16;i++)
	buff1[i]=buff[i];
	buff1[i]='\0';
        ch=buff1[0];
        for(i=1;i<=13;i++)
	opcode[o++]=buff1[i];
        opcode[o]='\0';
	stor=atoi(opcode);
	printf("\nchar=%d\t16 bit=%d\topcode=%d\n",ch,atoi(buff1),stor);
	
        k=0;
	for(i=16;i<24;i++)
	op1[k++]=buff[i];
	op1[k]='\0';
	printf("\nop1=%s",op1);
	k=0;
	for(i=24;i<32;i++)
	op2[k++]=buff[i];       
	op2[k]='\0';
	printf("\ndecimal=%s\t%d",op2,decimal(atoi(op2)));        //decimal value of opcode 2
	printf("\nnewline\n");
        var1=decimal(atoi(op2));
	printf("\ndecimal of opcode=%d\n",decimal(stor));
       switch(var1)
      {
         new_var++;
           case 1:          //movm
                                reg[new_var]=var1;
				break;
          case 2:          //ret
                              return 0;
                                break;
          case 3:           mem[new_var]=reg[0]+reg[1];
                               break;
         case 4:         mem[new_var]=reg[0]-reg[1];
                               break;
         case 5:           mem[new_var]=reg[0]*reg[1];
                               break;
        case 6:           mem[new_var]=reg[0]/reg[1];
                               break;
        case 7:         //read
                             printf("Enter Input Value...\n");
                             scanf("%d",&mem[var1]);
                             break;
       case 8:          //print
                            printf("Result is=%d",mem[var1]);
                            break;
      case 23:    mem[new_var]=reg[0];
                          break;
       }



	//}
}
int decimal(int num)
{
int num11=0,num3=0,m=1,count=0,cnt=0,res=0,num12,cnt1=10,num2;
num3=num;
printf("\nnum in fun=%d\n",num);
while(num!=0)
	{
          num12=(num%10);
          res+=pow(2,cnt)*num12;
          cnt++;
           num=num/10;
         }
return res;
}
	
