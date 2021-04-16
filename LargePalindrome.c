#include <stdio.h>
#include <string.h>

void fun(){
    char x[501], y[501], p[501], q[501],z[502], rz[502];
    scanf("%s %s", x, y);
    int l1=strlen(x);
    int l2=strlen(y);
    if(l1>l2){
        int n=l1, i=0;
        while(n--) p[i++]=x[n];
        n=l2, i=0;
        while(n--) q[i++]=y[n];
    }
    else{
        int n=l1, i=0;
        while(n--) q[i++]=x[n];
        n=l2, i=0;
        while(n--) p[i++]=y[n];
    }
    
    l1 = strlen(p);
    l2 = strlen(q);
    int c=0,i=0,j;
    for(j=0;j<l2;j++){
        int sum = (p[j]-'0')+(q[j]-'0')+c;
        rz[i]=((sum%10)+'0');
        i++;
        c=sum/10;
    }
    for(j=l2;j<l1;j++){
        int sum = (p[j]-'0')+c;
        rz[i]=((sum%10)+'0');
        i++;
        c=sum/10;
    }
    if(c) rz[i]= c+'0';
    
    int l=strlen(rz),s=1;
    l--;
    for(i=0;i<=l;i++,l--){
    	if(rz[i]!=rz[l]) s=0;
    }
    if(s==1) printf("YES\n");
    else printf("NO\n");
}

int main()
{
   int x;
   scanf("%d", &x);
   while(x--) fun();
   return 0;
}
