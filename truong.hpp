//
//  truong.hpp
//  sv+lop+truong
//
//  Created by Hyber on 06/03/2024.
//

#ifndef truong_hpp
#define truong_hpp

#include <iostream>
#include "lop.hpp"
class truong
{
private:
    int sll;
    lop* dsl;
    int matruong;
    string tentruong;
public:
    truong();
    void nhapdsl();
    void xuatdsl() const;
    void Luachon();
    ~truong();
};


#endif /* truong_hpp */
