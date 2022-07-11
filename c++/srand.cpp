#include <iostream>	
#include <ctime>
#include <cstdlib>

using namespace std;

bool password_is_valid (string password)
{
        string valid_pass = "qwerty123";
        if (valid_pass == password)
                return true;
        else
                return false;
}

void get_pass ()
{
        string user_pass;
        cout << "Cin password: ";
        getline(cin, user_pass);//cin>>user_pass
        if (!password_is_valid(user_pass)) {
                cout << "Brysi!" << endl;
                get_pass (); // Здесь делаем рекурсию
        } else {
                cout << "Ok " << endl;
        }
}

int main()
{
        get_pass ();
        
}
