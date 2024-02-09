  1- When? Why?
  2- How to use?
  3- How does it work?  - Data Structures

-Pair is used to combine together two values which may be different in type. 
-pair<T,T> p;
    -pair<int ,int> p={1,5};
    -pair<int ,int> p= make_pair(1,5);
    -pair<string ,int> p= make_pair("Hassan",5);
    -first, second

----------------
-Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted
-vector<T> v;

  Initialization:
    - vector<int> v(size);       //initialized by Zeros
    - vector<int> v(size, val);
    - vector<int> v2(v1);
    - vector<int> v2(begin, end);
    - vector<int> v = vector<int>();

  Commonly used Member functions:
    - push_back(val)
    - pop_back()
    - back()
    - front()
    - size()
    - empty()
    - begin()
    - end()
    - rbegin()
    - rend()
    - resize(size)
    - reserve(capacity)  
    - erase(it)    ---   erase(begin, end)
    - clear()

  Iteration:
    for(int i=0 ; i<n ;i++){
      scanf("%d", &x);
      v.push_back(x);
    }

    for(int i = 0 ; i < n ;i++)
      printf("%d ", v[i]);

    for(int i : v)
      printf("%d ", i);

    for(auto it = v.begin() ; it!=v.end() ; it++)
      printf("%d ", *it);
--------------

-What if we want to insert in the beginning?
-Deque is similar to vectors, but are more efficient in case of insertion and deletion of elements at the end, and also at the beginning
-deque<T> dq;

  Initialization:
    - deque<int> dq(size);       //initialized by Zeros
    - deque<int> dq(size, val);
    - deque<int> dq2(dq1);
    - deque<int> dq2(begin, end);
    - deque<int> dq = deque<int>();

  Commonly used Member functions:
    - push_back(val)
    - pop_back()
    - back()
    - push_front(val)
    - pop_front()
    - front()
    - begin()
    - end()
    - rbegin()
    - rend()
    - resize(size)
    - size()
    - empty()
    - erase(it)    ---   erase(begin, end)
    - clear()

  Iteration:
    for(int i = 0 ; i < n ;i++){
      scanf("%d", &x);
      dq.push_back(x);
    }
    for(int i = 0 ; i < n ; ++i)
      printf("%d ", dq[i]);
    for(int i : dq)
      printf("%d ", i);
    for(auto it = dq.begin() ; it!=dq.end() ; ++it)
      printf("%d ", *it);
--------------

  queue<T> q;    //FIFO
  Features:
    - deque with some restrictions.
    - First in first out.

  Commonly used Member functions:
    - push(val)
    - pop()     
    - front()  
    - size()
    - empty() 

  Iteration:
    while(!q.empty()){
      printf("%d ", q.front());
      q.pop();
    }
--------------

  stack<T> st;    //LIFO
  Features:
    - deque with some restrictions.
    - Last in first out.

  Commonly used Member functions:
    - push(val)
    - emplace(pair)
    - pop()  
    - top()
    - size()
    - empty() 
 
  Iteration:
    while(!st.empty()){
      printf("%d ", st.top());
      st.pop();
    }

