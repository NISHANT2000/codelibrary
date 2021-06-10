int minimum_vertical_sum(vector<vector<int>>v)
{
    int n=v.size();
   // vector<int> vi;
    int mins=INT_MAX;
    int i=0;
    while(1)
    {
      int sum=0;
    for(int j=0;j<n;j++)
    {
        if(v[j].size()>i)
        sum+=v[j][i];
    }
    if(sum==0)
    break;
    mins=min(mins,sum);
    i++;
    }
    return mins;
    
}
