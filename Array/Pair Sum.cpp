// Brute Force Approach TC->O(n^2)

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>> res;
    sort(arr.begin(),arr.end());
  for(int i=0;i<arr.size();i++)
    {
      for(int j=i+1;j<arr.size();j++)
        if(arr[i]+arr[j]==s)
        {
            vector<int> ans;
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            res.push_back(ans);
           
        }
        
    }
    sort(res.begin(),res.end());
        return res;
}

// Approach 2 Using HashMap TC->O(n),SC->O(n)

   int n = arr.size();
    map<int, int> hash;

    // This will store the result.
    vector<vector<int>> ans;

    for (int ele : arr)
    {
        int count = hash[s - ele];
        vector<int> pair(2);
        pair[0] = ele;
        pair[1] = s - ele;
        while (count--)
        {
            ans.push_back(pair);
        }
        hash[ele] += 1;
    }
    vector<vector<int>> res(ans.size(), vector<int>(2, 0));
    for (int i = 0; i < ans.size(); i++)
    {
        int a = ans[i][0], b = ans[i][1];
        res[i][0] = min(a, b);
        res[i][1] = max(a, b);
    }
    sort(res.begin(), res.end());
    return res;
}
