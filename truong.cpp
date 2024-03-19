//
//  truong.cpp
//  sv+lop+truong
//
//  Created by Hyber on 06/03/2024.
//

#include "truong.hpp"

truong::truong() {
    this->sll=0;
    this->dsl=NULL;
    this->matruong=0;
    this->tentruong="";
}

void truong::nhapdsl() {
    cout<<"Nhap so luong lop: ";
    cin >> this->sll;
    cout<<endl;
    cout<<"Nhap ma truong: ";
    cin >> this->matruong;
    cout<<endl;
    cin.ignore();
    cout<<"Nhap ten truong: ";
    getline(cin, this->tentruong);
    cout<<endl;
    this->dsl=new lop[this->sll];
    for(int i=0; i<sll; i++)
    {
        cout<<"Nhap lop thu "<<i+1<<" :"<<endl;
        this->dsl[i].nhapdshs();
    }
    cout<<endl;
}

void truong::xuatdsl() const {
    for(int i=0; i<sll; i++)
        dsl[i].xuatdshs();
}
void truong::Luachon()
{
    int k;
    int i;
    cout<<"Chon lop thu :";
    cin>>i;
    while(true)
    {
        cout<<endl<<"Dua ra lua chon cua ban: "<<endl;
        cout<<"(1) Sap xep sinh vien"<<endl;
        cout<<"(2) Them sinh vien"<<endl;
        cout<<"(3) Xuat sinh vien"<<endl;
        cout<<"(4) Exit"<<endl;
        cin>>k;
        if(k==1)
        {
            cout<<"Nhap D de sap xep theo diem, M de sap xep theo mssv"<<endl;
            string a;
            cin.ignore();
            cin>>a;
            cout<<"Nhap 0 de sap xep tu lon den be, nhap 1 de sap xep tu be den lon"<<endl;
            int b;
            cin>>b;
            this->dsl[i].sapxep(a, b);
            cout<<"Lop sau khi sap xep: "<<endl;
            this->dsl[i].xuatdshs();
        }
        else if(k==2)
        {
            cout<<"Nhap hoc sinh de them: "<<endl;
            sv c;
            c.nhap();
            dsl[i].themsv(c);
            dsl[i].xuatdshs();
        }
        else if(k==3)
        {
            cout<<"Xuat sinh vien cuoi cung, dsl sau khi xuat la: "<<endl;
            dsl[i].xuatsv();
            dsl[i].xuatdshs();
        }
        else if(k==4)
            break;
        else
            cout<<"Lua chon khong ton tai, vui long lua chon lai.";
    }
}
truong::~truong()
{
        delete [] this->dsl;
}


