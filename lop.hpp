//
//  lop.hpp
//  sv+lop+truong
//
//  Created by Hyber on 06/03/2024.
//

#ifndef lop_hpp
#define lop_hpp

#include <iostream>
#include "sv.hpp"
class lop
{
private:
    int sl;
    sv* dssv;
    int top5[5];
    int malop;
    string tenlop;
    friend class truong;
public:
    lop();
    void nhapdshs();
    void xuatdshs()const;
    void xuatdssvtopN();
    void sapxep(string a, int b);
    void themsv(const sv &sv1);
    void xuatsv();
    ~lop();
};

#endif /* lop_hpp */
