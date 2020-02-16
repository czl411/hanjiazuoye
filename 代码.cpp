#include<stdio.h>
#include<string.h>
int zuanhuan(char s[])
{
if(strcmp(s,"零") == 0) return 0;
else if(strcmp(s,"一") == 0) return 1;
else if(strcmp(s,"二") == 0) return 2;
else if(strcmp(s,"三") == 0) return 3;
else if(strcmp(s,"四") == 0) return 4;
else if(strcmp(s,"五") == 0) return 5;
else if(strcmp(s,"六") == 0) return 6;
else if(strcmp(s,"七") == 0) return 7;
else if(strcmp(s,"八") == 0) return 8;
else if(strcmp(s,"九") == 0) return 9;
else if(strcmp(s,"十") == 0) return 10;
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
case 1:printf("十");break;
case 2:printf("二十");break;
case 3:printf("三十");break;
case 4:printf("四十");break;
case 5:printf("五十");break;
case 6:printf("六十");break;
case 7:printf("七十");break;
case 8:printf("八十");break;
case 9:printf("九十");break;
}
}
void yue2(int n)
{
if(n==0){
printf("零"); 
}
else{
int k=0;
k=n%10;
switch(k)
{
case 0:break;
case 1:printf("一");break;
case 2:printf("二");break;
case 3:printf("三");break;
case 4:printf("四");break;
case 5:printf("五");break;
case 6:printf("六");break;
case 7:printf("七");break;
case 8:printf("八");break;
case 9:printf("九");break;
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
if(strcmp(m,"看看") == 0) break;
scanf("%s %s",n,s);
if(strcmp(n,"增加") == 0) money += zuanhuan(s);
if(strcmp(n,"减少") == 0) money -= zuanhuan(s);
}
scanf("%s",w);
yue1(money);
yue2(money);
return 0;
}
