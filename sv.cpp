//
//  sv.cpp
//  sv+lop+truong
//
//  Created by Hyber on 06/03/2024.
//

#include "sv.hpp"
sv::sv()
{
    this->mahs=0;
    this->hoten="";
    this->toan=0;
    this->van=0;
    this->anh=0;
}
void sv::nhap()
{
    cout<<"Nhap ma hoc sinh: ";
    cin>>this->mahs;
    cout<<endl;
    cin.ignore();
    cout<<"Nhap ho ten: ";
    cin>>this->hoten;
    cout<<"Nhap diem toan, anh va van: ";
    cin>>this->toan;
    cin>>this->van;
    cin>>this->anh;
    cout<<endl;
}
int sv::getmssv()const
{
    return mahs;
}
void sv::xuat()const
{
    cout<<"Ma hoc sinh la";
    cout<<this->mahs<<endl;
    cout<<"Ten hoc sinh la";
    cout<<this->hoten<<endl;
    cout<<"Ba diem toan van anh lan luot la"<<endl;
    cout<<this->toan<<" ";
    cout<<this->van<<" ";
    cout<<this->anh<<endl;
}
int sv::gettongdiem() const
{
    return toan+van+anh;
}

