//
//  sv.hpp
//  sv+lop+truong
//
//  Created by Hyber on 06/03/2024.
//

#ifndef sv_hpp
#define sv_hpp

#include <iostream>
using namespace std;
#include <string>
#pragma once

class sv
{
private:
    int mahs;
    string hoten;
    int toan;
    int van;
    int anh;
public:
    sv();
    void nhap();
    void xuat() const;
    int gettongdiem() const;
    int getmssv()const;
};
#endif /* sv_hpp */
