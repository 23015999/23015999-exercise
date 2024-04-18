#include <iostream>

using namespace std;

int main()
{
    int looks;
    int IQ;
    cout<<"Let's help you choose a patner, choose from the following characteristics to see if the person will be a good patner"<<endl;

    cout<<"IQ level"<<endl;

    cout<<"1)High IQ"<<endl;
    cout<<"2)Average IQ"<<endl;
    cout<<"3)Low IQ"<<endl;
    cin >>IQ;
    cout<<"How do rate the looks"<<endl;

    cout<<"1)Gorgeous"<<endl;
    cout<<"2)Average looks"<<endl;
    cout<<"3)Bad looks"<<endl;

    cin>>looks;

    if (IQ == 1 && looks == 1)
        cout<<"She's a rare breed, keep her";

        else if (IQ ==1 && looks == 2)
        cout<<"She is a wife material, keep her";

        else if (IQ == 1 && looks == 3)
        cout<<"She's most likely to always fight you, let her go";

        else if (IQ == 2 && looks == 1)
        cout<<"She is a wife material keep her";

 else if (IQ == 2 && looks == 2)
        cout<<"Keep her,she can take care of a man";
        else if (IQ == 2 && looks == 3)
        cout<<"Keep her,she might look good later";
        else if (IQ == 3 && looks == 1)
        cout<<"Slay queen that one, let he go";
        else if (IQ == 3 && looks == 2)
        cout<<"Keep her and teach her skills to work";
        else if (IQ == 3 && looks == 3)
        cout<<"Let her go,  its only problems";
        else cout<<"Enter valid option(s) from the given";
    return 0;
}
