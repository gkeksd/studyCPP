#include "dynamicarray_SPtr.h"
#include "Myexception.h"
#include "smartptr.h"

int main()
{
    //DynamicArray da01(5);

    try {
        DynamicArray_SPtr da01(5);

        da01.setAt(0, 999);
        cout << da01.getAt(0) << '\n';
        cout << da01.getAt(3) << '\n';
        cout << da01.getAt(2) << '\n';
        //bool ok = da01.setAt(5, 555);
        //cout << da01.getAt(5) << '\n';  // 1000
        
        //da01.setAt(5, 555);  // !
        //cout << da01.getAt(5) << '\n';  // !
    }
    catch (int err) {
        cout << "에러 코드 : " << err << '\n';
    }
    catch (const char* texts) {
        cout << texts;
    }
    catch (const MyException& me) {
        cout << me.errorCode << '\n';
        cout << me.errorMessage << '\n';
        cout << me.errorAddress << '\n';
    }

    return 0;
}
