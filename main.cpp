#include "UUID.hpp"
#include "stdio.h"

int main()
{

    while ( true )
    {
        auto p = UUID::create();
        printf( "UUID:%s\r\n", p.c_str());
        auto p1 = UUID::create_format();
        printf( "UUID:%s\r\n", p1.c_str() );
    }

    return 0;
}