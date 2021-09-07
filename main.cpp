#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream myfile("file.txt");
    if(!myfile.is_open())
    {
        cout<<"file not exit"<<endl;
    }
    int n;
    cout<<"Enter 5 numbers "<<endl;
    for(int i=1;i<=5;i++)
    {
        cin>>n;
        myfile<<n<<endl;
    }
    myfile.close();
    int x;
    ifstream myf("file.txt");
    while (myf >> x) {
        if(x%2==0)
        {
            cout<<x<<" It's even"<<endl;
        }
        else{
            cout<<x<<" It's odd"<<endl;
        }
    }
    myf.close();

    return 0;
}
