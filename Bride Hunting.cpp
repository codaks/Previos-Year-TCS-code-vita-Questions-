#include<bits/stdc++.h>

using namespace std;

int main(){
    /*
    1 0 1 1 0 1 1 1 1
    0 0 0 1 0 1 0 0 1

    */
    vector<vector<int> >inp;
    int n,m,data;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        vector<int> vct;
        for(int j = 0;j<m;j++){
            cin>>data;
            vct.push_back(data);
        }
        inp.push_back(vct);
    }
    int col,row,quality = 0,c_quality=0;
    
    for(int i = 0;i<n;i++){
        
        for(int j = 0;j<m;j++){
            c_quality = 0;
            if(i==0 && j ==0)
                continue;
            if( j<=m-1 && inp[i][j+1]==1 )
                c_quality +=1;
            if(((j>0 && i!=0) || j>1 ) && inp[i][j-1]==1   )
                c_quality +=1;
            if(i>0 && inp[i-1][j]==1 )
                c_quality +=1;
            if(i<n-2 && inp[i+1][j]==1 && i<n-2)
                c_quality +=1;
            if( (i<n-1 && j<m-1) && inp[i+1][j+1]==1 )
                c_quality +=1;
            if((i>0 && j<m-1) && inp[i-1][j+1]==1  )
                c_quality +=1;
            if((i<n-1 && ((j>0 && i!=0) || j>1 )) && inp[i+1][j-1]==1 )
                c_quality +=1;
            if((i>0 && ((j>1 && i>0) || j>0 )) && inp[i-1][j-1]==1   )
                c_quality +=1;
    
            cout<<i<<":"<<j<<" ---"<<c_quality<<endl;
        }
        
    }
}

