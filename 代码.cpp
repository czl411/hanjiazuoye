#include<stdio.h>
#include<string.h>
int zuanhuan(char s[])
{
if(strcmp(s,"��") == 0) return 0;
else if(strcmp(s,"һ") == 0) return 1;
else if(strcmp(s,"��") == 0) return 2;
else if(strcmp(s,"��") == 0) return 3;
else if(strcmp(s,"��") == 0) return 4;
else if(strcmp(s,"��") == 0) return 5;
else if(strcmp(s,"��") == 0) return 6;
else if(strcmp(s,"��") == 0) return 7;
else if(strcmp(s,"��") == 0) return 8;
else if(strcmp(s,"��") == 0) return 9;
else if(strcmp(s,"ʮ") == 0) return 10;
else return -1;
}
void yue1(int n)
{
int k=0;
if(n>=10){
k=n/10;
}
switch(k)
{
case 1:printf("ʮ");break;
case 2:printf("��ʮ");break;
case 3:printf("��ʮ");break;
case 4:printf("��ʮ");break;
case 5:printf("��ʮ");break;
case 6:printf("��ʮ");break;
case 7:printf("��ʮ");break;
case 8:printf("��ʮ");break;
case 9:printf("��ʮ");break;
}
}
void yue2(int n)
{
if(n==0){
printf("��"); 
}
else{
int k=0;
k=n%10;
switch(k)
{
case 0:break;
case 1:printf("һ");break;
case 2:printf("��");break;
case 3:printf("��");break;
case 4:printf("��");break;
case 5:printf("��");break;
case 6:printf("��");break;
case 7:printf("��");break;
case 8:printf("��");break;
case 9:printf("��");break;
}
}
}
int main()
{
char a[105],b[105],c[105],d[105],m[105],n[105],s[105],w[105];
scanf("%s %s %s %s",a,b,c,d);
int money = zuanhuan(d);
getchar();
while(1){
scanf("%s",m);
if(strcmp(m,"����") == 0) break;
scanf("%s %s",n,s);
if(strcmp(n,"����") == 0) money += zuanhuan(s);
if(strcmp(n,"����") == 0) money -= zuanhuan(s);
}
scanf("%s",w);
yue1(money);
yue2(money);
return 0;
}
