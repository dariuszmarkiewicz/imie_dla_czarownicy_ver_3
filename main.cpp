#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string imie[n];
    string pseudonim[n];

    for(int i=0; i<n; i++)
        {
           cin >> imie[i] >> pseudonim[i];
        }

    string im, ps;


    for(int i=0; i<n; i++)
        {
            im = imie[i];
            ps = pseudonim[i];

            for(int j=0; j<ps.size(); j++)
                {
                    if(int(ps[j])==int(im[0]))
                        {
                            if((ps.size()-j>=im.size())&&(ps.size()-j>=11))
                                {
                                    cout << "TAK" << endl;
                                    break;
                                }

                            else
                                {
                                    cout << "NIE" << endl;
                                    break;
                                }

                        }
                }

            }

    return 0;
}
