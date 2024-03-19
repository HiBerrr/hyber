//
//  lop.cpp
//  sv+lop+truong
//
//  Created by Hyber on 06/03/2024.
//

#include "lop.hpp"
lop::lop()
{
    this->sl=3;
    this->malop=0;
    this->dssv=NULL;
    this->tenlop="";
}
void lop::nhapdshs()
{
    cout<<"Nhap so luong hoc sinh: ";
    cin>>this->sl;
    cout<<endl;
    cout<<"Nhap ma lop: ";
    cin>>this->malop;
    cout<<endl;
    cin.ignore();
    cout<<"Nhap ten lop: ";
    getline(cin, this->tenlop);
    cout<<endl;
    this->dssv = new sv[this->sl];
    for(int i=0; i<sl; i++)
    {
        cout<<"Nhap sinh vien thu "<<i+1<<": "<<endl;
        dssv[i].nhap();
    }
    cout<<endl;
}
void lop::xuatdshs()const
{
    for(int i=0; i<this->sl; i++)
        dssv[i].xuat();
}

lop::~lop()
{
    if(this->sl>0)
        delete[] this->dssv;
}

void lop::xuatdssvtopN() {
    sv a;
    for(int i=0; i<sl-1; i++)
    {
        for(int j=i+1; j<sl; j++)
            if(dssv[i].gettongdiem()>dssv[j].gettongdiem())
            {
                a=dssv[i];
                dssv[i]=dssv[j];
                dssv[j]=a;
            }
    }
}

void lop::sapxep(string a, int b) {
    sv temp;
    while(true)
        if(a == "D" && b==0)
        {
            for(int i=0; i<this->sl-1; i++)
                for(int j=i+1; j<this->sl; j++)
                {
                    if(dssv[i].gettongdiem()<dssv[j].gettongdiem())
                    {
                        dssv[i] = temp;
                        dssv[i] = dssv[j];
                        dssv[j] = temp;
                    }
                }
            cout<<"Xuat DSSV theo diem giam dan"<<endl;
            for(int i=0; i<this->sl; i++)
                dssv[i].xuat();
            break;
        }
        else if(a == "D" && b==1)
        {
            for(int i=0; i<this->sl-1; i++)
                for(int j=i+1; j<this->sl; j++)
                {
                    if(dssv[i].gettongdiem()>dssv[j].gettongdiem())
                    {
                        dssv[i] = temp;
                        dssv[i] = dssv[j];
                        dssv[j] = temp;
                    }
                }
            cout<<"Xuat DSSV theo diem tang dan"<<endl;
            for(int i=0; i<this->sl; i++)
                dssv[i].xuat();
            break;
        }
        else if(a == "M" && b==0)
        {
            for(int i=0; i<this->sl-1; i++)
                for(int j=i+1; j<this->sl; j++)
                {
                    if(dssv[i].getmssv()<dssv[j].getmssv())
                    {
                        dssv[i] = temp;
                        dssv[i] = dssv[j];
                        dssv[j] = temp;
                    }
                }
            cout<<"Xuat DSSV theo mssv giam dan"<<endl;
            for(int i=0; i<this->sl; i++)
                dssv[i].xuat();
            break;
        }
        else if(a == "M" && b==1)
        {
            for(int i=0; i<this->sl-1; i++)
                for(int j=i+1; j<this->sl; j++)
                {
                    if(dssv[i].getmssv()>dssv[j].getmssv())
                    {
                        dssv[i] = temp;
                        dssv[i] = dssv[j];
                        dssv[j] = temp;
                    }
                }
            cout<<"Xuat DSSV theo diem tang dan"<<endl;
            for(int i=0; i<this->sl; i++)
                dssv[i].xuat();
            break;
        }
        else
        {
        cout<<"Nhap sai, vui long nhap lai: ";
        }
}

void lop::themsv(const sv &sv1) { 
    bool isExisted = false;
    for(int i=0; i<sl; i++)
    {
        if(dssv[i].getmssv() == sv1.getmssv())
        {
            isExisted = true;
            break;
        }
    }
    if(isExisted == false)
    {
        this->sl++;
        sv* newdssv = new sv[this->sl];
        for(int i=0; i<this->sl-1; i++)
            newdssv[i] = this->dssv[i];
        newdssv[this->sl-1] = sv1;
        if(this->sl-1>0)
            delete [] dssv;
        this->dssv = newdssv;
    }
    else
    {
        cout<<"Sinh vien nay da co trong danh sach lop roi";
    }
}

void lop::xuatsv() {
    if(sl>1)
    {
        this->sl--;
        sv* newdssv = new sv[this->sl];
        for(int i=0; i<this->sl; i++)
            newdssv[i]= this->dssv[i];
        delete [] this->dssv;
        this->dssv = newdssv;
    }
    else
        cout<<"Lop nay chi co 1 nguoi, xoa se khong con ai trong lop";
}

//return L if lop rong
//return con tro cua lop, or null
//index lop (sapxep)
//them svien phat vung nho moi,
//rut svien xoa vung nho
