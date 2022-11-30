#include "hash.h"

//  @Usage : hash(char *)
//  @brief : Converts the C-string to a Hash
//  @authors : Dan Bernstein, cnicutar
const unsigned long long hash(unsigned char *str)
{
    unsigned long long hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;
    return hash;
}