#include<iostream>
using namespace std;
#define size 200
 
int A[size],C[size]={};
int n,k ;
void xuatMang(int A[],int n)
{
	for(int i=1;i<=k;i++)
		cout<< A[i] ;
	cout<<endl;
}
void chinhHop(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(C[j]==0)
		{
			A[i]=j;  // thu chon A[i] bang j
			if(i==k)
			{
        
				xuatMang(A,k);
			}
			else
			{
				C[j]=1; // danh dau phan tu da duyet qua
				chinhHop(i+1);
				C[j]=0; // bo danh dau
			}
		}
	}
}


int main()
{
	cin >> n >> k ;
	chinhHop(1);

	system("pause");
	return 0;
}