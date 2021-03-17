#include<stdio.h>

int main(){
	int n,i,l,cont,c;
	cont=0;
	scanf("%d",&n);	
	for(i=1;i<=n;i++){
		scanf("%d%d",&l,&c);
		if(l>c){
			cont= cont+c;
		}	
	}
	printf("%d",cont);
}
