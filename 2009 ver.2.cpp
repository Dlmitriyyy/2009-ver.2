#include "test_2009_ver2.h"
#include <iostream>
#include <vector>   
using namespace standard;                 /* (1) */

int main() {
    i_number num1;                        /* (2) - Ціле число */
    u_number num2;                        /* (3) - Невід`ємне число */
    ul_number num3;                       /* (4) - Невід`ємне велике число */
    l_number num4;                        /* (5) - Велике число */
    ll_number num5;                       /* (6) - Дуже велике число */
    f_number num6;                        /* (7) - Дробове число типу float */
    d_number num7;                        /* (8) - Дробове число типу double */
    symbol ch;                            /* (9) - Символьний тип */
    text input_text;                      /* (10) - Строковий тип */
    logical true_false;                   /* (11) - Булева змінна */
    locked i_number num8 = 1;             /* (12) - Константне ціле число */
    vector<i_number> name_vector;
    name_vector.in_to_vec(num8);          /* (13) - push_back */
    name_vector.rem_from_vec();           /* (14) - pop_back */

#ifdef windows32                          /* (15) -  _WIN32 */
    system("chcp 1251>nul");
    cout << "Введіть число: ";
    input >> num2;                        /* (16) - cin */
    output << "Ваше число: " << num2;     /* (17) - cout */
#elif windows64                           /* (18) - _WIN64 */
    system("chcp 1251>nul");
#elif linux                               /* (19) - __linux__ */
#elif apple                               /* (20) - __APPLE__ */
#else
#endif 

    return 0;
}