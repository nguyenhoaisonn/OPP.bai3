#include<iostream.h>
class SP 
{
	private:
	int msp;;
	char tsp[30];
	int nsp; 
	public:
	void nhap()
	{
		fflush(stdin);
		cout<<"Nhap ten san pham :";
		cin.getline(tsp,30);
		cout<<"Nhap ma san pham :";
		cin>>msp;
		cout<<"Nhap nam san pham:";
		cin>>nsp;
	}
	void xuat()
	{
		cout<<"ten san pham:"<<tsp;
		cout<<"ma san pham:"<<msp;
		cout<<"nam san pham:"<<nsp;
	}
};
class TV:public SP 
{
	private:
	int d;
	int r;
	public:
	void nhap()
	{
		SP:nhap();
		cout<<"Nhap chieu dai:";
		cin>>d;
		cout<<"Nhap chieu rong :";
		cin>>r;
	}
	void xuat()
	{
		SP::xuat(); 
		cout<<"chieu dai:"<<d<<endl;
		cout<<"chieu rong:"<<r<<endl;
		cout<<endl; 
	}
	int diemtich()
	{
		return d*r; 
	} 
	void tangdan (int dientich[], int n)
	{
		for(int i=0;i<n;i++)
			for(int j=0;j<=i;j++)
			{
				if(dientich[j]>dientich[i])
				{
					dientich[i]=dientich[i]+dientich[j];
					dientich[j]=dientich[i]-dientich[j];
					dientich[i]=dientich[i]-dientich[j]; 
				}
			} 
			cout<<"diem tich tang dan là:"<<endl;
	} 
};
int main()
{
	int dientich[50];
	int n;
	nhap(dientich,n);
	xuat(dientich,n);
	return 0; 
} 