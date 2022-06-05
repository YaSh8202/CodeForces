int min_index = n+1;
    for(auto i: ci){
      if(i.second == 0)
        break;
      int x = i.first - 'a';
      if(k>=x){
        int ch = i.first;
        k -= x; 
        s[i.second] = s[i.second] - x;
        for (char j = s[i.second]; j <= ch; j++)
        {
          m[j] = min(s[i.second], m[j]);
        }
      }
    }
    ffor(i, 0, n)
    {
      s[i] = m[s[i]];
      if (k > 0 and s[i] != 'a')
      {
        int ch = s[i];
        int x = min(s[i] - 'a', k);
        k -= x;
        s[i] = s[i] - x;
        for (char j = s[i]; j <= ch; j++)
        {
          m[j] = min(s[i], m[j]);
        }
      }
    }