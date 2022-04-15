#include<iostream.h>
class L
{
	private:
	char ht[30];
	int ns;
	public:
	void nhap()
	{
		fflush(stdin);
		cout<<"Nhap ho ten :";
		cin.getline(ht,30);
		cout<<"Nhap nam sinh :";
		cin>>ns;
	}
	void xuat()
	{
		cout<<"Ho va ten:"<<ht;
		cout<<"Nam sinh:"<<ns;
	}
};
class TS:public L
{
	private:
	int sbd;
	int dt,dl,dh;
	public:
	void nhap()
	{
		L:nhap();
		cout<<"Nhap so bao danh:";
		cin>>sbd;
		cout<<"Nhap diem toan :";
		cin>>dt;
	 	cout<<"Nhap diem Ly :";
		cin>>dl;
		cout<<"Nhap diem hoa :";
		cin>>dh;
	}
	void xuat()
	{
		L::xuat()
		cout<<"so bao danh:"<<sbd<<endl;
		cout<<"diem toan:"<<dt<<endl;
		cout<<"diem ly :"<<dl<<endl;
		cout<<"diem hoa:"<<dh<<endl;
		cout<<endl; 
	}
	int *dtong()
	{
		dtong=dt+dl+dh;
		return dtong>5; 
	} 
};
int main()
{
	int s;
	cout<<"---diem tong 3 mon >5---"<<endl;
} 