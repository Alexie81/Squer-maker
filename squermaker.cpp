#include <iostream>
using namespace std;

int - main() {
    //header-banner:
    cout<<"\t\t\t\t\t\t________________\n";
    cout<<"\t\t\t\t\t\t| SQUARE MAKER |\n";
    cout<<"\t\t\t\t\t\t````````````````\n";
    
    
    //takes input:
    int side, n, a, b;
    cout<<"Enter the side length: ";
    cin>>side;
    cout<<side<<endl<<endl;
    
    // Todo: fix run-time error
    
    //engine:
    for (n = 0; n < side; n++)
        cout<<"_ ";
    cout<<endl;
    
    for (n = 0; n <= (side - 3); n++)
    {
        cout<<"| ";
        for (a = 0; a < side - 2; a++)
        {
            cout<<"  ";
        }
        cout<<"|"<<endl;
    }
    for (b = 0; (b < side) && (side != 1); b++)
        cout<<"_ ";
        
        
    //footer:
    cout<<endl<<side<<"×"<<side<<endl<<endl;
    cout<<"Coded by: #Alexie01";
    return 0;
}
