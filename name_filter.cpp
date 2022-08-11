#include <bits/stdc++.h>
using namespace std;

void Short_out(vector<string>v){
    int p;
        cout<<"Enter the number of letters you want to pass => ";
        cin>>p;
    for(int i=0; i < v.size();++i)
    {

        cout<<"Enter Name"<< 1+i<<" :";
        cin>>v[i];
            cout<<endl;
        

        if(v[i].size()>p)
        {
            cout<<"Too long....."<<endl;
        }

    }
        for(int i=0; i< v.size(); ++i)
        {
             if(v[i].size()<=p)
            {
              cout<<v[i]<<endl;
            }
        }
    
}

int main(){
    int n;
    cout<<"Enter number of Names you want => ";
    cin>>n;
    
        vector<string>v(n);

        Short_out(v);

}
