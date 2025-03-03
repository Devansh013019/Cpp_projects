#include <iostream>
using namespace std;
class data
{
    private:
        string entry[50][2], exit[50][2];
        int i=0,j=0;
    public:
    void choice()
    {
        int opt;
        cout << "------------------------- \n | Enter action to :\n | 1 for input \n | 2 for exit \n | 3 for print \n------------------------- " << endl;
        cin >> opt;
        if (opt == 1)
        {
            input_entry();
        }
        if (opt == 2)
        {
            input_exit();
        }
        if (opt == 3)
        {
            int n,cho;
            cout << " Choose 1 for entry details \n Choose 2 for exit details \n----------------------------" << endl;
            cin>>cho;
            if(cho==1)
            {
                cout << "Enter sn no"<<endl;
                cin >> n;
                print_entry(n);
            }
            if(cho==2)
            {
                cout << "Enter sn no"<<endl;
                cin >> n;
                print_exit(n);
            }
            else
            cout<<"Invalid input"<<endl;
        }
    }
        void input_entry()
        {
            while(i<50)
            {
                cout << "---------------------------- \n|Enter vehicle number : " << endl;
                cin >> entry[i][0];
                transform(entry[i][0].begin(), entry[i][0].end(), entry[i][0].begin(),
                          ::toupper);
                cout << "|Enter entry time : " << endl;
                cin >> entry[i][1];
                cout << "---------------------------- \n " ;
                i++;
                break;
            }
            choice();
        }
        void input_exit()
        {
            while(j<50)
            {
                cout << "---------------------------- \n|Enter vehicle number : " << endl;
                cin >> exit[j][0];
                transform(exit[j][0].begin(), exit[j][0].end(), exit[j][0].begin(),
                          ::toupper);
                cout << "|Enter entry time : " << endl;
                cin >> exit[j][1];
                cout << "---------------------------- \n ";
                j++;
                break;
            }
            choice();
        }
        void print_entry(int n)
        {
            cout << "---------------------------- \n|Vehicle Number : " << entry[n - 1][0] << endl;
            cout << "|Entry Time : " << entry[n - 1][1] << "\n---------------------------- \n";
            choice();
        }
        void print_exit(int n)
        {
            cout << "---------------------------- \n|Vehicle Number : " << exit[n - 1][0] << endl;
            cout << "|Entry Time : " << exit[n - 1][1] << "\n---------------------------- \n";
            choice();
        }

};
int main()
{
    data x1;
    x1.choice();
    return 0;
}