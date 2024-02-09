priority_queue:

-priority_queue keeps the maximum value on top of the Tree.
   
  Initialization:
    -priority_queue<T>pq;

  Commonly used Member functions:
   - pq.push(val);  //o(log(n))
   - pq.pop();
   - pq.top();
   - pq.size();
   - pq.empty();

  Iteration:
    while (!pq.empty()){
        printf("%d ",pq.top());
        pq.pop();
    }




set<T>st:

-Set used to store the unique elements, and all the elements are stored in a sorted manner.
-Sets are implemented using Binary search trees.

  Initialization:
    -set<T>st;

  Commonly used Member functions:
   -st.insert(val)     o(log(n))
   -st.begin()
   -st.end()
   -st.count(val)     return 1 or 0
   -st.find(val)      return iterator
   -st.erase(val)     erase(iterator)
   -st.size()
   -st.empty()
   -st.lower_bound(val)   iterator where >= val
   -st.upper_bound(val)   iterator where > val

  Iteration:
    for (auto it=st.begin();it!=st.end();it++) {
        printf("%d ", *it);
    }

    for(auto it:st){
         printf("%d ",it);
    }





map<T,T>mp:

-Map is an associative container/array that store the elements as a combination of key-value pairs.
-Keys are in ascending order.

  Initialization:
    -map <key,value> mp

  Commonly used Member functions:
   -mp.insert({key,val})    o(log(n))
   -mp.begin()
   -mp.end()
   -mp.empty();
   -mp.size()
   -mp.count(key);    return 1 or 0
   -mp.lower_bound()  iterator where >= val
   -mp.upper_bound()  iterator where > val
   -mp.erase(val)     erase(iterator)

  Iteration:

    for (auto it=st.begin();it!=st.end();it++) {
        printf("%d ", *it);
    }

    for(auto it:st){
         printf("%d ",it);
    }        