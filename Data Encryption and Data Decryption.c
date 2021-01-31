#include<stdio.h>
#include<string.h>
#include<math.h>
void main() {
    char a[]={"0ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int n,i,j,s,n2,k1,p,q,d,m1,e1,l5,z,p2[30],s1,c[30];
    unsigned long int l3,m,l4,k2;
	double l2,l1,l6;
	float e,l;
	char p1[30];
    printf("enter two prime numbers p and q\n");
	scanf("%d %d",&p,&q);
	do {
	    n=p*q;
		if(n<26) { 
			printf("\n n value is not large enough.\nplease select p, q value such that p*q is greater than 26");
			scanf("%d %d",&p,&q);
		}
	} while(n<26);
	z=((p-1)*(q-1));
	printf("enter the value of d:\n");
	scanf("%d",&d);
	for(j=1;j<z;j++) {
	    if((j*d)%z==1)
	     break;
	}
	e=j;
	printf("%d %d %f\n",n,z,e);
	printf("ENCRYPTION-CIPHERTEXT");
	printf("enter the plain text\n");
	scanf("%s",p1);
	for(i=0;i<strlen(p1);i++) {
		for(j=1;j<strlen(a);j++) {
			if(a[j]==p1[i]) {
				s=j;
				break;
			} 
			else
			 continue;
		}
		printf("%d",s);
		e1=(int)e;
		l1=pow(((double)s),((double)e1));
		k2=fmod(l1,(double)n);
		printf("\n%lu\n",k2);
		c[i]=(int)k2;
		printf("cipher:%d\n",c[i]);
	}
	printf("\n");
	for(i=0;i<strlen(p1);i++) {
		l2=(pow(((double)c[i]),((double)d)));
		m=fmod(l2,(double)n);
		m1=(int)m;
		printf("%c\n",a[m1]);
	}
	getch();
}

