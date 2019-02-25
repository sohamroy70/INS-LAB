 #include<stdio.h>
 #include<string.h>
 #define N strlen(g)
 void crc();
 void xar();
 char g [20];
 char text [100];
 char code[100];
 int len;
 int main() 
 { 
	int i,flag=0;
	printf("\n Enter the MSG in binary form :\n");
	scanf("%s" , text);
	printf("\n Enter generator number :\n");
	scanf("%s",g);
	len=strlen(text);
	for (i=len;i<len+N-1;i++)
		{
			text[i]='0';
		}
		
	crc();
	for(i=len;i<len+N-1;i++)
		{
		text[i]= code [i-len];
		}
	printf("\nfinal code word & :%s\n",text);
	printf("\n enter tjhe code word:");
	scanf("%s",text);
	crc();
	for (i=0;i<strlen(code);i++)
		{
		if(code[i]=='1')
			{
			flag=1;
			break;
			}
		}
	if (flag==1)
		{
			printf ("\nError\n");
		}
	else 
		{ 
			printf("\n No Error\n");
		}
	return 0;

}
	void crc ( )
	{
		int i,j;
		for (i=0;i<N;i++)
			{ 
				code[i]=text[i];
			
			}
		do
			{ 
			if (code [0]=='1')
				{
				xar();
				}
				
		for(j=0;j<N-1 ;j++)
			{
			 code[j]=code[j+1];
			}
		code[j]=text[i];
		}while (i<=len+N-1);
	}
	void xar( )
	{
		int i;
		for (i=0;i<N ;i++)
			{
			if (code[i]==g[i])
			 { 
			  code[i]='0';
			 }
                         else 
{
code[i]='1';
}


}
	}
			
