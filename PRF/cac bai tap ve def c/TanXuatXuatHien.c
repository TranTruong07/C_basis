#include<stdio.h>
#include<math.h>
int main(){
	int n,a[100],b[100],c[100],i,j,count=0,check;
	printf("nhap n ");	scanf("%d",&n);
	for (i=0;i<n;i++)	scanf("%d",&a[i]);
	for (i=0;i<n;i++){
			if (count==0){
					b[count]=a[i];
					c[count]=1;
					count++;
			}
			else{
				check=1;
				for (j=0;j<count;j++)
					if (b[j]==a[i]){
						c[j]++;
						check=0;
					}
				if (check==1){
					b[count]=a[i];
					c[count]=1;
					count++;
				}
			}
		
	}
	for (j=0;j<count;j++)
		printf("%d %d\n",b[j],c[j]);
}
