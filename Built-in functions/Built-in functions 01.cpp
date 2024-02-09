pointers & iterators , begin, end, Lexicographical

max(val, val)                            //returns the maximum value
min(val, val)                           //returns the minimum value
min_element(begin, end)		       //returns an iterator                         //O(N)
max_element(begin, end)		      //returns an iterator                         //O(N)


count(begin, end, val)		  	   //returns number of occurences of val         //O(N)
find(begin, end, val)                     //iterator                                    //O(N)


copy(begin1, end1, begin2)	     //iterator		                                 //O(N)
fill(begin, end, val)		                                                        //O(N)
reverse(begin, end)			                                               //~O(N)
sort(begin, end,function)			         //Ascendignly                                 //O(NLog(N))


binary_search(begin, end, val)           //bool                                        //O(Log(N))
lower_bound(begin, end, val)		 //iterator >=	                               //O(Log(N))
upper_bound(begin, end, val)		 //iterator > 	                               //O(Log(N))


next_permutation(begin, end)		 //bool	                                       //O(N)
prev_permutation(begin, end)		 //bool	                                       //O(N)