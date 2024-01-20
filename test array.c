#include<stdio.h>
void Nhap(int a[], int n)//ham nhap mang
{
	int i;
    for( i=0; i<n ; i++)//vong lap for duyet phan tu trong mang tu 0 den n-1
    {
        //nhap du lieu vao mang
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[], int n)//ham xuat mang
{
    for(int i=0; i<n ; i++)//vong lap for duyet phan tu trong mang 0 den n-1
    {
        //hien thi cac phan tu trong mang
        printf("%d \t", a[i]);
    }
}
void ThemPhanTu(int a[], int n)//ham them phan tu
{
    int x;//khai bao vi tri muon them
    printf("\nNhap vi tri muon them:");
    scanf("%d", &x);
    int y;//khai bao gia tri muon them
    printf("\nNhap phan tu muon them:");
    scanf("%d", &y);
    if(x<=0)//Them vao dau mang
    {
        x=0;
    }else if(x>=n)//Them vao cuoi mang
    {
        x=n;
    }
    for(int i=n; i>x ; i--)//dich chuyen mang de tao o trong truoc khi them
    {
        a[i] = a[i-1];        
    }
    a[x]=y;// chen gia tri can them y tai x
    n++;// tang so phan tu cua mang
    printf("\nMang sau khi them la:\n");
    Xuat(a,n);//goi ham xuat mang    
}
int main()
{
    int a[100];// khai bao mang so nguyen co 100 o nho
    int n;//khai bao so nguyen n la so phan tu cua mang
    //Nhap du lieu cua n
    do{
        printf("Nhap so phan tu cua mang:");
        scanf("%d", &n);
        if(n<1 || n>100)
        {
            printf("Nhap lai:");
        }
    }while(n<1 || n>100);//dieu kien neu n<1 hoac n>100 yeu cau nhap lai
    
    Nhap(a, n);//goi ham nhap mang
    printf("\nCac phan tu trong mang la:\n");
    Xuat(a,n);// goi ham xuat mang
    ThemPhanTu(a,n);//goi ham them phan tu
}
