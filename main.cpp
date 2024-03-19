#include "truong.hpp"
int main()
{
    int n;
    cout<<"Nhap so truong: ";
    cin>>n;
    truong a[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap truong thu "<<i+1<<": "<<endl;
        a[i].nhapdsl();
    }
    while(true)
    {
        cout<<"Nhap truong ma ban muon lua chon la truong thu:";
        int thu;
        cin>>thu;
        a[thu-1].Luachon();
        cout<<"Ban muon lua chon thao tac tren truong khac khong?"<<endl;
        cout<<"(1) Co"<<endl;
        cout<<"(2) Khong"<<endl;
        int op;
        cin>>op;
        if(op==2)
            break;
        while(true)
        {
            if(op != 1)
                cout<<"Ban da nhap sai, vui long nhap lai";
            else if(op ==1)
                break;
        }
    }
}
