//traverse from end
for(int i=d.size()-1;i>=0;i--)  {
          if(d[i]<9){  //number less than 9 add 1
              d[i]++;
              return d;
          }
          else{
              d[i]=0;  //make it 0 if it is 9 and carrywill be one
          }
      }
        d.push_back(0); //vector is dynamic no need to add size
        d[0]=1;