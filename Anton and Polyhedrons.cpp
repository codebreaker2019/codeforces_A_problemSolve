//.... Anton and polyhedrons
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int sum =0;
    while(n--)
    {

        cin>>s;
        if (s=="Tetrahedron")
          {
             sum+=4;
            // cout<<sum<<endl;
          }
        else if (s=="Cube")
           {
              sum+=6;
             // cout<<sum<<endl;
           }
        else if (s=="Octahedron")
           {
                sum+=8;
               // cout<<sum<<endl;
           }
        else if (s=="Dodecahedron")
           {
                sum+=12;
                //cout<<sum<<endl;
           }
        else if (s=="Icosahedron")
            {
                sum+=20;
               // cout<<sum<<endl;
            }
    }
    cout<<sum<<endl;

    return 0 ;
}
/* int Tetrahedron = 4;
    int Cube = 6;
    int Octahedron = 8;
    int Dodecahedron = 12;
    int Icosahedron =20;*/
