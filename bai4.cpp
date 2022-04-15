#include<iostream.h>
#include<iomanip.h>
class Mayin
{
	private:
	int sh;
	int sl;
	public:
	void nhap()
	{
		cout<<"Nhap so hieu :";
		cin>>sh;
		cout<<"Nhap so luong :";
		cin>>sl;
	}
	void xuat()
	{
		cout<<setw(30)<<sh<<setw(15)<<sl;
	}
};
void Tieude1()
{
	cout<<setw(30)<<"sohieu"<<setw(15)<<"soluong"<<setw(10)<<"dpi"<<endl;
}
class Laser:public virtual Mayin
{
	private:
	int dpi;
	public:
	void nhap()
	{
		cout<<"Nhap thong tin may in laser :";
		Mayin::nhap();
		cout<<"Nhap dpi:";
		cin>>dpi;
		cout<<endl;
	}
	void xuat()
		{
		cout<<"Thong tin may laser:";
		Tieude1();
		Mayin::xuat();
		cout<<setw(10)<<dpi<<endl;
	}
};
void Tieude2()
{
	cout<<setw(30)<<"sohieu"<<setw(15)<<"soluong"<<setw(12)<<"Bangmau"<<endl;
}
class Mau:public virtual  Mayin
{
	private:
	int bangmau;
	public:
	void nhap()
	{
		cout<<"Nhap thong tin may in mau :";
		Mayin::nhap();
		cout<<"Nhap bangmau:";
		cin>>bangmau;
		cout<<endl;
	}
void xuat()
	{
		cout<<"Nhap thong tin may in mau:";
		Tieude2();
		Mayin::xuat();
		cout<<setw(12)<<bangmau<<endl;
	}
};
class LaserMau :  public Laser , public Mau
{
	public:
	void nhap()
	{
		Laser::nhap();
		Mau::nhap();
	}
	void xuat()
	{
		Laser::xuat();
		Mau::xuat();
	}
};
int main()
{
	LaserMau a;
	a.nhap();
	a.xuat();
}