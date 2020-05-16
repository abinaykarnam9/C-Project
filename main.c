#include<stdio.h>
#include<conio.h>
int  main()
{
int a,b,c,d,e,j,l,p,t,r,v,y,f;
FILE *fp;
char q[30];
printf("Name : \t");
scanf("%s",&q);
printf("Year of Passing 12th : \t");
scanf("%d",&y);
fflush(stdin);
printf("Age : \t");
scanf("%d",&v);
printf("Board\n");
printf("1.State Board\t 2.CBSE\t 3.ICSE\t 4.other\n");
scanf("%d",&e);
printf("Marks");
printf("\n\t Physics: \t");
scanf("%d",&a);
fflush(stdin);
printf("\n\t Chemistry: \t");
scanf("%d",&b);
printf("\n\t Mathematics: \t");
scanf("%d",&c);
printf("\n\t English: \t");
scanf("%d",&d);
printf("\n\t Sanskrit: \t");
scanf("%d",&f);
t=a+b+c+d+f;
printf("\n Marks");
printf("\n\t JEE: \t");
scanf("%d",&j);
printf("\n\t LPUNEST: \t");
scanf("%d",&l);
fp=fopen("scholarship.txt","w");
if(y>2010&&v<26)
{
	fprintf(fp,"\n Name: \t%s",q);
	fprintf(fp,"\n Year Of Passing 12th: \t%d",y);
	fprintf(fp,"\n Age: \t%d",v);
	if(e==1)
	fputs("\n Board: \tState Board\n",fp);
	else if(e==2)
	fputs("\n Board: \tCBSE Board\n",fp);
	else if(e==3)
	fputs("\n Board: \tICSE Board\n",fp);
	else if(e==4)
	fputs("\n Board: \t other",fp);
	fputs("\n Marks\n",fp);
	fprintf(fp,"\n \t%d/1000",t);
	fprintf(fp,"\n JEE: \t%d/360",j);
	fprintf(fp,"\n LPUNEST: \t%d/440\n\n",l);
	if(t>980||l>300||t>300&&j>300)
	fputs("\n Scholarship Provided: \t100000/year\n",fp);
	else if(l>200 ||t>900)
	fputs("\nScholarship Provided: \t80000/year\n",fp);
	else if(l>150 || t>750)
	fputs("\n Scholarship Provided: \t60000/year\n",fp);
	else if(l<150 || t<600)
	fputs("\n student not eligible for scholarship \n",fp);
}
else
{
	fputs("SORRY,Candiate Not Viable For Admission. \n",fp);
}
fclose(fp);
getch();
}
