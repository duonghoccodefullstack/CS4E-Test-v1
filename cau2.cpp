#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class VeMayBay {
  	private:
    string tenchuyen;
    int ngaybay, giave;
  public:
    void nhap();
    void xuat();
    int get_giave() const {
      return giave;
    }
 
};

class Nguoi {
  protected:
    string hoten, gioitinh;
    int tuoi;
	public:
    void nhap();
    void xuat();
  
};

class HanhKhach : public Nguoi {
  private:
    int soluong;
    VeMayBay *ve = new VeMayBay;
  public:
    void nhap();
    void xuat();
    int TongTien() const {
    
      return (ve->get_giave())*soluong;
    }
  
};

void VeMayBay::nhap() {
  cin.ignore();
  cout<<"Nhap ten chuyen: "; getline(cin, tenchuyen);
  cout<<"Nhap ngay bay: "; cin>>ngaybay;
  cout<<"Nhap gia ve: "; cin>>giave;
   
}

void Nguoi::nhap() {
  cout<<"Nhap ho ten: "; getline(cin, hoten);
  cout<<"Nhap gioi tinh: "; getline(cin, gioitinh);
  cout<<"Nhap tuoi: "; cin>>tuoi;
}

void HanhKhach::nhap() {
   
  Nguoi::nhap();
  ve->nhap();
  cout<<"Nhap so luong: "; cin>>soluong;
}

void HanhKhach::xuat() {
  cout<<hoten<<"\t\t"<<gioitinh<<"\t\t\t\t"<<tuoi<<"\t\t\t"<<TongTien()<<endl;
}

int main() {
  int n;
  cout<<"Nhap so hanh khach: "; cin>>n;
  
  HanhKhach hk[n];
  cin.ignore();
  for(int i=0;i<n;i++)
  {
    cout<<"Nhap thong tin hanh khach "<< i+1<< ": "<<endl;
    hk[i].nhap();

    cin.ignore();
  }
	

  cout<<"Danh sach hanh khach: "<<endl;
  cout<<"Ho ten"<<"\t\t\t"<<"Gioi tinh"<<"\t\t\t"<<"Tuoi"<<"\t\t\t"<<"Tong tien"<<endl;

 

 	
 	
  for(int i=0;i<n;i++)
  {
    hk[i].xuat();
  }
  return 0 ; }