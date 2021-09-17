//
// Implements the Name Class
// Author: Max Benson
// Date: 07/25/2021
//

#include <string.h>
#include "Name.h"

Name::Name(const char* first, const char* last) {
    _first = new char[strlen(first)+1];
    strcpy(_first,first);
    _last = new char[strlen(last)+1];
    strcpy(_last,last);
}

const char* Name::First() const {
    return _first;
}

const char* Name::Last() const {
    return _last;
}

