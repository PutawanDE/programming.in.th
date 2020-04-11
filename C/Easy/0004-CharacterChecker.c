#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
char data[10001];

scanf("%s",data);

int n = strlen(data);
int L=0;
int H=0;

for(int i=0;i<=n-2;i++){

if(islower(data[i])) L++;
if(isupper(data[i])) H++;	
}

if(L>0&&H==0) printf("All Small Letter");
if(H>0&&L==0) printf("All Capital Letter");
if(H!=0&&L!=0) printf("Mix");
}